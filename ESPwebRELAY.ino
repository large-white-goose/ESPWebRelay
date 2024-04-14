// Copyright (c) 2024 @large-white-goose
// Permission is granted under the MIT license (see LICENSE file for details).

/*********************************************************************
 * File Name: ESPWebRELAY.ino
 * Author: @large-white-goose
 * Date: 2024-04-14
 * Version: 1.0
 * Description: This file implements a web server for relay control using an ESP8266.
 *********************************************************************/


#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

// replace with the name u want to give to the AP

const char* ssid = "******"; 
const char* password = "******";  

#define relay 4

ESP8266WebServer server(80);

const char* page = R"rawliteral(
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=no">
    <title>Smart Light</title>
    <style>
        body {
            -webkit-user-select: none;
            -moz-user-select: none; 
            -ms-user-select: none; 
            user-select: none; 
            text-align: center;
        }
        h1 {
            font-size: 50px;
        }
        h3 {
            font-size: 23px;
        }
        .button {
            font-size: 45px;
            display: block;
            width: 250px;
            margin: 10px auto;
            padding: 10px;
            text-decoration: none;
            color: white;
            border: none;
            border-radius: 5px;
            cursor: pointer;
        }
        .button:hover {
            filter: brightness(85%);
        }
        .blue-button {
            background-color: #007bff;
        }
        .blue-button:hover {
            background-color: #003f82;
        }
    </style>
</head>
<body>
    <h1>Smart Home</h1>
    <h3>Smart Light</h3>
    <a href="/Lon" class="button blue-button">ON</a>
    <a href="/Loff" class="button blue-button">OFF</a>
</body>
</html>
)rawliteral";

void handleRoot() {
    server.send(200, "text/html", page);
}

void handleLon() {
    digitalWrite(relay, HIGH);
    server.send(200, "text/html", page);
}

void handleLoff() {
    digitalWrite(relay, LOW); 
    server.send(200, "text/html", page);
}
void setup() {

    pinMode(relay, OUTPUT);

    WiFi.mode(WIFI_AP);
    WiFi.softAP(ssid, password);

    server.on("/", HTTP_GET, handleRoot);
    server.on("/Lon", HTTP_GET, handleLon);
    server.on("/Loff", HTTP_GET, handleLoff); 




    server.begin();
}

void loop() {
    server.handleClient();
        
}


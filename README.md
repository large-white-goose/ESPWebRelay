# ESPWebRelay
ESP8266's AP controlled Relay


ESPWebRelay: Web Server Controlled Relay for ESP8266
This project provides an ESP8266 web server that allows you to control a relay switch remotely through a web interface. This is perfect for building
simple home automation projects or controlling devices via the internet.

Features:
Web interface: Control the relay state (on/off) through a user-friendly web page accessible on any web browser.
ESP8266 compatibility: Designed to work seamlessly with the ESP8266 microcontroller for easy implementation.
Customizable: Modify the code to suit your specific needs, such as integrating with sensors or controlling multiple relays.
Getting Started:
Hardware:

ESP8266 microcontroller board (e.g., NodeMCU)
Relay module
Breadboard and jumper wires (for connecting components)
Power supply for your ESP8266 board
Software:

Arduino IDE (https://support.arduino.cc/hc/en-us/articles/360019833020-Download-and-install-Arduino-IDE)
Instructions:

Clone or download this repository.
Open the ESPWebRELAY.ino file in the Arduino IDE.
Configure name and password for WiFi network (SSID and password) in the code.
Connect your ESP8266 board, select the appropriate board and upload the code.
Web Interface:

Once uploaded, The ESP8266 will generate an Acess Point which you can connect to via  password.
Open a web browser and navigate to the IP address assigned(Usually 192.168.4.1 or check manually) via Serial monitor.
The web interface will display a button to control the relay state (on/off).
Additional Information:
This project is licensed under the MIT License (see LICENSE file for details).
Feel free to modify and improve the code for your specific applications.
For more advanced features and functionalities, explore additional libraries and resources for ESP8266 development.
Contributing:
We welcome contributions to this project! If you have improvements, bug fixes, or new features, feel free to submit a pull request.

HubChuk
=======

HubChuk is natural remote control for Hubsan multirotors, based on a Wii Nunchuk as an intuitive remote control and a A7105 transceiver as an RF link.

It has been successfully tested on Hubsan X4, Hubsan X4 FPV and Hubsan Q4.


How to make one:
----------------
- Parts are listed in the bill of materials (Documentation/Bill of materials.txt)
- Hardware: wire everything according to the schematics (hardware/HubChukSchematic.jpg)
- Software: 
	install the Arduino IDE
	install the ArduinoNunchuk librairies (Software/External libs/ArduinoNunchuk) 
	open Hubchuk.ino from the Arduino IDE, Tools / Compile / Select Arduino Lilypad USB / Select com port / Upload

How to use it:
--------------
Joystick up/down: 	throttle
Joystick left/right: 	rudder (yaw)
Tilt left/right: 	ailerons (roll)
Pitch forward/backward: elevator (pitch)
Z button: 		lights on / off

	
HubChuk is using librairies from:
- Gabriel Bianconi (ArduinoNunchuk)
- PracturedBlue (Deviation project).


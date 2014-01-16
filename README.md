HubChuk
=======

HubChuk is natural remote control for Hubsan multirotors, based on a Wii Nunchuk as an intuitive remote control and a A7105 transceiver as an RF link.
HubChuk stands for "Hubsan Nunchuk".

HubChuk has been successfully tested on Hubsan X4, Hubsan X4 FPV and Hubsan Q4.

How to make one:
----------------
- Parts are listed in the bill of materials (Hardware/Bill of materials.txt)
- Hardware: wire everything according to the schematics (hardware/HubChuk_schematic.png)
- Software: 
	install the Arduino IDE
	install the ArduinoNunchuk librairies (Software/External libs/ArduinoNunchuk) 
	open Hubchuk.ino from the Arduino IDE, Tools / Compile / Select Arduino Lilypad USB / Select com port / Upload

How to use it:
--------------
Switch on the Hubsan multirotor
Switch on the HubChuk
The Hubsan lights should blink, then stay on for a few seconds (bind is successful), then switch off. 
You're ready for takeoff !

How to control the multirotor from the Nunchuk:
Joystick up/neutral: 	throttle +/-. Neutral is 0% power, Up is 100% power. Down to neutral: dead band.
Joystick left/right: 	rudder (yaw)
Tilt left/right: 	ailerons (roll)
Pitch forward/backward: elevator (pitch)
Z button: 		lights on / off
	
	
HubChuk is using librairies from:
- Gabriel Bianconi (ArduinoNunchuk)
- PracturedBlue (Deviation project).

Thanks !

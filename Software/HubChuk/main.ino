/*
    This project is free software: you can redistribute it and/bor modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This project is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    If not, see <http://www.gnu.org/licenses/>.
*/

void loop() {
  byte debounceLedCount = 0;
  byte debounceThreshold = 5;
  
  pinMode(LED, OUTPUT);
  digitalWrite(LED, HIGH);
    
  pinMode(POWERPIN, OUTPUT);  
  digitalWrite(POWERPIN, HIGH);
    BIND_OK = 0;
    
  Serial.begin(115200);
  A7105_Setup(); // A7105_Reset();
  int startTime, waitTime, hubsanWait,finishTime;
  initialize();

  delay(250);
  nunchuk.init();

  digitalWrite(LED, LOW);
  startTime = micros();
      
  while (1) {
    hubsanWait = hubsan_cb();
  
    if (BIND_OK) { 
      digitalWrite(LED, HIGH);
      nunchuk.update(); 
      if (nunchuk.analogY < 135) { nunchuk.analogY = 128; }
      throttle = map(nunchuk.analogY, 128,230, 0 ,255);
      rudder = map(nunchuk.analogX, 32, 230, 255, 0);
      aileron = map(nunchuk.accelX, 310, 710, 255, 0);
      elevator = map(nunchuk.accelY, 310, 710, 0, 255); 

      if (nunchuk.zButton) { 
        debounceLedCount++; 
        if (debounceLedCount >= debounceThreshold) { 
          LEDS_ON = !LEDS_ON; debounceLedCount = 0; 
        } 
      }
          
    }

    // Serial.print("hubsanWait: " ); Serial.println(hubsanWait);
    // Serial.print("waitTime: " ); Serial.println(waitTime);
    // waitTime = hubsanWait - (micros() - startTime);
    
    delayMicroseconds(hubsanWait - 280); // 280=magic number, avec cette attente bind rapide et comms ok.
    startTime = micros();  
     
  }
}


# TOGGLING OF LED USING ARDUINO

## AIM
To write a program for blinking an LED pattern using Arduino.

---

## COMPONENTS REQUIRED
1. Arduino UNO board  
2. Connecting cable or USB cable  
3. LEDs  
4. Resistor  
5. Connecting wires  

---

## ALGORITHM
1. Start the process.  
2. Open **Arduino IDE 1.8.8**.  
3. Enter the code in the Arduino software.  
4. Compile the code.  
5. Connect the USB cable to the WiFi module.  
6. Select **Tools → Board → Module Node → Port**.  
7. Upload the code to the module.  
8. Stop the process.  

---

## CIRCUIT DIAGRAM
![Circuit Diagram](../images/Glowing%20Green%20%26%20Blue%20LED%20with%2010-second%20delay.png)


---

## PROGRAM
```cpp
void setup() {
    pinMode(0, OUTPUT);
    pinMode(1, OUTPUT);
}

void loop() {
    digitalWrite(0, HIGH);
    digitalWrite(1, LOW);
    delay(2000);
    digitalWrite(0, LOW);
    digitalWrite(1, HIGH);
    delay(2000);
}

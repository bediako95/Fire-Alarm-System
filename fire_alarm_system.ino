
#include <Wire.h> //Libary for communication among the wires//
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);


 
int buzzer=5;
int redled=6;
int flame_sensor=A0;


void setup() {  
// initialize the LCD
  
  lcd.init();

   // Turn on the blacklight and print a message.
  lcd.backlight();
  
   pinMode(buzzer, OUTPUT);
   pinMode(redled, OUTPUT);
   pinMode(flame_sensor, INPUT); 
   
  Serial.begin(9600);
  
   
   
  
  
}


void loop() {
int flame_detected = analogRead(flame_sensor); // read analog input pin A0

 
 // checking if flame has been detected
 if(flame_detected==1){         
  digitalWrite(redled, HIGH);   // red led should emit light
   tone(buzzer,1000,10000);    //buzzer should beep
   Serial.print("  Flame detected!");
   Serial.println("");
  delay(2000); // wait 2s for next reading
 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("FLAME DETECTED !!");   // LCD should prompts a message to user
 delay(1000);
 lcd.clear();
 lcd.setCursor(0,1); // go to start of  2nd line
 lcd.print("TAKE ACTION");        // LCD should prompt a message to user
 delay(1000);
 
  }
 // if flame is not detected
  
  else{
     digitalWrite(redled, LOW);  // red led should emit no light
      noTone(buzzer);            //buzzer should not beep
      lcd.clear();
      lcd.setCursor(0,1);
      lcd.print("SAFE");          // LCD should prompt a message to user
      delay(1000);
      lcd.clear();
      lcd.setCursor(0,1);
      lcd.print("NO FIRE DETECTED ");      // LCD should prompt a message to user
      delay(1000);
     
      
    }
     Serial.print("Sensor Value: ");      // prints reading on serial monitor
  Serial.println(flame_detected);

    
  
  
    
}

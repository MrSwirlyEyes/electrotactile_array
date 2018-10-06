#define NUM_PIXELS 8
byte relay[NUM_PIXELS] = {2,3,4,5,6,7,8,9};

void setup() {

//  Serial.begin(9600);
  
  // put your setup code here, to run once:
  for(int i = 0; i < NUM_PIXELS; i++) {
    pinMode(relay[i], OUTPUT);
  }

  for(int i = 0; i < NUM_PIXELS; i++) {
    digitalWrite(relay[i], HIGH);
    delay(100);
  }
}

void loop() {
//  Serial.println("on...");
  // put your main code here, to run repeatedly:
  for(int i = 0; i < NUM_PIXELS; i++) {    
    digitalWrite(relay[i], LOW);
//    delay(100);
  }  
  delay(1000);

//  Serial.println("off...");
  for(int i = 0; i < NUM_PIXELS; i++) {
    digitalWrite(relay[i], HIGH);
//    delay(100);
  }
  delay(1000);
}

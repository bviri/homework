int preHeat = 8;
int ready = 9;
int tooHot = 10;

void setup() {
  pinMode(preHeat, OUTPUT); 
  pinMode(ready, OUTPUT); 
  pinMode(tooHot, OUTPUT); 
}

void loop() {
  int bakingTemp = analogRead(A0);

  if (bakingTemp < 275){
    digitalWrite(preHeat, HIGH);
    delay(1000);
    digitalWrite(preHeat, LOW); 
    delay(1000); 
    
  } else if (bakingTemp > 276 && bakingTemp < 400){
    digitalWrite(ready, HIGH);
    delay(500);
    digitalWrite(ready, LOW);
    delay(500);
    
  } else if (bakingTemp > 401 && bakingTemp < 900) {
    digitalWrite(tooHot, HIGH);
    delay(100);
    digitalWrite(tooHot,LOW);
    delay(100);
  } 
 
}

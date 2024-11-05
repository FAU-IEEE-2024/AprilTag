//pin assignments
int PWM_1=2;
int PWM_2=3;
int PWM_3=4;
int PWM_4=5;

void setup() {
  Serial.begin(9600);

  //setting pins to output signal
  pinMode(PWM_1,OUTPUT);
  pinMode(PWM_2,OUTPUT);
  pinMode(PWM_3,OUTPUT);
  pinMode(PWM_4,OUTPUT);
}

void loop() {  
  //delay is than the previous version because the python scrip spams Serial with commands
  delay(10);
  char direction = Serial.read();
  Serial.println(direction);

  if (direction == '0') {
    //All pins to low
    //Stop command
    digitalWrite(PWM_1, LOW);
    digitalWrite(PWM_4, LOW);
    digitalWrite(PWM_2, LOW);
    digitalWrite(PWM_3, LOW);
  }
  else if (direction == 'w') {
    //Setting backward pins to low and forward pins to high
    //Forwards command
    digitalWrite(PWM_1, LOW);
    digitalWrite(PWM_4, LOW);
    digitalWrite(PWM_2, HIGH);
    digitalWrite(PWM_3, HIGH);
  }
    //Setting forward pins to low and backward pins to high
    //Backwards command
  else if (direction == 's') {
    digitalWrite(PWM_2, LOW);
    digitalWrite(PWM_3, LOW);
    digitalWrite(PWM_1, HIGH);
    digitalWrite(PWM_4, HIGH);
  }
}

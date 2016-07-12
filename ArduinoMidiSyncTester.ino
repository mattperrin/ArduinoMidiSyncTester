
byte midi_start = 0xfa;
byte midi_stop = 0xfc;
byte midi_clock = 0xf8;
byte midi_continue = 0xfb;

int ledPin = 13;
byte data;
int play_flag = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(31250);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(Serial.available() > 0) {
    data = Serial.read();
    if(data == midi_start) {
      
    }
    else if(data == midi_clock) {
      digitalWrite(ledPin, HIGH);    
    }
    else if(data == midi_continue) {
    
    }
    else if(data == midi_stop) {
    
    }
    else if((data == midi_clock) && (play_flag == 1)) {
    
    }
} 
}

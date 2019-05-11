//float notes[]={261.626,349.228,493.883,329.628,293.665}; // Alien Theme Song
//float notes[]={329.628,293.665,261.626,391.995}; // Mary Had A Little Lamb 
float notes[]={329.628,349.228,391.995,293.665,261.626}; // Ode To Joy By Beethoven 

void setup() {
  Serial.begin(9600);
  }

void loop() {
  int keyVal=analogRead(A0);
  Serial.println(keyVal);
  delay(200);

  if (keyVal>=1010) {
    
  }
    if(keyVal>=1010) {
      tone(8,notes[0]);
    }
    else if(keyVal>=800&&keyVal<=1010) {
      tone(8,notes[1]);
    }
    else if(keyVal>=600&&keyVal<=800) {
      tone(8,notes[2]);
    }
    else if(keyVal>=300&&keyVal<=550) {
      tone(8,notes[3]);
    }
    else if(keyVal>=5&&keyVal<=10) {
      tone(8,notes[4]);
    }
    else {
      noTone(8);
    }
    
  }


  

#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);

const int switchPin=6;
int switchState=0;
int prevSwitchState=0;
int reply;

String SLJ="Magic 8 Ball says:";

void printString(String message) {
  lcd.clear();
  lcd.setCursor(16,0);
  lcd.autoscroll();
  for (int i=0; i<message.length(); i++) {
    lcd.print(message.charAt(i));
    delay(300);
  }
  lcd.noAutoscroll();
  delay(1000);
  lcd.clear();
  delay(500);
}

void welcome() {
  lcd.setCursor(0,0);
  lcd.print("ASK ME");
  lcd.setCursor(0,1);
  delay(100);
  lcd.print("A QUESTION!");
}

void setup() {
  lcd.begin(16,2);
  Serial.begin(9600);
  pinMode(switchPin, INPUT);
  welcome();
}

void loop() {
  switchState=digitalRead(switchPin);
  Serial.println(switchState);
    
    if (switchState==HIGH) {
      printString(SLJ);
      reply=random(20);

      switch(reply) {
        case 0: printString("It is certain.");
                welcome();
                break;
        case 1: printString("It is decidedly so.");
                welcome();
                break;
        case 2: printString("Without a doubt.");
                welcome();
                break;
        case 3: printString("Yes - definitely.");
                welcome();
                break;               
        case 4: printString("You may rely on it.");
                welcome();
                break;
        case 5: printString("As I see it, yes.");
                welcome();
                break;              
        case 6: printString("Most likely.");
                welcome();
                break;
        case 7: printString("Outlook good.");
                welcome();
                break;
        case 8: printString("Yes.");
                welcome();
                break;
        case 9: printString("Signs point to yes.");
                welcome();
                break;
        case 10: printString("Reply hazy, try again.");
                welcome();
                break;
        case 11: printString("Ask again later.");
                welcome();
                break;               
        case 12: printString("Better not tell you now.");
                welcome();
                break;
        case 13: printString("Cannot predict now.");
                welcome();
                break;              
        case 14: printString("Concentrate and ask again.");
                welcome();
                break;
        case 15: printString("Don't count on it.");
                welcome();
                break;
        case 16: printString("My reply is no.");
                welcome();
                break;
        case 17: printString("My sources say no.");
                welcome();
                break;
        case 18: printString("Outlook not so good.");
                welcome();
                break;
        case 19: printString("Very doubtful.");
                welcome();
                break;               
    }
  }
}

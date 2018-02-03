

#include <SoftwareSerial.h>  

int bluetoothTx = 2;
int bluetoothRx = 3;

SoftwareSerial bluetooth(bluetoothTx, bluetoothRx);

int switch = 13;

char cmd[100];
int cmdIndex;


void exeCmd() {
  
  if(strcmp(cmd, "off")==0) digitalWrite(led, LOW);
  if(strcmp(cmd, "on")==0) digitalWrite(led, HIGH);
}


void setup() {
  
  bluetooth.begin(9600); // Bluetooth default baud is 115200
 
  pinMode(switch, OUTPUT);
  digitalWrite(switch, LOW);
  
  cmdIndex = 0;
}


void loop() {
  
  if(bluetooth.available()) {
    
    char c = (char)bluetooth.read();
    
    if(c=='\n') {
      cmd[cmdIndex] = 0;
      exeCmd();  // execute the command
      cmdIndex = 0; // reset the cmdIndex
    } else {      
      cmd[cmdIndex] = c;
      if(cmdIndex<99) cmdIndex++;
    }
  }
}


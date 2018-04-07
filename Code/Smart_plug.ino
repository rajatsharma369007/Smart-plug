// the program is all about to control a relay by sending a wirelessly
// via serial communication in between HC05 and Android app.
// Author: Rajat Sharma
// Date: February, 2017

#include <SoftwareSerial.h>  

int bluetoothTx = 2;
int bluetoothRx = 3;

//to have the serial communication pins as 2, 3 instead of 0,1 due to avrrude problem while uploading 
//the program through ftdi bootloader

SoftwareSerial bluetooth(bluetoothTx, bluetoothRx);

int switch = 13;      //relay connected at pin 13

char cmd[10];        //to store the on/off string
int cmdIndex;     


//function to trigger the relay
void exeCmd() {
  
  if(strcmp(cmd, "off")==0) digitalWrite(led, LOW);
  if(strcmp(cmd, "on")==0) digitalWrite(led, HIGH);
}


void setup() {
  
  bluetooth.begin(9600); // Bluetooth default baud is 115200 (important, you will not get any error but create problem)
 
  pinMode(switch, OUTPUT);
  digitalWrite(switch, LOW);
  
  cmdIndex = 0;
}


void loop() {

  //waiting of the bluetooth to send the command
  if(bluetooth.available()) {
    //read the character sent
    char c = (char)bluetooth.read();
    
    //storing the character in cmd[] string till it gets complete on/off string
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


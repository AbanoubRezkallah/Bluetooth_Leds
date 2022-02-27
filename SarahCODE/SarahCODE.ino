char NONE = 0;              
int LED1 = 2;
int LED2 = 3;
int LED3 = 4;      
void LED1On(){
digitalWrite (LED1, HIGH);
}
void LED1Off(){
digitalWrite (LED1, LOW);
}
void LED2On(){
digitalWrite (LED2, HIGH);
}
void LED2Off(){
digitalWrite (LED2, LOW);
}
void LED3On(){
digitalWrite (LED3, HIGH);
}
void LED3Off(){
digitalWrite (LED3, LOW);
}
void allon() {
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
}
void alloff() {
digitalWrite (LED1, LOW);
digitalWrite (LED2, LOW);
digitalWrite (LED3, LOW);
}
void setup() {
Serial.begin(9600);
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
}
void loop() {
if(Serial.available() > 0)  
{
NONE = Serial.read();      
Serial.print(NONE);        
Serial.print("\n");        
if(NONE == 'A')            
LED1On();  

else if(NONE == 'B')       
LED1Off();   

if(NONE == 'C')            
LED2On();  
else if(NONE == 'D')       
LED2Off();   
if(NONE == 'E')           
LED3On();  
else if(NONE == 'F')       
LED3Off();   
else if(NONE == 'G')
allon();
else if(NONE == 'H')
alloff();
}
}    

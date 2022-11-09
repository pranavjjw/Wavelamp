/*
  WAVELAMP


  Music Reactive lamp with individually addressable pixel rings


  This is the main frame code. Functions for different light movements and colors 
  have been pre-programmed. Full list of functions() can be found in the readme file
  located in the git repository.
  INSERT GIT LINK


  Created 9 Nov 2022
  by Pranav Jhunjhunwala
 
*/

 int val;  
 int time = 40;
 
 int r1 = 13;
 int b1 = 11;
 int y1 = 12;
 int r2 = 10;
 int b2 = 9;
 int y2 = 8;
 int r3 = 7;
 int b3 = 6;
 int y3 = 5;
 int r4 = 4;
 int b4 = 3;
 int g4 = 2;
 int b5 = A2;
 int g5 = A1;
 int r5 = 0;
 void setup()  
 {  
  Serial.begin(9600);  
 
 }  
 void loop()   
 {  
  val=analogRead(A0);        
    
    
val=map(val, 0, 1023 , 0, 255);  
 Serial.println(val);
  if(val >= 200){
    

collide_purple_blue();

  }
 else{
   all_shut();
 }
  
 }  


*/
All functions are pre-programmed below
*/
 
 
 
 void all_shut(){
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);   
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);    
  delay(5);
 }
 
 
 
 void neonGreen(){
  analogWrite(r5, val); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, val);   
  analogWrite(b4, 0);   
  analogWrite(g4, val);   
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);    
  delay(time);
 }
  void white(){
  analogWrite(r5, val); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, val);   
  analogWrite(b4, val);   
  analogWrite(g4, val);   
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);    
  delay(time);
 }
 void red(){
  analogWrite(r5, val); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, val);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);   
  analogWrite(r3, val);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, val);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, val);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);    
  delay(time);
 }
 void blue(){
  analogWrite(r5, 0); 
  analogWrite(b5, val);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, val);   
  analogWrite(g4, 0);   
  analogWrite(r3, 0);   
  analogWrite(b3, val);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, val);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, val);   
  analogWrite(y1, 0);    
  delay(time);
 }
  void yellow(){
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);   
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, val); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, val);    
  delay(time);
 }
  void green(){
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, val);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, val);   
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);    
  delay(time);
 }
   void lightBlue(){
  analogWrite(r5, 0); 
  analogWrite(b5, val);   
  analogWrite(g5, val);   
  analogWrite(r4, 0);   
  analogWrite(b4, val);   
  analogWrite(g4, val);   
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);    
  delay(time);
 }
void purple(){
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, val);   
  analogWrite(b4, val);   
  analogWrite(g4, 0);   
  analogWrite(r3, val);   
  analogWrite(b3, val);   
  analogWrite(y3, 0); 
  analogWrite(r2, val);   
  analogWrite(b2, val);   
  analogWrite(y2, 0);   
  analogWrite(r1, val);   
  analogWrite(b1, val);   
  analogWrite(y1, 0);    
  delay(time);
}

 void purple_vert(){
  analogWrite(r5,  0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);   
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, val);   
  analogWrite(b1, val);   
  analogWrite(y1, 0);    
  delay(time);
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);   
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, val);   
  analogWrite(b2, val);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);
  delay(time);
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);
  analogWrite(r3, val);   
  analogWrite(b3, val);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);   
  delay(time);
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, val);   
  analogWrite(b4, val);   
  analogWrite(g4, 0);
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);   
  delay(time);
  analogWrite(r5, val); 
  analogWrite(b5, val);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);   
  delay(time);
 }

 void blue_vert(){
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);   
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, val);   
  analogWrite(y1, 0);    
  delay(time);
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);   
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, val);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);
  delay(time);
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);
  analogWrite(r3, 0);   
  analogWrite(b3, val);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);   
  delay(time);
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, val);   
  analogWrite(g4, 0);
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);   
  delay(time);
  analogWrite(r5, 0); 
  analogWrite(b5, val);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);   
  delay(time);
 }
void red_vert(){
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);   
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, val);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);    
  delay(time);
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);   
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, val);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);
  delay(time);
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);
  analogWrite(r3, val);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);   
  delay(time);
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, val);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);   
  delay(time);
  analogWrite(r5, val); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);   
  delay(time);
 }
void light2darkblue(){
 analogWrite(r5,  0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);   
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0 );   
  analogWrite(b1, val);   
  analogWrite(y1, 0);    
  delay(time);
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);   
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, val);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);
  delay(time);
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);
  analogWrite(r3, 0);   
  analogWrite(b3, val);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);   
  delay(time);
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, val);   
  analogWrite(g4, val);
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);   
  delay(time);
  analogWrite(r5, 0); 
  analogWrite(b5, val);   
  analogWrite(g5, val);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);   
  delay(time);
 }

void purple2lightblue(){
  analogWrite(r5,  0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);   
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, val);   
  analogWrite(b1, val);   
  analogWrite(y1, 0);    
  delay(time);
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);   
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, val);   
  analogWrite(b2, val);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);
  delay(time);
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);
  analogWrite(r3, val);   
  analogWrite(b3, val);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);   
  delay(time);
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, val);   
  analogWrite(g4, val);
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);   
  delay(time);
  analogWrite(r5, 0); 
  analogWrite(b5, val);   
  analogWrite(g5, val);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);   
  delay(time);
 }

 void purple_vert_usd(){
  analogWrite(r5, val); 
  analogWrite(b5, val);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);   
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);    
  delay(time);
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, val);   
  analogWrite(b4, val);   
  analogWrite(g4, 0);   
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);
  delay(time);
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);
  analogWrite(r3, val);   
  analogWrite(b3, val);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);   
  delay(time);
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, val);   
  analogWrite(b2, val);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);   
  delay(time);
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, val);   
  analogWrite(b1, val);   
  analogWrite(y1, 0);   
  delay(time);
 }

 void collide_purple_blue(){
  analogWrite(r5,  val); 
  analogWrite(b5, val);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);   
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, val);   
  analogWrite(y1, 0);    
  delay(150);
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, val);   
  analogWrite(b4, val);   
  analogWrite(g4, 0);   
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, val);   
  analogWrite(b2, val);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);
  delay(150);
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);
  analogWrite(r3, val);   
  analogWrite(b3, val);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);   
  delay(150);
  analogWrite(r5, 0); 
  analogWrite(b5, 0);   
  analogWrite(g5, 0);   
  analogWrite(r4, val);   
  analogWrite(b4, val);   
  analogWrite(g4, 0);
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, val);   
  analogWrite(b2, val);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, 0);   
  analogWrite(y1, 0);   
  delay(150);
  analogWrite(r5, val); 
  analogWrite(b5, val);   
  analogWrite(g5, 0);   
  analogWrite(r4, 0);   
  analogWrite(b4, 0);   
  analogWrite(g4, 0);
  analogWrite(r3, 0);   
  analogWrite(b3, 0);   
  analogWrite(y3, 0); 
  analogWrite(r2, 0);   
  analogWrite(b2, 0);   
  analogWrite(y2, 0);   
  analogWrite(r1, 0);   
  analogWrite(b1, val);   
  analogWrite(y1, 0);   
  delay(150);
 }


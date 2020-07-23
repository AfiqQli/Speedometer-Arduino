


void setup(){
  Serial.begin(9600);
  pinMode(5,OUTPUT);
  
  
}
void loop(){
  String data   = Serial.readStringUntil("\n");
  delay(20);
  if (data == "90"){
    digitalWrite(5,HIGH);
    
    
    }
  // if (strcmp(data,"b'0") == 0) {

   // digitalWrite(5,HIGH);
    
  }
 
  
    
   
    
//  if (data == "b'0\n"){
//    digitalWrite(5,HIGH);
//      
//  }
//  if (data == "70"){
//    digitalWrite(5,LOW); 
// }
      
       

    

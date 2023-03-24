#include <Servo.h>
Servo myservo1;  // 그리퍼서보모터 이름
Servo myservo2;  // 위 아래
Servo myservo3;  // 좌우 방향 모터
void setup() {
  myservo1.attach(5);  // 그리퍼모터
   myservo2.attach(9);  // 위 아래
    myservo3.attach(3);  // 좌우 방향 모터
 myservo2.write(90);
 delay(5000);}  
void loop() {
//----------------상하  물건 위치로
 myservo2.write(0);              // tell servo to go to position in variable 'pos'
    delay(2000); 
      

  //----------------좌우  물건 집기
 myservo3.write(0);              // tell servo to go to position in variable 'pos'
    delay(2000); 
       
  //----------------그리퍼 0도가 벌어지는것임
    myservo1.write(0);              // tell servo to go to position in variable 'pos'
    delay(2000); 
    myservo1.write(90);              // tell servo to go to position in variable 'pos'
    delay(2000); 
    //-----------------------------상하
    int pos=0;
    for (pos = 0; pos <= 90; pos += 10) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo2.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
   myservo2.write(90);// tell servo to go to position in variable 'pos'
  delay(3000);     
              // tell servo to go to position in variable 'pos'
   //--------좌우로 옮기고------------------------------
     myservo3.write(90);// tell servo to go to position in variable 'pos'
  delay(3000); 
  //---------떨어드리기  그리퍼 벌리기------------------------
   myservo1.write(0);              // tell servo to go to position in variable 'pos'
    delay(2000); 
      
}

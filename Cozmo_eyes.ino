#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_RESET D5
Adafruit_SSD1306 display(OLED_RESET);
int left_x = 42;
int left_y = 20;
int right_x = 86;
int right_y = 20;
int width = 32;
int height = 20;
int rad = 6;
void setup() {
  Serial.begin(115200);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.display();
  delay(2000);
  display.clearDisplay();
}
//void blnk(){
//  display.clearDisplay();
// for (int h=10;h>0;h-=3){
//  display.fillRoundRect(16,(20-h),32,2*h,5, WHITE);
//  display.fillRoundRect(80,(20-h),32,2*h,5, WHITE);
//  display.display();
//  delay(h);
//  display.clearDisplay();}
//  delay(5);
// for (int h=3;h<12;h+=3){
//  display.fillRoundRect(16,(20-h),32,2*h,5, WHITE);
//  display.fillRoundRect(80,(20-h),32,2*h,5, WHITE);
//  display.display();
//  delay(h);
//  display.clearDisplay();}
//  
//  }
//void surprised(){
//  display.fillRoundRect(8,10,40,20,16, WHITE);
//  display.fillRoundRect(90,15,20,10,8, WHITE);
//  display.fillRoundRect(18,15,20,10,8, BLACK);
//  display.fillRoundRect(95,17,10,5,4, BLACK);
//  display.display();
//  for(int i=0; i<3; i++){
//    display.fillRoundRect(18-i,15-i/2,19+i,10+i,8, BLACK);
//    display.fillRoundRect(95-i,17-i/2,9+i,4+i,4, BLACK);
//    display.display();
//    //delay(5000);  
//   
//    }
//  delay(1000*(random(5)+1));
//  
// display.clearDisplay();
//  }  
void angry(){
  for (int i=0; i<6; i+=2){
    display.fillRoundRect(left_x-width/2,left_y-height/2,width, height,rad, WHITE);
    display.fillRoundRect(right_x-width/2,right_y-height/2,width, height,rad, WHITE);
    display.fillTriangle(10+i, 10, 118-i,10, 64,20+i, 0);
    display.display();
  
    }
  delay(1000*(random(5)+1));  
  
 display.clearDisplay();
}

void normal(){ 
 display.clearDisplay();
 int k1 = random(5);
 int k2 = random(5);
 display.fillRoundRect(left_x-width/2,left_y-height/2+k1,width, height-k1,rad, WHITE);
 display.fillRoundRect(right_x-width/2,right_y-height/2+k2,width, height-k2,rad, WHITE);
 display.display();
 delay(1000*(random(5)+1));
 display.clearDisplay();
}

 void sad(){
  for (int i=0; i<6; i+=2){
    display.fillRoundRect(left_x-width/2,left_y-height/2,width, height,rad, WHITE);
    display.fillRoundRect(right_x-width/2,right_y-height/2,width, height,rad, WHITE);
    display.fillTriangle(10,20+i, 64,10, 10,10, 0);
    display.fillTriangle(120,20+i, 64,10, 120,10, 0);
    display.display();
  
 }
 delay(1000*(random(5)+1));
 display.clearDisplay();
 }
 void bliink(){
  
  display.drawFastHLine(0,20,128,WHITE);
  display.display();
  delay(3);
  display.clearDisplay();
 }
 void happy(){
  display.fillRoundRect(left_x-width/2,left_y-height/2,width, height,rad, WHITE);
  display.fillRoundRect(right_x-width/2,right_y-height/2,width, height,rad, WHITE);
  display.fillRoundRect(left_x-width/2,left_y-5,width, height/2+5, rad, BLACK);
  display.fillRoundRect(right_x-width/2,right_y-5,width, height/2+5, rad, BLACK);
  display.display();
  delay(3000);
  display.clearDisplay();
  }  


void loop() {
// int r = random(5);
// if(r==0){normal();}
// if(r==1){angry();}
// if(r==2){surprised();}
// if(r==3){blnk();}
// if(r==4){sad();}
normal();
bliink();
happy();
 
 }



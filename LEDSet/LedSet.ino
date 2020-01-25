#include "M5Atom.h"


void setup()
{
  M5.begin(true, false, true);
  delay(50);
  M5.dis.drawpix(0, 0xf00000);

  Serial.begin(115200);
  Serial1.begin(115200, SERIAL_8N1, 0, 26); // EXT_IO
  Serial2.begin(115200, SERIAL_8N1, 32, 33);// Grove
}

uint8_t FSM = 0;
int inByte;

void loop()
{
//  if (Serial.available()) {
//    // Serial(PC) to Serial1(EXT_IO)
//    int inByte = Serial.read();
//    Serial.println(inByte);
//    Serial1.write(inByte);
//  }
//  if (Serial1.available()) {
//    // Serial1(EXT_IO) to Serial2(Grove)
//    int inByte = Serial1.read();
//    Serial.println(inByte);
//    Serial2.write(inByte);
//  }
  if (Serial2.available()) {
    // Serial2(Grove) to Serial(PC)
    inByte = Serial2.read();
    Serial.println(inByte);

    switch (inByte) {
      case 1:
        M5.dis.drawpix(0, 0x000000);
        M5.dis.drawpix(1, 0xf00000);
        M5.dis.drawpix(2, 0xf00000);
        M5.dis.drawpix(3, 0xf00000);
        M5.dis.drawpix(4, 0x000000);
        
        M5.dis.drawpix(5, 0xf00000);
        M5.dis.drawpix(6, 0x000000);
        M5.dis.drawpix(7, 0x000000);
        M5.dis.drawpix(8, 0x000000);
        M5.dis.drawpix(9, 0xf00000);

        M5.dis.drawpix(10, 0xf00000);
        M5.dis.drawpix(11, 0x000000);
        M5.dis.drawpix(12, 0x000000);
        M5.dis.drawpix(13, 0x000000);
        M5.dis.drawpix(14, 0xf00000);

        M5.dis.drawpix(15, 0xf00000);
        M5.dis.drawpix(16, 0x000000);
        M5.dis.drawpix(17, 0x000000);
        M5.dis.drawpix(18, 0x000000);
        M5.dis.drawpix(19, 0xf00000);

 
        M5.dis.drawpix(20, 0x000000);
        M5.dis.drawpix(21, 0xf00000);
        M5.dis.drawpix(22, 0xf00000);
        M5.dis.drawpix(23, 0xf00000);
        M5.dis.drawpix(24, 0x000000);
        break;

      case 2:
        M5.dis.drawpix(0, 0x000000);
        M5.dis.drawpix(1, 0x000000);
        M5.dis.drawpix(2, 0x00f000);
        M5.dis.drawpix(3, 0x000000);
        M5.dis.drawpix(4, 0x000000);
        
        M5.dis.drawpix(5, 0x000000);
        M5.dis.drawpix(6, 0x00f000);
        M5.dis.drawpix(7, 0x00f000);
        M5.dis.drawpix(8, 0x00f000);
        M5.dis.drawpix(9, 0x000000);

        M5.dis.drawpix(10, 0x00f000);
        M5.dis.drawpix(11, 0x00f000);
        M5.dis.drawpix(12, 0x00f000);
        M5.dis.drawpix(13, 0x00f000);
        M5.dis.drawpix(14, 0x00f000);

        M5.dis.drawpix(15, 0x000000);
        M5.dis.drawpix(16, 0x00f000);
        M5.dis.drawpix(17, 0x00f000);
        M5.dis.drawpix(18, 0x00f000);
        M5.dis.drawpix(19, 0x000000);

 
        M5.dis.drawpix(20, 0x000000);
        M5.dis.drawpix(21, 0x00f000);
        M5.dis.drawpix(22, 0x00f000);
        M5.dis.drawpix(23, 0x00f000);
        M5.dis.drawpix(24, 0x000000);
        break; 

       case 3:
        M5.dis.drawpix(0, 0x000000);
        M5.dis.drawpix(1, 0x00f000);
        M5.dis.drawpix(2, 0x00f000);
        M5.dis.drawpix(3, 0x00f000);
        M5.dis.drawpix(4, 0x000000);
        
        M5.dis.drawpix(5, 0x000000);
        M5.dis.drawpix(6, 0x00f000);
        M5.dis.drawpix(7, 0x00f000);
        M5.dis.drawpix(8, 0x00f000);
        M5.dis.drawpix(9, 0x000000);

        M5.dis.drawpix(10, 0x00f000);
        M5.dis.drawpix(11, 0x00f000);
        M5.dis.drawpix(12, 0x00f000);
        M5.dis.drawpix(13, 0x00f000);
        M5.dis.drawpix(14, 0x00f000);

        M5.dis.drawpix(15, 0x000000);
        M5.dis.drawpix(16, 0x00f000);
        M5.dis.drawpix(17, 0x00f000);
        M5.dis.drawpix(18, 0x00f000);
        M5.dis.drawpix(19, 0x000000);

 
        M5.dis.drawpix(20, 0x000000);
        M5.dis.drawpix(21, 0x000000);
        M5.dis.drawpix(22, 0x00f000);
        M5.dis.drawpix(23, 0x000000);
        M5.dis.drawpix(24, 0x000000);
        break; 

       case 4:
        M5.dis.drawpix(0, 0x000000);
        M5.dis.drawpix(1, 0x000000);
        M5.dis.drawpix(2, 0x00f000);
        M5.dis.drawpix(3, 0x000000);
        M5.dis.drawpix(4, 0x000000);
        
        M5.dis.drawpix(5, 0x000000);
        M5.dis.drawpix(6, 0x00f000);
        M5.dis.drawpix(7, 0x00f000);
        M5.dis.drawpix(8, 0x00f000);
        M5.dis.drawpix(9, 0x00f000);

        M5.dis.drawpix(10, 0x00f000);
        M5.dis.drawpix(11, 0x00f000);
        M5.dis.drawpix(12, 0x00f000);
        M5.dis.drawpix(13, 0x00f000);
        M5.dis.drawpix(14, 0x00f000);

        M5.dis.drawpix(15, 0x000000);
        M5.dis.drawpix(16, 0x00f000);
        M5.dis.drawpix(17, 0x00f000);
        M5.dis.drawpix(18, 0x00f000);
        M5.dis.drawpix(19, 0x00f000);

 
        M5.dis.drawpix(20, 0x000000);
        M5.dis.drawpix(21, 0x000000);
        M5.dis.drawpix(22, 0x00f000);
        M5.dis.drawpix(23, 0x000000);
        M5.dis.drawpix(24, 0x000000);
        break; 

      case 5:
        M5.dis.drawpix(0, 0x000000);
        M5.dis.drawpix(1, 0x000000);
        M5.dis.drawpix(2, 0x00f000);
        M5.dis.drawpix(3, 0x000000);
        M5.dis.drawpix(4, 0x000000);
        
        M5.dis.drawpix(5, 0x00f000);
        M5.dis.drawpix(6, 0x00f000);
        M5.dis.drawpix(7, 0x00f000);
        M5.dis.drawpix(8, 0x00f000);
        M5.dis.drawpix(9, 0x000000);

        M5.dis.drawpix(10, 0x00f000);
        M5.dis.drawpix(11, 0x00f000);
        M5.dis.drawpix(12, 0x00f000);
        M5.dis.drawpix(13, 0x00f000);
        M5.dis.drawpix(14, 0x00f000);

        M5.dis.drawpix(15, 0x00f000);
        M5.dis.drawpix(16, 0x00f000);
        M5.dis.drawpix(17, 0x00f000);
        M5.dis.drawpix(18, 0x00f000);
        M5.dis.drawpix(19, 0x000000);

 
        M5.dis.drawpix(20, 0x000000);
        M5.dis.drawpix(21, 0x000000);
        M5.dis.drawpix(22, 0x00f000);
        M5.dis.drawpix(23, 0x000000);
        M5.dis.drawpix(24, 0x000000);
        break; 
        
      default:
        break;
    }
    
  }
  
    if (M5.Btn.wasPressed())
    {
        switch (FSM)
        {
        case 0:
            M5.dis.drawpix(0, 0xf00000);
            M5.dis.drawpix(1, 0x000000);
            M5.dis.drawpix(2, 0x000000);
            M5.dis.drawpix(3, 0x000000);
            Serial1.write(0x06);
            break;
        case 1:
            M5.dis.drawpix(1, 0x00f000);
            M5.dis.drawpix(0, 0x000000);
            M5.dis.drawpix(2, 0x000000);
            M5.dis.drawpix(3, 0x000000);
           Serial1.write(0x07);
           break;
        case 2:
            M5.dis.drawpix(2, 0x0000f0);
            M5.dis.drawpix(0, 0x000000);
            M5.dis.drawpix(1, 0x000000);
            M5.dis.drawpix(3, 0x000000);
           Serial1.write(0x08);
           break;
        case 3:
            M5.dis.drawpix(3, 0x707070);
            M5.dis.drawpix(1, 0x000000);
            M5.dis.drawpix(2, 0x000000);
            M5.dis.drawpix(0, 0x000000);
             Serial1.write(0x09);
            break;
        default:
            break;
        }
        FSM++;
        if (FSM >= 4)
        {
            FSM = 0;
        }
    }

    delay(50);
    M5.update();
}

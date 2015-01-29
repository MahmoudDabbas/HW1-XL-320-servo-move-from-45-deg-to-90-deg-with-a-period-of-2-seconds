/* Dynamixel goalPosition
 
 Turns left the dynamixel , then turn right for one second,
 repeatedly.
 
                 Compatibility
 OpenCM9.04             O
 
                  
                XL-320    
 CM900          O          
 OpenCM9.04     O          
 
 created 29 Jan 2015
 by Mahmoud Dabbas
 */
#define DXL_BUS_SERIAL1 1  //Dynamixel on Serial1(USART1)  <-OpenCM9.04

#define ID_NUM 1

Dynamixel Dxl(DXL_BUS_SERIAL1);

void setup() {
  // Initialize the dynamixel bus:
  // Dynamixel 2.0 Baudrate -> 0: 9600, 1: 57600, 2: 115200, 3: 1Mbps  
  Dxl.begin(3);  
  Dxl.jointMode(ID_NUM); //jointMode() is to use position mode
}

void loop() {
  Dxl.goalPosition(ID_NUM, 155); //ID 1 dynamixel moves to position 45 degree
  delay(1000);
  Dxl.goalPosition(ID_NUM, 310);//ID 1 dynamixel moves to position 90 degree
  delay(1000);
}



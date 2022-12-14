
#include <SPI.h>
#include <mcp2515.h>

struct can_frame canMsg1;
MCP2515 mcp2515(10); // Set the pin number where SPI CS is connected (10 by default)


void setup() {

  // No difference.
  // SPI.begin();    // Begin the SPI communication by using following statement      
  
  canMsg1.can_id  = 0x09a;
  canMsg1.can_dlc = 4;
  canMsg1.data[0] = 0x04;
  canMsg1.data[1] = 0x00;
  canMsg1.data[2] = 0x00;
  canMsg1.data[3] = 0x00;

  while (!Serial);
  Serial.begin(115200);
  Serial.println("Starting setup");
  
  mcp2515.reset();
  mcp2515.setBitrate(CAN_500KBPS, MCP_8MHZ); // Was: CAN_500KBPS, MCP_8MHZ
  mcp2515.setNormalMode();
  
  Serial.println("Done setup");
}

void loop() {
  mcp2515.sendMessage(&canMsg1);
  Serial.println("Messages sent to CAN:" );
  delay(200); // Was 200
}

# PowerPackCAN
A Bosch PowerPack activation via CAN communication by using Arduino and MCP2515 module. 

To activate the battery pack, you have to use a MCP2515 module and Arduino(tested on Nano version).
A connection schematics is shown below: 

![Untitled Sketch 2_bb](https://user-images.githubusercontent.com/86111307/215270220-ec9b132a-dd91-4c33-b4f0-b2807b5f1b96.png)

PowerPack battery pinout:
B+ - Battery positive (nominal 36V)
B- - Battery negative
CAN HIGH - high-voltage signal of CAN communication.  
CAN LOW - low-voltage signal of CAN communication. 
Charger Pin - is used to activate a battery charging, charging mode activated by adding 5V to this pin. 

The pinout of a PowerPack battery pinout is shown below: 

![IMG_1121_uncut](https://user-images.githubusercontent.com/86111307/215270473-e1c82041-47d5-4c51-9748-297b5daa8f38.png)




Not a BMS unlock when the battery is locked because of disassembly/other reason!

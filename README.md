# PowerPackCAN
<h3 align="left">A Bosch PowerPack activation via CAN communication by using Arduino and MCP2515 module.

</h3>
<p align="left">
</p>

To activate the battery pack, you have to use an MCP2515 module and Arduino(tested on the Nano version).

<h3 align="left">A connection schematics is shown below: 
</h3>

![Untitled Sketch 2_bb](https://user-images.githubusercontent.com/86111307/215270220-ec9b132a-dd91-4c33-b4f0-b2807b5f1b96.png)

<h3 align="left">PowerPack battery pinout:
</h3>

* B+ - Battery positive (nominal 36V)
* B- - Battery negative 
* CAN HIGH - high-voltage signal of CAN communication. 
* CAN LOW - low-voltage signal of CAN communication. 
* Charger Pin - is used to activate battery charging, charging mode is activated by adding 5V to this pin.

<h3 align="left">The pinout of a PowerPack battery pinout is shown below: 
</h3>

![IMG_1121_uncut](https://user-images.githubusercontent.com/86111307/215270473-e1c82041-47d5-4c51-9748-297b5daa8f38.png)

<p align="left">
<b>Recommended to use a current limiter with PowerPack not to consume a significant amperage!</b>
</p>

The battery voltage output depends on the state of charge.
* Fully harged  - 42V
* Fully discharged - 32V
<p align="left">
When the battery is below 32V(aproximetly) - the internal BMS will stop outputing the power.
</p>
<p align="left">
Tested with Ecoflow River 2 max, a power station limits the consumption up to 220W, PowerPack works excellent. 
</p>

<h3 align="left">Usage
</h3>

![IMG_1132](https://user-images.githubusercontent.com/86111307/215274377-42f441a8-8f0d-405e-aecb-11aebd14e920.jpg)

![IMG_1134](https://user-images.githubusercontent.com/86111307/215274479-914a4ff0-75c7-4564-a245-c2973e57ac73.jpg)

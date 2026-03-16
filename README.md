This project is a custom 11-key mechanical macropad built using the Seeeduino XIAO RP2040 microcontroller and Cherry MX switches. The device primarily functions as a numpad, but it can also transform into a programmable macropad when certain keys are held.
By holding the 0 and 1 keys the device switches software profiles and changes what the keys do from a regular numpad to a macropad.
To use the macropad, simply plug it into your computer using a USB-C cable. The device will automatically be recognized as a keyboard.
In its default mode, the keys act as a numeric keypad. Holding the 0 and 1 keys at the same time activates the macro profile, allowing the keys to trigger custom macros depending on the firmware configuration.
I created this project to design a compact keypad that could serve both as a numpad and a programmable macro controller. Many keyboards (such as mine) do not include a numpad, and having an additional macro layer makes repetitive computer tasks faster and more convenient.
This project was also a way to learn PCB design, CAD modeling, and firmware development for custom hardware.
This design was reviewed and sanity-checked with peers to verify component placement and wiring before fabrication.
<img width="1204" height="831" alt="Wiring" src="https://github.com/user-attachments/assets/34018911-ecb2-4b49-8ab3-f6af81a6c2d9" />
<img width="504" height="644" alt="PCB" src="https://github.com/user-attachments/assets/48c0e5a4-507e-419b-956f-5e44e71373f1" />
<img width="1302" height="799" alt="3DModel" src="https://github.com/user-attachments/assets/5f6a3332-150e-48f3-b25d-cbeec115bbb0" />
| Item | Quantity | Description | Footprint | Link |
|-----|-----|-----|-----|-----|
| Seeed XIAO RP2040 | 1 | Microcontroller | XIAO-RP2040 | https://www.seeedstudio.com/XIAO-RP2040-p-5026.html |
| Cherry MX Switch | 4 | Mechanical key switch | MX | https://www.cherrymx.de/en/cherry-mx.html |
| 1N4148 Diode | 4 | Signal diode | DO-35 / SMD | https://www.vishay.com/docs/81857/1n4148.pdf |
| Kailh Hot Swap Socket | 4 | Switch socket | Kailh MX Socket | https://splitkb.com/products/kailh-hotswap-sockets |
| Keycaps | 4 | MX compatible keycaps | MX | https://kbdfans.com |
| PCB | 1 | Custom Hackpad PCB | Custom | — |
| Case | 1 | 3D printed case | Custom | — |
| Screws | 4 | Case mounting screws | M2 | https://www.mcmaster.com |

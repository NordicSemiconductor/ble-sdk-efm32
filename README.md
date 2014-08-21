ble-sdk-efm32-internal
======================

Port of the Bluetooth low energy SDK for Arduino to the EFM32.
It has been tested using nRF2741 module connected to EFM32 Leopard Gecko Starter Kit(STK3600).

Port is not backward compatible with Arduino, so all Arduino related files were deleted.
If you are interested in those files please check original repo: [ble-sdk-arduino](https://github.com/NordicSemiconductor/ble-sdk-arduino)

Contents
----------------------

EFM32 ready examples are located under \demos_efm\ directory. 

Quick start guide
----------------------

1. Connect nRF2741 to STK3600

    |STK3600 (Exp header) |nRF2741 (P1)     |
    |---------------------|-----------------|
    |**0**  GND           |**1**  GND       |
    |**1**  VMCU          |**2**  VCC       |
    |**4**  US1_TX        |**6**  ACI_MOSI  |
    |**6**  US1_RX        |**7**  ACI_MISO  |
    |**8**  US1_CLK       |**5**  ACI_SCLK  |
    |**10** US1_CS        |**9**  ACI_REQN  |
    |**14** PD5           |**8**  ACI_RDYN  |
    |**16** PD6           |**10** ACI_RESET |

2. Compile and load chosen example with Keil uVision

    **Tips**:

    - Remember to chose SW interface instead of JTAG in debugger settings (pane 'Debug') 

    - If you want to see printf() output in Keil debugger window:
        1. Go to debugger settings (pane 'Trace'):
            1. Enable Trace
            2. Set Core Clock to 14MHz
            3. Enable 'Autodetect max SWO Clk'
        2. Start debug session:
            1. Open printf viewer via 'View'->'Serial Windows'->'Debug (printf) Viewer'
            2. Run program and enjoy printf() output

        


    



   

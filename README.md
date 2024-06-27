# Digital_control_board  
Control the 20x20 LED board  
Describe: received data from Computer through UART. The input data will define the pattern of the LEDs array. The microprocessor will control a 20x10 led by creating pulses for a decoder, shift registers, and DFF.  
Input: the UART signal (1 start bit, 8 data bits, and 1 stop bit), baud rate: 115200  
Output: 4 pins data (for 4 sectors of LEDs); 1 enable output signal for shift registers, 1 clear signal for shift registers, 1 clock for shift register (only on when transfer), 1 RCLK to latch data, 1 enable signal for the decoder and 3 address pin for the decoder.

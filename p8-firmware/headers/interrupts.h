#include "Arduino.h"
#include "nrf52.h"
#include "nrf52_bitfields.h"
/* 
Interrupts are handled via the GPIOTE (GPIO Tasks and Events) driver: https://infocenter.nordicsemi.com/index.jsp?topic=%2Fcom.nordic.infocenter.nrf52832.ps.v1.1%2Fgpiote.html
 */
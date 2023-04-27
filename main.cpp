#include "mbed.h"
AnalogIn potentiometer(A0);
AnalogOut ledassign(D13);
Serial  monitor(USBTX, USBRX);


int main()
{
    monitor.baud(115200);

    while (true) {
        ledassign = potentiometer;
        monitor.printf("%f \n\r", potentiometer.read());
        wait (0.1);
    }
}


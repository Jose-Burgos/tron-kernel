#include <stdint.h>
#include <lib.h>
#include <videoDriver.h>

void irqDispatcher(uint64_t irq) {
    switch (irq) {
        case 0:
            int_20();
            break;
        case 1:
            int_21();
            break;
    }
    return;
}

void int_20() {
    timer_handler();
}

void int_21(){
    // saveKey(); // => Function en keyboardDriver.c que guarde en buf la tecla
    char a = keyPressed();
    if (a < 128 && a > 0){
        clearScreen();
        printChar(0,0,getKey(a),2,white);
        printString(0,0,(uint8_t *)"\n",2,white);
    }
}




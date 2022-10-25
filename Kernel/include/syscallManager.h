#ifndef _SYSCALL_MANAGER_H_
#define _SYSCALL_MANAGER_H_


#include <stdint.h>
#include <videoDriver.h>


#define SYSCALL_NUMBER 7



/*
    Delete Comments!!
    Lists of irq's
    Check return type.
*/
void syscallHandler(uint64_t rdi, uint64_t rsi, uint64_t rdx, uint64_t r10, uint64_t r8, uint64_t rax);
uint64_t sys_write(char *string, Color color);
uint64_t sys_read();
uint64_t sys_time();             // Tiempo hh:mm:ss
uint64_t sys_date();             // dd/mm/aa
uint64_t sys_paintScreen();      // 
uint64_t sys_drawRectangle(int x, int y, int width, int height, Color color);
uint64_t sys_bell();
uint64_t sys_widthScr();
uint64_t sys_heightScr();
uint64_t sys_setFontSize(uint32_t size); //put in syshandler

#endif

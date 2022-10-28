#ifndef _SYSCALLS_USERLAND_H_
#define _SYSCALLS_USERLAND_H_
#include <color.h>

long sys_read(unsigned char fd, char * s, int count);
long sys_write(char * s, Color c);
long sys_writeAt(int x, int y, char * s, Color c);
long sys_clearScreen();
long sys_wait(int ticks);
long sys_time();
long sys_date();
long sys_getScreenHeight();
long sys_getScreenWidth();
long sys_timedRead(unsigned char fd, char * s, int count, int millis);
long sys_drawRectangle(int x, int y, int width, int height, Color color);

#endif

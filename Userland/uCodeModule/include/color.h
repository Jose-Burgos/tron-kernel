#ifndef _COLOR_H_
#define _COLOR_H_

#define BLACK (Color) {0x00, 0x00, 0x00}
#define WHITE (Color) {0xFF, 0xFF, 0xFF}
#define GREEN (Color) {0x1F, 0xED, 0x11}
#define GRAY (Color) {0x90, 0x90, 0x90}
#define BLUE (Color) {0xFF, 0x00, 0x00}
#define RED (Color) {0x00, 0x00, 0xFF}
#define MAGENTA (Color) {0x87, 0x18, 0xD6}

typedef struct {
	char b;
	char g;
	char r;
}Color;

#endif
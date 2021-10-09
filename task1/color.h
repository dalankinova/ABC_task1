#ifndef __color__
#define __color__

#include <string.h>
#include <iostream>
enum Color { Red, Orange, Yellow, Green, Blue, Violet };
const char* ColorToStr(Color c);
Color StrToColor(const char* s);
Color RandColor();
#endif // !__color__

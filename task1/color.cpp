#include "color.h"
const char* ColorToStr(Color c)
{
	switch (c)
	{
	case Color::Blue:
		return "Blue";
	case Color::Green:
		return "Green";
	case Color::Orange:
		return "Orange";
	case Color::Red:
		return "Red";
	case Color::Violet:
		return "Violet";
	case Color::Yellow:
		return "Yellow";
	default:
		return "null";
		break;
	}
}
Color StrToColor(const char* s)
{
	if (_strcmpi(s, "red") == 0)
		return Color::Red;
	else if (_strcmpi(s, "blue") == 0)
		return Color::Blue;
	else if (_strcmpi(s, "green") == 0)
		return Color::Green;
	else if (_strcmpi(s, "yellow") == 0)
		return Color::Yellow;
	else if (_strcmpi(s, "orange") == 0)
		return Color::Orange;
	else return Color::Violet;
}
Color RandColor()
{
	int k = std::rand() % 6;
	switch (k)
	{
	case 0:return Color::Red;
	case 1:return Color::Orange;
	case 2:return Color::Yellow;
	case 3:return Color::Green;
	case 4:return Color::Blue;
	case 5:return Color::Violet;
	}
}
#pragma once
#include "Circle.h"
#include "Square.h"

class CircleSquared : public Circle, public Square {
public:
	CircleSquared(float, float);
	void Input();
	bool Rez();
};

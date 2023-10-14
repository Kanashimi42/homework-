#include "Square.h"

using namespace std;

Square::Square(float a) { area = a; }

void Square::InputSquare() {
	cout << "area of ??the square: ";
	cin >> area;
}

void Square::PrintSquare() { cout << "area of ??the square: " << area << endl; }


float Square::GetSquare() const { return area; }


void Square::SetSquare(float a) { area = a; }
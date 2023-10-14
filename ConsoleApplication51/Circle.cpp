#include "Circle.h"

using namespace std;

Circle::Circle(float r) { radius = r; }

void Circle::InputCircle() {
	cout << "Circle radius: ";
	cin >> radius;
}

void Circle::PrintCircle() { cout << "Circle radius: " << radius << endl; }


float Circle::GetCircle() const { return radius; }


void Circle::SetCircle(float r) { radius = r; }
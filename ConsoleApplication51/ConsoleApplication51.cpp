#include <iostream>
#include "CircleSquared.h"

using namespace std;

int main() {
    CircleSquared obj(5, 10);

    if (obj.Rez())
        cout << "Circle in square" << endl;
    else
        cout << "Square in circle" << endl;

    return 0;
}

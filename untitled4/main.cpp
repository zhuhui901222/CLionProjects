#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rect.h"

int main() {
    Shape *shape1=new Rect(3,6);
    Shape *shape2=new Circle(5);

    shape1->caleArea();
    shape2->caleArea();

    delete shape1;
    delete shape2;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
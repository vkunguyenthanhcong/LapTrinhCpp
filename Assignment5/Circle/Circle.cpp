#include "Circle.h"

Circle::Circle(){
    Radius = 0.0;
};
Circle::Circle(double radius){
    this->Radius = radius;
}

double Circle::getRadius(){
    return this->Radius;
}

void Circle::setRadius(double radius){
    this->Radius = radius;
}

double Circle::getArea(){
    return this->PI * Radius * Radius;
}

double Circle::getDiameter(){
    return this->Radius * 2;
}

double Circle::getCircumference(){
    return this->PI * 2 * Radius;
}

void Circle::display(){
    cout<<"Area: "<<Circle::getArea()<<endl;
    cout<<"Diameter: "<<Circle::getDiameter()<<endl;
    cout<<"Circumference: "<<Circle::getCircumference();
}
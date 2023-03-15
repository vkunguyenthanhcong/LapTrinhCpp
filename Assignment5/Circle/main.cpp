#include "Circle.cpp"

main(){
    double R;
    cout<<"Input Radius : ";
    cin>>R;
    Circle circle;
    circle.setRadius(R);
    circle.display();
}
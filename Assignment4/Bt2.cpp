#include<iostream>
#include<string>
using namespace std;

class car{
private:
    string make;
    int year;
    int speed;
public:
    car(int y, string model){
        year = y;
        make = model;
        speed = 0;
    }    
    int getYear(){
        return year;
    }
    string getMake(){
        return make;
    }
    int getSpeed(){
        return speed;
    }
    int carBreak(){
        return speed -= 5;
    }
    int accelerate(){
        return speed += 5;
    }
};
int main(){
    int year;
    string make;

    cout << "What year is car?";
    cin >> year;
    cout << "What is your car make>";
    cin >> make;

    car suv(2005, "Explorer"), sedan(year,make);

    cout << endl << "Sendan information" << endl;
    for (int i = 0; i <= 5; i++)
    {
        cout << sedan.accelerate() << endl;
    }
    cout << "Your speed is " << sedan.getSpeed() << " for the car model of " << sedan.getMake() << endl;
	for (int i = 1; i <= 5; i++)
	{
		sedan.carBreak();
	}
	cout << "You stopped the car with a speed of " << sedan.getSpeed() << endl;


	// SUV object
	cout << endl << "SUV information" << endl;
	cout << suv.getMake() << endl;
	cout << suv.getYear() << endl;
	for (int i = 1; i <= 20; i++)
	{
		suv.accelerate();
	}
	cout << "Your speed for the SUV is " << suv.getSpeed() << endl;


	return 0;
    
}
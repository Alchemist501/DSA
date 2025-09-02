#include<string>
#include<iostream>
using namespace std;
class Himalayan{
    double prince;
    string colour;
    public:
    string name;
    string Frame;
    string wheels;
    //Setter Function
    void changeColour(string newClr){
        colour = newClr;
    }
    //Getter Function
    string getColour(){
        return colour;
    }  
};
int main(){
    // Creating an object of the Himalayan class
    Himalayan bike;
    bike.name = "Himalayan";
    bike.Frame = "Steel";
    bike.wheels = "Alloy";
    
    // Accessing public members
    cout << "Bike Name: " << bike.name << endl;
    cout << "Frame Material: " << bike.Frame << endl;
    cout << "Wheels Type: " << bike.wheels << endl;

    // Changing and getting the colour using public methods
    bike.changeColour("Red");
    cout << "Bike Colour: " << bike.getColour() << endl;

    return 0;
}
#include<string>
#include<iostream>
using namespace std;
// This code demonstrates encapsulation in C++ by using a class with private members and public methods.
class Himalayan{
    double prince;
    string colour;
    public:
    string name;
    string Frame;
    string wheels;
    // Non-parameterized constructor
    Himalayan(){
        name = "Royal Enfield";
        Frame = "Aluminium";
        wheels = "Spoke";
        cout << "I am a non-parameterized constructor of Himalayan class." << endl;
    }
    // Parameterized constructor
    Himalayan(string name, string Frame, string w, double p, string c) {
        this->name = name;
        this->Frame = Frame;
        wheels = w;
        prince = p;
        colour = c;
        cout << "I am a parameterized constructor of Himalayan class." << endl;
    }
    //Copy constructor
    Himalayan(const Himalayan &obj) {
        name = obj.name;
        Frame = obj.Frame;
        wheels = obj.wheels;
        prince = obj.prince;
        colour = obj.colour;
        cout << "I am a copy constructor of Himalayan class." << endl;
    }
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
    Himalayan bike1; // Using non-parameterized constructor
    bike1.name = "Himalayan";
    bike1.Frame = "Steel";
    bike1.wheels = "Alloy";
    cout << "Bike Name: " << bike1.name << endl;
    cout << "Frame Material: " << bike1.Frame << endl;
    cout << "Wheels Type: " << bike1.wheels << endl;
    
    Himalayan bike2("Himalayan", "Steel", "Alloy", 200000, "Black"); // Using parameterized constructor
    cout << "Bike Name: " << bike2.name << endl;
    cout << "Frame Material: " << bike2.Frame << endl;
    cout << "Wheels Type: " << bike2.wheels << endl;
    cout << "Bike Colour: " << bike2.getColour() << endl;

    Himalayan bike3(bike2); // Using copy constructor
    cout << "Bike Name: " << bike3.name << endl;
    cout << "Frame Material: " << bike3.Frame << endl;
    cout << "Wheels Type: " << bike3.wheels << endl;
    cout << "Bike Colour: " << bike3.getColour() << endl;
    
    return 0;
}
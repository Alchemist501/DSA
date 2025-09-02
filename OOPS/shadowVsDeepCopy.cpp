#include <iostream>
using namespace std;
// Shadow Copy
class BMW {
 public:
  string model;
  int price;
  // Constructor
  BMW(string model, int price) {
    this->model = model;
    this->price = price;
  }
  void getDetails() {
    cout << "Model: " << model << ", Price: " << price << endl;
  }
};
// Deep Copy
class Audi {
 public:
  string model;
  int* price;
  // Constructor
  Audi(string model, int price) {
    this->model = model;
    this->price = new int;
    *(this->price) = price;
  }
  // Copy Constructor for Deep Copy
  Audi(const Audi& obj) {
    model = obj.model;
    price = new int(*(obj.price));  // allocate new memory and copy value
  }
  void getDetails() {
    cout << "Model: " << model << ", Price: " << *price << endl;
  }
  // Destructor to free allocated memory
  ~Audi() {
    cout << "Destructor called, memory freed." << endl;
    delete price;
  }
};
int main() {
  BMW car1("X5", 60000);
  car1.getDetails();
  BMW car2(car1);     // shadow copy
  car2.model = "X3";  // Modifying car2's model
  cout << "After modifying car2's model:" << endl;
  car1.getDetails();
  car2.getDetails();
  Audi car3("A6", 55000);
  car3.getDetails();
  Audi car4(car3);        // deep copy
  *car4.price = 1000000;  // Modifying car4's price
  cout << "After modifying car4's price:" << endl;
  car3.getDetails();
  car4.getDetails();
  return 0;
}
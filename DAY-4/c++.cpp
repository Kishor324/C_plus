#include<iostream>
using namespace std;

// Class definition
class Car {
  private:
    string model;   // Data member (private)

  public:
    int year;       // Data member (public)

    // Constructor
    Car(string m, int y) {
        model = m;
        year = y;
    }

    // Member function
    void display() {
        cout << "Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    // Object creation
    Car myCar("Toyota", 2022);

    // Access public member
    myCar.display();

    return 0;
}

#include <iostream>
using namespace std;
class Car {
public:
    string brand;
    int speed;
    void display() {  // Member function
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};
int main() {
    Car car1;
    car1.brand = "Tesla";
    car1.speed = 150;
    car1.display();  // Calling member function
    return 0;
}

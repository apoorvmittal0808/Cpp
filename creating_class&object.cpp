#include <iostream>
using namespace std;
class Car {
public:
    string brand;
    int speed;
};
int main() {
    Car myCar;  // Object of class Car
    myCar.brand = "Toyota";
    myCar.speed = 120;
    cout << "Brand: " << myCar.brand << endl;
    cout << "Speed: " << myCar.speed << " km/h" << endl;
    return 0;
}

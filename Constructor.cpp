#include <iostream>
#include <climits>
using namespace std;
class Car{
    public:
        string brand;
        int speed;
        Car(string b,int s){
            brand=b;
            speed=s;
        }
        void display(){
            cout<<"Brand: "<<brand<<endl<<"Top Speed: "<<speed<<" km/hr"<<endl;
        }
};
    int main(){
    Car car1("BMW",200);
    Car car2("Toyota",120);
    car1.display();
    car2.display();
    return 0;
}

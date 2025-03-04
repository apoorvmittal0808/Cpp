#include <iostream>
using namespace std;
class Vehicle{
    public:
    string brand;
    string model;
    Vehicle(string b,string m){
        brand=b;
        model=m;
    }
    virtual void display()=0;
};
class Car:public Vehicle{
    public:
    int seatingCapacity;
    string fuelType;
    Car(string b,string m,int s,string f):Vehicle(b,m){
        seatingCapacity=s;
        fuelType=f;
    }
    void display() override{
        cout<<"Car Details:"<<endl;
        cout<<"Brand: "<<brand<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Seating Capacity: "<<seatingCapacity<<endl;;
        cout<<"Fuel Type: "<<fuelType<<endl;;
    }
};
class Bike:public Vehicle{
    public:
    int engineCC;
    string type;
    Bike(string b,string m,int e,string t):Vehicle(b,m){
        engineCC=e;
        type=t;
    }
    void display() override{
        cout<<"Bike Details:"<<endl;
        cout<<"Brand: "<<brand<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"EngineCC: "<<engineCC<<endl;
        cout<<"Type: "<<type<<endl;
    }
};
class Truck:public Vehicle{
    public:
    float loadCapacity;
    int axles;
    Truck(string b,string m,float l,int a):Vehicle(b,m){
        loadCapacity=l;
        axles=a;
    }
    void display() override{
        cout<<"Truck Details:"<<endl;
        cout<<"Brand: "<<brand<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Load Capacity: "<<loadCapacity<<endl;
        cout<<"Axles Count: "<<axles<<endl;
    }
};
int main() {
    string brand;
    string model;
    int engineCC;
    int seatingCapacity;
    string fuelType;
    string type;
    float loadCapacity;
    int axles;
    cout<<"Enter Car Details:\n";
    cout<<"Enter Brand: ";
    cin>>brand;
    cout<<"Enter Model: ";
    cin>>model;
    cout<<"Enter Seating Capacity: ";
    cin>>seatingCapacity;
    cout<<"Enter Fuel Type: ";
    cin>>fuelType;
    Car c(brand,model,seatingCapacity,fuelType);
    
    cout<<"\nEnter Bike Details:\n";
    cout<<"Enter Brand: ";
    cin>>brand;
    cout<<"Enter Model: ";
    cin>>model;
    cout<<"Enter EngineCC: ";
    cin>>engineCC;
    cout<<"Enter Bike Type: ";
    cin>>type;
    Bike b(brand,model,engineCC,type);
    
    cout<<"\nEnter Truck Details:\n";
    cout<<"Enter Brand: ";
    cin>>brand;
    cout<<"Enter Model: ";
    cin>>model;
    cout<<"Enter Loading Capacity: ";
    cin>>loadCapacity;
    cout<<"Enter Number of Axles: ";
    cin>>axles;
    Truck t(brand,model,loadCapacity,axles);
    
    Vehicle *V1=&c;
    Vehicle *V2=&b;
    Vehicle *V3=&t;
    cout<<endl;
    V1->display();
    cout<<endl;
    V2->display();
    cout<<endl;
    V3->display();
    return 0;
}

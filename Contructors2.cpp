#include <iostream>
using namespace std;
class Student {
public:
    string name;
    int age;
    float grade;
    Student() {
        cout<<"This is Default Constructor"<<endl;
        cout<<"Enter Student name: ";
        cin>>name;
        cout<<"Enter Student age: ";
        cin>>age;
        cout<<"Enter Student grade: ";
        cin>>grade;
    }
    Student(string n,int a,float g){
        name=n;
        age=a;
        grade=g;
        cout<<endl<<"This is Parameterized Constructor"<<endl;
        cout<<"Student Details"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Grade: "<<grade<<endl;
    }
};
int main() {
    Student s1;
    Student s2("Alice",20,9.5);
    return 0;
}

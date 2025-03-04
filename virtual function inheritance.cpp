#include <iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    Person(string n,int a){
        name=n;
        age=a;
    }
    virtual void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class Student:public Person{
    public:
    float grade;
    Student(string n,int a,float g):Person(n,a){
        grade=g;
    }
    void display() override{
        Person::display();
        cout<<"Grade: "<<grade<<endl;
    }
};
class Teacher:public Person{
    public:
    string subject;
    float salary;
    Teacher(string n,int a,string s,float sal):Person(n,a){
        subject=s;
        salary=sal;
    }
    void display() override{
        Person::display();
        cout<<"Subject: "<<subject<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main() {
    string name;
    int age;
    float grade;
    string subject;
    float salary;
    cout<<"Enter Student Details:"<<endl;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"Enter Grade: ";
    cin>>grade;
    Student s1(name,age,grade);
    
    cout<<"\n\nEnter Teacher Details:"<<endl;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"Enter Subject: ";
    cin>>subject;
    cout<<"Enter Salary: ";
    cin>>salary;
    Teacher t1(name,age,subject,salary);
    
    Person *P1=&s1;
    Person *P2=&t1;
    cout<<"\nStudents Details:\n";
    P1->display();
    cout<<"\nTeachers Details:\n";
    P2->display();
    return 0;
}

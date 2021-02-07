#include <iostream>
using namespace std;

class Human{
    private:
        int age;
        char name[10];
        char hobby[20];
    public:
        Human(int _age, char* _name, char* _hobby) : age(_age){
            strcpy(name, _name);
            strcpy(hobby, _hobby);
        }
        void getup(){
            cout << "Get Up!" << endl;
        }
        void eat(){
            cout << "Eat Up!" << endl;
        }
        void sleep(){
            cout << "Sleep!" << endl;
        }
        void showInfo(){
            cout << "name : "  << name << endl;
            cout << "age : "   << age << endl;
            cout << "hobby : " << hobby << endl;
        }
};

// 상속받은 클래스??를 의미 하는것인가..
class Student : public Human{
    private:
        char school[30];
    public:
        Student(int _age, char* _name, char* _hobby, char* _school) : Human(_age, _name, _hobby){
            strcpy(school, _school);
        }
        void schoolInfo(){
            showInfo();
            cout << "School : " << school << endl;
        }
};

int main(){

    Student stu(18, "Kim", "Programming", "JAVEshcool");

    stu.schoolInfo();
    stu.getup();
    stu.eat();
    stu.sleep();
    
    return 0;
}
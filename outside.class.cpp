#include <iostream>
#include <cstring>  

using namespace std;

class Student {
    int prn;
    char name[50];
    double fee;

public:
    Student();  
    void display() const;  

private:
    void input();  
};

Student::Student() {
    input();  
}

void Student::input() {
    cout << "Enter your PRN: ";
    cin >> prn;
    cin.ignore();

    cout << "Enter your name: ";
    cin.getline(name, sizeof(name));  

    cout << "Enter your fees: ";
    cin >> fee;
}

void Student::display() const {
    cout << "PRN: " << prn << "\tName: " << name << "\tFee: " << fee << endl;
}

int main() {
    Student s1;
    s1.display();
    return 0;
}
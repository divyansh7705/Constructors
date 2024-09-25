//divyansh rastogi
//2307012048
//Aim - to learn the use of destructor in c++ language.

#include<iostream>
using namespace std;

int count = 0;

class Student {
    public:
    Student(){
        count++;
        cout << "number of objects created:" << count << endl;
    }
    ~Student(){
        count--;
        cout << "number of objects destroyed:" << count + 1 << endl;
    }
};
int main(){
    Student aa,bb,cc;
    {
        Student dd;
    }
    return 0;
}

/*
OUTPUT
number of objects created:1
number of objects created:2
number of objects created:3
number of objects created:4
number of objects destroyed:4
number of objects destroyed:3
number of objects destroyed:2
number of objects destroyed:1
*/
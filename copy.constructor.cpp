//divyansh rastogi
//23070123048
//Aim - to copy the constructor .

#include <iostream>
using namespace std;

class Wall {
    double length;
    double height;
    
    public:
        Wall(double len, double hgt) {
        length = len;
        height = hgt;
    }
    Wall(const Wall& obj) {
    length = obj.length;
    height = obj.height;
    }
    
    double calculateArea() const {
    return length * height;
    }
};

int main() {
    Wall wall1(20.0, 30.0); 
    Wall wall2 = wall1;     

    cout << "Area of wall 1: " << wall1.calculateArea() << endl;
    cout << "Area of wall 2: " << wall2.calculateArea() << endl;    

    return 0;
}

/*
OUTPUT
Area of wall 1: 600
Area of wall 2: 600

*/
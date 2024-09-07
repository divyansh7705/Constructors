//Divyansh 
//23070123048
// AIM: to learn constructor inside the class
#include<iostream>
using namespace std;

class date
{
    int d;
    int m;
    int y;


    public:
    date()
    {
        cout<<"Enter date: ";
        cin>>d;
        cout<<"Enter month: ";
        cin>>m;
        cout<<"Enter  Year: ";
        cin>>y;
        cout<<"Today's Date is: "<<endl;
        cout<<d<<"/"<<m<<"/"<<y;
    }
};
int main()
{
    date today;
}
/* output:-
Enter date: 7
Enter month: 09
Enter  Year: 2024
Today's Date is:
7/9/2024
*/

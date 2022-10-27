#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int age,month,day;
    cout<<"\n please enter your age:";
    cin>>age;
    month=age*12;
    day=age*365;
    cout<<"\n you are  "<<month<<"  months old. ";
    cout<<"\n you are   "<<day<<"  days old.";
    getch();
    return 0;
}

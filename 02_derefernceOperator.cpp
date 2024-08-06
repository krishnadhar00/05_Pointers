#include<iostream>
using namespace std;
int main()
{
    int x=6;
    int* ptr = &x;
    cout<<x<<endl;
    // with the help of pointer we can change the value of variable whoose address is in the pointer.
    // x=2;  // one method to change the value of x.
    *ptr = 2;
    cout<<x<<endl;
    cout<<*ptr<<endl;

}
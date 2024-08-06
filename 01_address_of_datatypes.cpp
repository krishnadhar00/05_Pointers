// Pointers are used ot store the addresses of any data types.
#include<iostream>
using namespace std;
int main()
{
    int x=3;
    int y=3;
    cout<<&x<<endl; // giving the address of data types x.
    cout<<&y<<endl;

    int* p;  // it's a way to declare the pointer. Pointer p is of integer types.
    p = &x;  // way to initialize the p.
    cout<<p<<endl; // giving the same address of x. p is taking the address of x and saving in his box.
    cout<<&p<<endl; // even p have also some address bcoz it also taking some space.

    // Pointers access the value of the variables where address is in the pointer -> using dereference operator or * operator.
    cout<<x<<endl;
    cout<<*p<<endl; // using * operator we can access the value of the variable whoose address is in the pointer.

}
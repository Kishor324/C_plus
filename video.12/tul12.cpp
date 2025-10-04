#include <iostream>
using namespace std;

int main() {
//what is pointer
//  its is type of varibale  which hold the adress of other data type

 int a=3;
int*b = &a;

// &----> Adress of operator


cout<<" the adress of a is "<<b;
cout<<" the adress of a is "<<&a;
// *-----> dereference operator

 cout<<" the value of adress b is  "<<*b<<endl;
//pointer to pointer
int** c =&b;
cout<<" the adress of b is "<< &b<<endl;
cout<<" the adress of b is "<<c<<endl;
cout<<" the value of adress at c is "<<*c<<endl;

return 0;
}
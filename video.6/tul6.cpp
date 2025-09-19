// there are a two types of header files
// 1. system hedaer files: it comes with the compiler
#include<iostream>
// 2.user defined header files: it is written by the programmer
// #include<this.h> this will produce as error if thi h is no present in the current directory

 using namespace std;
 int main(){
     int a = 5;
     int b=6;
    // cout<<"his is hello world program";
     cout<<" operator in c++:" << endl;
     cout<<" Following are the types of operator in c++"<< endl;
    //  Arthomatic operator
    cout<<"the value of a+b is "<<a+b;
    cout<<"the value of ab is "<<a-b;
    cout<<"the value of a*b is "<<a*b;
    cout<<"the value of a/b is "<<a/b;
    cout<<"the value of a++ is "<<a++;
    cout<<"the value of a-- is "<<a--;
    cout<<"the value of --a is "<<--a;
    cout<<"the value of ++a is "<<++a;
    // Assignement operator-->used to assign the value to variable
//    int a=3,b=4;
//    char d='d';


// comprarison operators
cout<< "the value of a==b is "<<(a==b)<<endl;
cout<< "the value of a!=b is "<<(a!=b)<<endl;
cout<< "the value of a>=b is "<<(a>=b)<<endl;
cout<< "the value of a<=b is "<<(a<=b)<<endl;
cout<< "the value of a<b is "<<(a<b)<<endl;

// logical  operators
cout<<"this are the logical operator of in c++ "<<endl;
cout<<" The value  of (a==b && (a<b)) are logical operator of is "<<((a==b) || (a<b))<<endl;
cout<<" The value  of (a==b && (a<b)) are logical operator of is "<<((a==b) || (a<b))<<endl;
    return 0;
 }

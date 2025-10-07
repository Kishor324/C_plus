#include <iostream>
using namespace std;
 
 //  1+ 4i
 // 5 + 12i
 //------
 // 6 + 16i

 class Complex {
     int a ,b ;

     public:

     // below line means that non member - sumcomplex function is allowd to do anything with my private parts (data)
      friend Complex sumcomplex( Complex o1, Complex o2);
     void setnumber( int n1 , int n2 ){

         a = n1 ;
          b = n2 ;
           


     }
      void printNumber(){
         cout<<" Your number is "<< a << "+"<< b<< " i";

      }
    };
  Complex sumcomplex( Complex o1, Complex o2){

    Complex o3 ;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
     return o3;
  }
 
int main() {
 Complex c1 , c2  , sum;
  c1.setnumber( 1,4);
   c1.printNumber();


  c2.setnumber(6 , 12);
   c2.printNumber ();

 sum = sumcomplex( c1 , c2);
 sum.printNumber();
    
return 0;
}

/*
Properties of friend funcion
 
1. not in the class of scope
2. can be invole wihout the help of any arguments
3.usally contans the object as argumnts
4. can be declare the inside or outside oof functions 



*/
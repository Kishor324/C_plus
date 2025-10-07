#include <iostream>
using namespace std;

 class complex{

     int a;
     int b;
      public:
     void setData(int v1 , int v2){

         a= v1;
         b = v2;
     }

      void setDatabysun(complex o1, complex o2){
     a = o1.a +  o2.a;
     b = o1.b +  o2.b;

      }

       void printNmber (){
         cout << " your compelx number is "<< a<<" + "<< b<<"i"<< endl;
       }
 };
int main() {

     complex c1 , c2 , c3;
     c1.setData(1 ,2);
      c1.printNmber();


      c2.setData(3 ,4);
      c2.printNmber();
      
      c3.setDatabysun(c1, c2);
      c3.printNmber();

return 0;
}
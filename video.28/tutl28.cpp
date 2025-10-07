#include <iostream>
using namespace std;


class Y ;
// forward decelaration y yaha xa vane batau xa yoley
// tesko esxsting too

 class X {

    int data ;
     public:
      void setvalue(int values){
        data = values;
      }
      
       friend void add(X, Y);
 }; 

  class Y

  {
  private:
   int num;
  public:
 void setvalue (int value)
 {

     
     num = value;
    }

       friend void add( X, Y);
  };

void add( X o1, Y o2){

cout << " Summing dates of x and y objects gives me "<< o1.data + o2.num;


}  
 
  



int main() {

 X a1;
 a1.setvalue(3);


  Y b1;
   b1.setvalue(5);

    add(a1 , b1 );
return 0;
}
#include <iostream>
using namespace std;

 class shop{

     int itemID[100];
     int itemPrice[100];
     int counter;
     public:
     void initCounter(void) { counter = 0;}
     void getprice(void);
     void setprice(void);
     void displayprice(void);
 };
 void shop:: getprice(void){
 cout << " ENter ID of your item "  << counter + 1 << endl;
 cin>>itemID[counter];

  cout << " ENter price of your item "<< endl;
  cin >> itemPrice[counter];
  counter++;

 }
 void shop :: displayprice(void){

     for ( int i = 0; i < counter; i++)
     {
        cout<< " The price of item Id "<< itemID[i]<<"is"<< itemPrice[i];
     }
     
 }
int main() {
  shop dukaan;
  dukaan.initCounter();
   dukaan.setprice();
   dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
return 0;
}
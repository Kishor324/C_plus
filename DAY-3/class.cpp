// function passing by value
#include <iostream>
using namespace std; 

 class time{
    int hours,minutes;

     public: void gettime (int h, int m)
     {
        hours=h; minutes=m;
     }
      void displaytime()
      {
         cout<< hours<<" hours and "<< minutes<< " minutes";
      }
      void sum ( time, time);
 };

  void time :: sum ( time t1, time t2)
  {

    minutes = t1.minutes + t2.minutes;
     hours = minutes / 60;
     minutes= minutes %60;
     hours = hours + t1.minutes +  t2.minutes;
  }

   int main()
   {
    time  T1, T2, T3;
    T1.gettime(2,24);
    T2.gettime(3,24);
    T3. sum(T1,T2);
     T3.displaytime();
      return 0;



   }
 
  
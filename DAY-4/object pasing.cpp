// #include<iostream>
// using namespace std;
//  class empolies{
//      int id;
//      int salary;
//       public:
//        void steId(void){
//         salary: 122;
//          cout<< "Enter the id of empolies"<< endl;
//          cin >> id;
//        }

//         void getId(void){
//              cout<<"the id of this epolopye is "<< id << endl;


//         }
//  };
//   int main(){
//  empolies roshan, harry, kisna;
//  harry.getId();
//  harry.steId();
//   return 0;
//   }
#include <iostream>
using namespace std;

class Employees {
    int id;
    int salary;

public:
    void setId(void) {
        salary = 122;  // set salary
        cout << "Enter the id of employee: " << endl;
        cin >> id;
    }

    void getId(void) {
        cout << "The id of this employee is " << id << endl;
        cout << "The salary is " << salary << endl;
    }
};

int main() {
    // Employees roshan, harry, kisna;

    // harry.setId();   // first set id and salary
    // harry.getId();   // then display them
Employees fb[4];
for(int i=0; i<4; i++){
    fb[i].setId();
     fb[i].getId();
}
    return 0;
}

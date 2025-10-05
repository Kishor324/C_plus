
// OOPS = classes and object
// C++ --> innitital called --> c with classes by stroustroup

        


// classs --> extensions of structure (in c)


//  Structures had limititations

// --> member are pulbic 

// -> NO method

 
// you can declare objects along wiht the clas delclerations like this:

//   class employee{
//     //class definations 

//   } harrry, rohan , lovisih

// harry.salary - 8 makees no sense if salary is privite





// Nesting of member function
    

// Nesting and loops in css
#include<iostream>
using namespace std;

class binary {
     string  s;
      public:
       void read(void);
       void chk_bin(void);
       void ones(void);
        void display(void);
        
};

 void binary :: read(void){
     cout<<" Enter a binary number"<<endl;
     cin>>s;
    }

 void binary :: chk_bin(void){
     for( int i = 0; i < s.length(); i++){


         if (s.at(i)!='0' && s.at(i)!= '1'){
             cout<< " incorrect binary format "<< endl;
             exit (0);

         }
     }
 }


  void binary :: ones(void)

  {
for( int i = 0; i < s.length(); i++){

    if(s.at(i)=='0'){
        s.at (i)= '1';

    }
else {
        s.at (i)= '0';

    }
}
 cout<<endl;
  }


  void binary :: display(void){

     cout << " Displaying your binary number" << endl;
    for( int i = 0; i < s.length(); i++){ 
        cout<<s.at(i);
    }

  }
int main() {







 binary  b;

b.read();
b.chk_bin();
b.ones();
b.display();
b.display();



return 0;
}
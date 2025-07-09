//  defining the function inside the class

//  #include<iostream>
 #include <iostream>  // Required for cin and cout
using namespace std; // Brings std::cin and std::cout into scope

class student{
    private: char name [20];
int roll;
float marks;

 public: void input ()
 {
    cin >> name >> roll >> marks;

 }
  void display()
{
    cout << "name ="<<name<<" roll="<<roll<<" marks="<< marks;
}
};
int main()
{
    student S1,S2;
    S1.input();
    S1.display();

    return 0;
}
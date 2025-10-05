// static function in cpp
#include <iostream>
using namespace std;

class employee
{

    int id;
    static int count;

public:
    void setddata(void)
    {
        cout << "Enter the id " << endl;

        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << " The id of the this employe is " << id << " and this is employee number " << count << endl;
        // cout << id;
    }

    static void  getcount(void){

        //static member function ley static variable matarai axceess garna pauxa aru varibale a consatnat lai paudaye
         cout<<" the value of count is"<< count<< endl;
    }
};

// count is the static data member in employee class
int employee ::count = 1000; // Default value is  0
int main()
{

    employee kishor, aarjo, lavish;

    kishor.setddata();
    kishor.getdata();
     employee::getcount();
     
     aarjo.setddata();
     aarjo.getdata();
     employee::getcount();
     
     lavish.setddata();
     lavish.getdata();
     employee::getcount();

    // kishor.id = 1;
    // kishor.count = 1; // cannot do this aas id and count are private
    return 0;
}
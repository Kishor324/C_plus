#include <iostream>
using namespace std;
class stuedent
{

    int a, b;
//  friend  stuedent sumoftwosum( stuedent sum1 , stuedent sum2 );
public:
    void setnum( float n1, float n2)
    {
        a = n1;
        b = n2;
        //  cout<< "ENter the numbers "<< a << b<<endl;
    }
    void getsum()
    {
        cout << " The sum of two mumber" << "=" << float(a) + float (b) << endl;
    }
};

// stuedent sumoftwosum( stuedent sum1 , stuedent sum2 ){
//  stuedent   sum3;
//    sum3.getsumofAll( ( sum1.a +sum2.a),( sum1.b + sum2));
//     return sum3;

   

// }
int main()
{
    stuedent s1, s2 , sum;
    // s1.
    sum.setnum(2.4, 5.6);
    sum.getsum();
    return 0;
}
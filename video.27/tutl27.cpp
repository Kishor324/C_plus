// Friend classes & Member Friend function in c++
#include <iostream>
using namespace std;

/// forward decleration
class Complex;
class Calculator
{
public:
    int add(int a, int b)
    {

        return (a + b);
    }

    int sumrealcomplex(Complex, Complex);
    int sumcompcomplex(Complex, Complex);
};

class Complex
{
    int a, b;

    // Indivisually delcelaring function as class
    //   friend int Calculator :: sumrealcomplex(Complex , Complex );
    //   friend int Calculator :: sumcompcomplex(Complex , Complex );

    // aliter: decleraing as a entrire  calculator class as friend

    friend class Calculator;

public:
    // friend Complex sumcomplex(Complex o1, Complex o2);
    void setnumber(int n1, int n2)
    {

        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << " Your number is " << a << "+" << b << " i";
    }
};

int Calculator ::sumrealcomplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumcompcomplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{

    Complex o1, o2;
    o1.setnumber(1, 4);
    o2.setnumber(5, 7);

    Calculator calc;
    int res = calc.sumrealcomplex(o1, o2);

    cout << " THE sum of real part of o1 , o2 is" << res << endl;
    int resc = calc.sumcompcomplex(o1, o2);

    cout << " THE sum of  complex part of o1 , o2 is" << resc << endl;

    return 0;
};
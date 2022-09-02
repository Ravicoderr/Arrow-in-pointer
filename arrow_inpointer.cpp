#include <iostream>
using namespace std;
class complex
{
    int real, imaginary;

public:
    void setdata(int a, int b)
    {
        imaginary = b;
        real = a;
    }
    void getdata()
    {
        cout << "the value of real part is " << real
             << " the value of imaginary part is " << imaginary<<endl;
    }
};
int main()
{
    complex c1;
    complex *c2 = &c1;
    (*c2).setdata(5, 7);
    (*c2).getdata();
    cout<<endl;

    complex *c3 = new complex;
    // or i can simply use arrow
    c3->setdata(8, 3);
    c3->getdata();
    cout<<endl;

    // Array of obejects

    complex *c5 = new complex[4];
    c5->setdata(7, 9);
    c5->getdata();

    return 0;
}
#include <iostream>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    Complex() {}
    Complex(int x, int y)
    {
        real = x;
        img = y;
    }
    Complex(const Complex &C)
    {
        real=C.real;
        img=C.img;
    }
    Complex & operator=(Complex &C)
    {
        this->real=C.real;
        this->img=C.img;
        return *this;
    }
    void setData(int x, int y)
    {
        real = x;
        img = y;
    }
    void display()
    {
        cout<<"\n real ="<<real<<" img ="<<img<<endl;
    }
};
int main()
{
    Complex c1,c2(3,4);
    Complex c3=c2;
    c1=c2=c3;
    c1.display();
    c2.display();
    c3.display();

}
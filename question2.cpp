#include<iostream>
using namespace std;
class Complex
{
    private:
    int real,img;
    public:
    void setData(int real ,int img)
    {
        this->real=real;
        this->img=img;
    }
    void display()
    {
        cout<<"real = "<<real<<" img = "<<img<<endl;
    }
};
int main()
{
    Complex c1;
    c1.setData(3,4);
    c1.display();

    return 0;
}
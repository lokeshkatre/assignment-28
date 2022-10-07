#include<iostream>
using namespace std;
class Complex
{
    private :
    int real ,img;
    public:
    friend istream & operator>>(istream &input,Complex &C)
    {
        cout<<"Enter real part:"<<endl;
        input>>C.real;
        cout<<"Enter img part:"<<endl;
        input>>C.img;
        return input;
    }
    friend ostream & operator<<(ostream &output,Complex &C)
    {
        cout<<"\nreal ="<<C.real<<" img ="<<C.img<<endl;
        return output;
    }
};
int main()
{
    Complex c1,c2;
    cin>>c1>>c2;
    cout<<c1<<c2;
    return 0;
    
}
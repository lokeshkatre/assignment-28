#include<iostream>
using namespace std;
class Distance
{
    private:
    int feet,inches;
    public:
    Distance(){}
    Distance(int x,int y)
    {
        feet=x;
        inches=y;
    }
    void operator()(int a,int b,int c)
    {
        feet=a+c+5;
        inches=a+b+15;
    }
    void display()
    {
        cout<<"\nfeet ="<<feet<<" inches="<<inches<<endl;
    }
};
int main()
{
    Distance d1(2,3);
    d1.display();
    d1(1,2,3);
    d1.display();

}
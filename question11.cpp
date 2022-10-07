#include<iostream>
using namespace std;
class Marks
{
    private:
    int marks;
    public:
    Marks(){}
    Marks(int x){marks=x;}
    void display()
    {cout<<"\nmarks="<<marks;}
    Marks *operator->()
    {
        return this;
    }
};

int main()
{
    Marks m(3);
    m->display();

    return 0;
}
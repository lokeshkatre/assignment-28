#include<iostream>
using namespace std;
class integer
{
    private:
    int i;
    public:
    integer(int n)
    {
        i=n;
    }
    void display()
    {
        cout<<i<<endl;
    }
    operator int()
    {
        return i;
    }
};
int main()
{
    integer n=5;
    n.display();
    int x=4;
    x=(int)n;
    cout<<x;
}
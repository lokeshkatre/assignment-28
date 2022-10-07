#include<iostream>
using namespace std;
class integer 
{
    private:
    int n;
    public:
    integer (int n):n(n)
    {
    }
    int operator!()
    {
        return !n;
    }
};
int main()
{
    integer x=10;
    cout<<!x;
    return 0;
}
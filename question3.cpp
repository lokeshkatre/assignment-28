#include <iostream>
using namespace std;
class array
{
private:
    int a[100];
    const int size = 100;

public:
    array()
    {
    }
    void setArr(int n , int index)
    {
        if(index>=size)
        {
        cout<<"array index out of Bound"<<endl;
        exit(0);
        }
        a[index]=n;
    }
    void display(int index)
    {
        cout<<a[index]<<endl;
    }
    int operator[](int index)
    {
        if(index>=size)
        {
            cout<<"Index out of Bound"<<endl;
            exit(0);
        }
        return a[index];
    }
};
int main()
{
    array a1;
    a1.setArr(5,10);
    a1.display(10);
    cout<<a1[101];
    
    
    return 0;


}
#include<iostream>
using namespace std;
class Coordinate
{
    private :
    float x,y,z;
    public:
    Coordinate(){

    }
    Coordinate & operator=(const Coordinate &C)
    {
        this->x=C.x;
        this->y=C.y;
        this->z=C.z;
        return *this;
    }
    Coordinate(float a,float b,float c)
    {
        x=a;
        y=b;
        z=c;
    }
    Coordinate & operator,(Coordinate &c)
    {
        return c;
    }
    void display()
    {
        cout<<"\n";
        cout<<x<<" "<<y<<" "<<z<<endl;
    }

};
int main()
{
    Coordinate c1(2,3,5),c2(1,6,3),c3;
    c3=(c1,c2);
    c1.display();
    c2.display();
    c3.display();
     return 0;
}
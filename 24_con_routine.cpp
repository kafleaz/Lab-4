#include<iostream>
using namespace std;
class x
{
    int a;
    public:
    x()
    {
        a=0;
    }
    x(int m)
    {
        a=m;
    }
    void display()
    {
        cout<<"Data from obj 1: "<<a;
    }
};
class y
{
    int b;
    public:
    y(int n)
    {
        b=n;
    }
    operator x()
    {
        int z;
        z=b;
        return x(z);
    }
};
int main()
{
    x x1;
    y y1(19);
    x1=y1;
    x1.display();

}

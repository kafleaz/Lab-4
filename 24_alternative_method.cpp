#include<iostream>
using namespace std;
class x
{
    int a;
    public:
    x(int m)
    {
        a=m;
    }
    int getdata()
    {
        return a;
    }
};
class y
{
    int b;
    public:
    y()
    {
        b=0;
    }
    y (x z)
    {
        int n;
        n = z.getdata();
        b=n;
    }
    void display()
    {
        cout<<"Data in from obj 1: "<<b;
    }
};
int main()
{
    x x1(67);
    y y1=x1;
    y1.display();
    return 0;
}
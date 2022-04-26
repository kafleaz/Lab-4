#include<iostream>
using namespace std;
class complex 
{
    private:
    int rel;
    int img;
    public:
    complex(int r, int i)
    {
        rel=r;
        img=i;
    }
    void getdata()
    {
        cout<<rel<<"+"<<img<<"i"<<endl;
    }
    complex operator -(complex r)
    {
        complex c1(0,0);
        c1.rel=rel- r.rel;
        c1.img=img- r.img;
        return c1;
    }
};
int main()
{
    complex c1(23,46), c2(12,40), c3(0,0);
    cout<<"Entered data: "<<endl;
    c1.getdata();
    c2.getdata();
    c3= c1 - c2;
    cout<<"After subtracting: "<<endl;
    c3.getdata();


}
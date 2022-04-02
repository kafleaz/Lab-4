#include<iostream>
using namespace std;
class complex 
{
    private:
    int rel;
    int img;
    public:
    complex (int a, int b)
    {
        rel= a;
        img= b;
    }
    void getdata()
    {
        cout<<rel<<"+"<<img<<"i"<<endl;
    }
    complex operator +(complex a)
    {
        complex c1(0,0);
        c1.rel=rel+a.rel;
        c1.img=img+a.img;
        return c1;
    }
};
int main()
{
    complex c1(3,6), c2(8,4), c3(0,0);
    cout<<"Data in object, "<<endl;
    c1.getdata();
    c2.getdata();
    c3= c1+ c2;
    cout<<"After adding: "<<endl;
    c3.getdata();
    //cout<<c3.getdata();

}
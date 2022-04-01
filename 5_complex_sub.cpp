#include<iostream>
using namespace std;
class complex 
{
    private:
    int rel, img;
    public:
    complex (int a, int b)
    {
        rel= a;
        img= b;
    }
    int getdata()
    {
        return rel;
        return img;
    }
    complex operator +(complex a)
    {
        complex c1(0);
        c1.rel=rel+c1.rel;
        c1.img=img+c1.img;
        return c1;
    }
};
int main()
{
    complex c1(3,6), c2(8,4), c3(0,0);
    cout<<"C1 Data: "<<c1.getdata()<<endl;
    cout<<"C2 Data: "<<c2.getdata()<<endl;
    c3= c1+ c2;
    cout<<""

}
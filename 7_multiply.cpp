#include<iostream>
using namespace std;
class multiply
{
    private:
    int x;
    public:
    multiply (int a)
    {
        x=a;
    }
    void getdata()
    {
        cout<<x<<endl;
    }
    multiply operator *(multiply a)
    {
        multiply m1(0);
        m1.x=x*a.x;
        return m1;
    }
};
int main()
{
    multiply m1(23),m2(2),m3(0);
    cout<<"Data in object,"<<endl;
    m1.getdata();
    m2.getdata();
    m3=m1*m2;
    cout<<"Multiplication of object is: ";
    m3.getdata();
}
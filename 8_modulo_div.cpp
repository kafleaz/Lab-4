#include<iostream>
using namespace std;
class modulo
{
    private:
    int data;
    public:
    modulo(int d)
    {
        data=d;
    }
    void getdata()
    {
        cout<<data<<endl;
    }
    modulo operator %(modulo a)
    {
        modulo m1(0);
        m1.data = data % a.data;
        return m1;
    }
};
int main()
{
    modulo m1(50), m2(6), m3(0);
    cout<<"Data in object,"<<endl;
    m1.getdata();
    m2.getdata();
    m3=m1 % m2;
    cout<<"The modulo is: "<<endl;
    m3.getdata();
}
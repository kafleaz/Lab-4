#include<iostream>
using namespace std;
class oper
{
    private:
    int x;
    public:
    oper(int a)
    {
        x= a;
    }
    int getdata()
    {
        return x;
    }
    int operator >(oper k)
    {
        if(x>k.x)
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    }
};
int main()
{
    oper o1(20), o2(24);
    cout<<"Data in object 1: "<<o1.getdata()<<endl;
    cout<<"Data in object 2: "<<o2.getdata()<<endl;
    if (o1> o2)
    {
        cout<<"Data 1 is greater than data 2.";
    }
    else
    {
        cout<<"Data 1 is not greater than data 2.";
    }
    return 0;
}
#include<iostream>
using namespace std;
class oper
{
    private:
    int x;
    public:
    oper(int a)
    {
        x=a;
    }
    int getdata()
    {
        return x;
    }
    int operator <=(oper y)
    {
        if(x <= y.x)
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
    oper o1(68), o2(70);
    cout<<"Enter Data 1: "<<o1.getdata()<<endl;
    cout<<"Enter Data 2: "<<o2.getdata()<<endl;
    if (o1<=o2)
    {
        cout<<"Data 1 is smaller or equal to Data 2.";
    }
    else
    {
        cout<<"Data 1 is not smaller or equal to Data 2.";
    }
    return 0;
}
#include<iostream>
using namespace std;
class oper
{
    private:
    int n;
    public:
    oper(int x)
    {
        n=x;
    }
    int getdata()
    {
        return n;
    }
    int operator !=(oper a)
    {
        if(n != a.n)
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
    oper o1(34), o2(34);
    cout<<"Enter Data 1: "<<o1.getdata()<<endl;
    cout<<"Enter Data 2: "<<o2.getdata()<<endl;
    if(o1 != o2)
    {
        cout<<"Data 1 is not equal to Data 2.";
    }
    else
    {
        cout<<"Data 1 is equal to Data 2.";
    }
    
}
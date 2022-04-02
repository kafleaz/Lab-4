#include<iostream>
using namespace std;
class oper
{
    private:
    int x;
    public:
    oper(int v)
    {
        x=v;
    }
    int getdata()
    {
        return x;
    }
    int operator <(oper k)
    {
        if(x < k.x)
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
    oper o1(32), o2(35);
    cout<<"Enter data 1: "<<o1.getdata()<<endl;
    cout<<"Enter data 2: "<<o2.getdata()<<endl;
    if(o1 < o2)
        {
            cout<<"Data 1 is smaller than data 2";
        }
        else
        {
            cout<<"Data 1 is nor smaller than data 2";
        }
        return 0;    
}
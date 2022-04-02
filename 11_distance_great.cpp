#include<iostream>
using namespace std;
class distanc
{
    private:
    int dis1, dis2;
    public:
    void getdata()
    {
        cout<<"Enter two distances: ";
        cout<<"Distance 1: ";
        cin>>dis1;
        cout<<"Distance 2: ";
        cin>>dis2;
    }
    int operator >(distanc x)
    {
        float a , b; 
        a=dis1;
        b=dis2;
        if (a>b)
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
    distanc d1, d2;
    d1.getdata();
    if(d1> d2)
    {
        cout<<"Distance 1 is greater.";
    }
    else
    {
        cout<<"distance 2 is greater.";
    }

}
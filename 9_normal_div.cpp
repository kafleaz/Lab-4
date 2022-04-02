#include<iostream>
using namespace std;
class division
{
    private:
    int div;
    public:
    division(int x)
    {
        div=x;
    }
    void getdata()
    {
        cout<<div<<endl;
    }
    division operator /(division x)
    {
        division d1(0);
        d1.div=div / x.div;
        return d1;
    }
};
int main()
{
    division d1(50), d2(5), d3(0);
    cout<<"Data in object is "<<endl;
    d1.getdata();
    d2.getdata();
    d3=d1 / d2;
    cout<<"The output is: ";
    d3.getdata();
}
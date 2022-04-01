#include<iostream>
using namespace std;
class increment
{
    private:
    int b;
    public:
    increment()
    {
        b=8;
    }
    int getdata()
    {
        return(b);
    }
    void operator ++(int)
    {
        b++;
    }
};
int main()
{
    increment i1;
    cout<<"Entered data: "<<i1.getdata()<<endl;
    i1 ++;
    cout<<"After increment: "<<i1.getdata()<<endl;
}
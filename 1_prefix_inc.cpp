#include<iostream>
using namespace std;
class increment
{
    private:
    int a;
    public:
    increment()
    {
        a=5;
    }
    int getdata()
    {
        return a;
    }
    void operator ++()
    {
        ++a;
    }

};
int main()
{
    increment i1 ;
    cout<<"Entered data: "<<i1.getdata()<<endl;
    ++ i1;
    cout<<"After increasing, the data is: "<<i1.getdata();
}
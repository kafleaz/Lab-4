#include<iostream>
using namespace std;
class assign
{
    private:
    int x;
    public:
    assign( int a)
    {
        x=a;
    }
    int getdata()
    {
        return x;
    }
    void operator +=(assign y)
    {
        x+=y.x;
    }
    void display()
    {
        cout<<x;
    }

};
int main()
{
    assign a1(30),a2(45);
    cout<<"Data in obj 1: "<<a1.getdata()<<endl;
    cout<<"Data in obj 2: "<<a2.getdata()<<endl;
    a1 += a2;
    cout<<"New data in boj 1: "<<a1.getdata()<<endl;
    return 0;
}
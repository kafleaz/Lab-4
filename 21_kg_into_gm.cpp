#include<iostream>
using namespace std;
class convert
{
    int kg;
    int gram;
    public:
    convert(int a)
    {
        kg=(a);
        gram= a*1000;
    }
    int datain()
    {
        return kg;
    }
    void display()
    {
        cout<<"Weight in gram: "<<gram;
    }
};
int main()
{
    convert c1(5);
    cout<<"Weight (Kg) in object "<<c1.datain()<<endl;
    c1.display();
}
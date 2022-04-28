#include<iostream>
using namespace std;
class currency
{
    int rs;
    float paisa;
    public:
    currency(float r)
    {
        rs=(r);
        paisa=100*(r-rs);
    }
    void display()
    {
        cout<<"Rs." <<rs<<endl<<"Paisa: "<<paisa;
    }

};
int main()
{
    currency c1(100.25), c2(0);
    c1.display();
}
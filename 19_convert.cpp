#include<iostream>
using namespace std;
class convert
{
    private:
    int kg, gram;
    public:
    convert(float x)
    {
        kg=int(x);
        gram=1000*(x-kg);
    }
    float getdata()
    {
        cout<< kg <<gram;
    }
    void display()
    {
        cout<<"Kg: "<<kg<<endl<<"Gram: "<<gram;
    }
    
};
int main()
{
    convert c1(10.5);
    cout<<"Data on object is:"<<c1.getdata()<<endl;
    c1.display();
    return 0;
}
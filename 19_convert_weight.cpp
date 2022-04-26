#include<iostream>
using namespace std;
class convert
{
    private:
    int kg;
    float gram;
    public:
    convert(float x)
    {
       
        kg=(x);
        gram=1000*(x-kg);
    }
    float getdata()
    {
        return (kg+gram/1000);
    }
    void display()
    {
        cout<<"Kg: "<<kg<<endl<<"Gram: "<<gram;
    }
    
};
int main()
{
    convert c1(10.5), c2  (0);
    cout<<"Data on object is:"<<c1.getdata()<<endl;
    c1.display();
    return 0;
}
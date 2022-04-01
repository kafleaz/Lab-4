#include<iostream>
using namespace std;
class decrement
{
    private:
    int z;
    public:
    decrement()
    {
        z=8;
    }
    int getdata()
    {
        return(z);
    }
    void operator --(int)
    {
        z--;
    }
};
int main()
{
    decrement d1;
    cout<<"Entered Data: "<<d1.getdata()<<endl;
    d1--;
    cout<<"After Decrement: "<<d1.getdata();
}

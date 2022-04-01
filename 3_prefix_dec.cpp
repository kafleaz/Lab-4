#include<iostream>
using namespace std;
class decrement
{
    private:
    int c;
    public:
    decrement()
    {
        c=7;
    }
    int getdata()
    {
        return(c);
    }
    void operator --()
    {
        --c;
    }

};
int main()
{
    decrement d1;
    cout<<"Entered Data: "<<d1.getdata()<<endl;
    -- d1;
    cout<<"After Decrement: "<<d1.getdata();
}
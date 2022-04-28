#include<iostream>
using namespace std;
class fahrenheit
{
    float temp;
    public:
    fahrenheit()
    {
        temp = 0;
    }
    fahrenheit( float f)
    {
        temp= f;
    }
    void display()
    {
        cout<<"Temperature in farenheit: "<<temp<<endl;
    }
};
class celsius
{
    float temp1;
    public:
    celsius(float c)
    {
        temp1=c;
    }
    operator fahrenheit()
    {
        float f;
        f=temp1*9/5+32;
        return fahrenheit(f);
    }
};
int main()
{
    fahrenheit f1;
    celsius c1(6);
    f1=c1;
    f1.display();
    return 0;
}
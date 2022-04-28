#include<iostream>
using namespace std;
class international
{
    float gram;
    public:
    international()
    {
        gram=0;
    }
    international (float g)
    {
        gram=g;
    }
    void display()
    {
        cout<<"Weight of gold: "<<gram<<" gram"<<endl;
    }
};
class national
{
    float tola;
    public:
    national(int n)
    {
        tola=n;
    }
    int getdata()
    {
        return tola;
    }
    operator international()
    {
        float t;
        t= tola*11.664;
        return international(t);
    }
};
int main()
{
    international i1;
    national n1(3);
    cout<<"weight of gold: "<<n1.getdata()<<" Tola."<<endl;
    i1=n1;
    i1.display();
    return 0;
}
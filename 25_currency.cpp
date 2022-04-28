/*Write a program to convert an object of  dollar class to object of rupees class. 
Assume that dollar class has data members dol and cent an rupees class have data
 members rs and paisa --490.64-- 61.35--*/ 

#include<iostream>
using namespace std;
class rupee
{
    int rs;
    int paisa;
    public:
    rupee()
    {
        rs=0;
        paisa=0;
    }
    rupee(int r, int p)
    {
        rs=r;
        paisa=p;
    }
    void display()
    {
        cout<<"Rs. "<<rs<<endl<<"paisa: "<<paisa;
    }
};
class dollar
{
    int dol;
    int cent;
    public:
    dollar(int d, int c)
    {
        dol=d;
        cent=c;
    }
    operator rupee()
    {
        int r, p;
        r= dol*122.66;
        p= (cent*12.27);
        r= r + p/100;
        p= (p %100); 
        return rupee(r, p);
    }
};
int main()
{
    rupee r1;
    dollar d1(4, 500);
    r1=d1;
    r1.display();
    return 0;
}
#include<iostream>
using namespace std;
class amount
{
    private:
    int rs;
    int paisa;
    public:
    void getdata()
    {
        cout<<"Enter Rs and paisa: ";
        cout<<"Rs. ";
        cin>>rs;
        cout<<"paisa:  ";
        cin>>paisa;
    }
    int operator <(amount m)
    {
        float w, x;
        w = rs*100;
        x = paisa;
        if(x<w) 
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    amount a1, a2;
    
    a1.getdata();
   
    if (a1<a2)
    {

        cout<<"paisa is less.";
    }
    
    else 
    {
        cout<<"Rs is less.";
    }
    return 0;
}
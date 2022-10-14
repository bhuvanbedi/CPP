#include<iostream>
using namespace std;
class maths
{
    public:
    int sum(int a,int b)
    {
        int c;
        c=a+b;
        // cout<<"sum of 2 no.s is"<<c;
        return(c);
    }
    void product(int a,int b)
    {
        int c;
        c=a*b;
        cout<<"product of 2 no.s is"<<c;
    }
};
int main()
{
    int j,l,sum;
    maths m1;
    cout<<"enter value of j";
    cin>>j;
    cout<<"\n enter value of l";
    cin>>l;
    sum= m1.sum(j,l);
    cout<<"the sum is \n"<<sum;
    cout<<"\n";
    m1.product(j,l);
    return(0);
}
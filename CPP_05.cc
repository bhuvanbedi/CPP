#include<iostream>
using namespace std;
class mathematics
{
    private:
    void sum();
    public:
    void temp()
    {
        sum();
    }
};
int main()
{
    mathematics m;
    m.temp();
    return(0);
}
void mathematics::sum()
{
    int j,l;
    cout<<"enter 2 no.s\n";
    cin>>j;
    cin>>l;
    cout<<"the sum of numbers is:\n"<<j+l;
}

#include<iostream>
using namespace std;
class alpha
{
    public:
    friend void run();
};
void run()
{
    cout<<"hello";
}
int main()
{
    alpha a;
    run();
    return(0);
}
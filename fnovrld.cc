#include<iostream>
using namespace std;
//to overload same function within class differentiate by passing an argument
class animal
{
    public:
    void run(int a)
    {
        cout<<a<<" "<<"Tiger is running"<<endl;
    }
    void run()
    {
        cout<<"dog is running"<<endl;
    }
};
int main()
{
    animal a;
    a.run(10);
    a.run();
    return(0);
}
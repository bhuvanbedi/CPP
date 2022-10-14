#include<iostream>
using namespace std;
class animal
{
    public:
    void run()
    {
        cout<<"lion is running...."<<endl;
    }
};
class tiger:public animal
{
    public:
    void run()
    {
        cout<<"Tiger is running..."<<endl;
    }
};
int main()
{
    tiger t;
    animal a;
    t.run();
    a.run();
    cout<<endl;
}
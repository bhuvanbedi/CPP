#include<iostream>
using namespace std;
class animal
{
    protected:
    void type()
    {
        cout<<"types of animals";
    }
};
class tiger:public animal
{
    public:
    void wild()
    {
        type();
        cout<<"tiger is wild animal.....";
    }
};
class dog:public animal
{
    public:
    void pet()
    {
        cout<<"dog is pet animal...";
    }
};
int main()
{
    tiger t1;
    dog d1;
    t1.wild();
    d1.pet();
    return(0);
}
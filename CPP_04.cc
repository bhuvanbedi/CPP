#include<iostream>
using namespace std;
class animal
{
   /*protected-function becomes private to child class,cant access it in main v similar to private,only
   difference is function becomes private to child class as well*/
    protected:
    void jump()
    {
        cout<<"kangaroo is jumping.....";
    }
    public:
    void get()
    {
        jump();
    }
};
class kangaroo:public animal
{
    public:
    void get()
    {
        jump();
    }
};
int main()
{
    kangaroo k1;
    animal a;
    k1.get();
    a.get();
    return(0);
}
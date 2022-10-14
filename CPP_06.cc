#include<iostream>
using namespace std;
class animal
{
    public:
    void jump()
    {
        cout<<"kangaroo is jumping...";
    }
};
class kangaroo:public animal
{

};
int main()
{
    kangaroo k1;
    k1.jump();
    return(0);
}
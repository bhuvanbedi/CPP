#include<iostream>
using namespace std;
class animal
{
    public:
    void jump();
};
main()
{
    animal a;
    a.jump();
    return(0);
}
void animal :: jump()
{
    cout<<"kangaroo is jumping";
}
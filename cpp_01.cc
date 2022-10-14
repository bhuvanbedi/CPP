#include<iostream>
using namespace std;
class animal
{
    private:
    void run()
    {
        cout<<"cow is running.....";
    }
    public:
    void bark()
    {
        run();
        cout<<"the dog is barking....";
    }
};
int main()
{
    animal a1;
    a1.bark();
    return(0);
}
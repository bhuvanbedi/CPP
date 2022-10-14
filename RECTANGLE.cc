#include<iostream>
using namespace std;
class rectangle
{
    public:
    void input()
    {
        int T,a,b,c,d,i;
        cin>>T;
        for(i=1;i<T+1;i++)
        {
            cin>>a;
            cin>>b;
            cin>>c;
            cin>>d;
            if((a==b&&c==d)||(a==d&&b==c)||(a==c&&b==d))
            cout<<"YES\n";
            else
            cout<<"NO\n";
        }
    }    
};
int main()
{
rectangle r1;
r1.input();
return(0);
}
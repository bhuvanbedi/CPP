#include<iostream>
using namespace std;
int main()
{
    int k,l,m,n,d,i,count=0,ans;
    cin>>k>>l>>m>>n>>d;
    int ar1[d];
    for(i=0;i<d;i++)
    {
        ar1[i]=i+1;
    }
    for(i=0;i<d;i++)
    {
        if((ar1[i]%k!=0)&&(ar1[i]%l!=0)&&(ar1[i]%m!=0)&&(ar1[i]%n!=0))
        count++;
    }
    ans=d-count;
    cout<<ans;
    return(0);
}
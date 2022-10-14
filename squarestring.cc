#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,l;
    cin>>t;
    while(t!=0)
    {
        string str;
    getline(cin>>ws, str);
    l=str.length();
    if(l%2==0)
    {
        string str2=str.substr(0,l/2);
        string str3=str.substr(l/2,l/2);
        if(str2==str3)
        cout<<"YES";
        else
        cout<<"NO";
    }
    else
    cout<<"NO";
    t--;
    }
return(0);
}
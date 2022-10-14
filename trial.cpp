#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q,i,j,x,y,u,v;  
    cin>>n>>q;
    // vector<vector<int>>v;
    // int i,x,size;
    int const size=1000;
    int a[n][size];
    for(i=0;i<n;i++)
    {
        for(j=0;j<size;j++)
        {
            cin>>a[i][j];
        }
    }
    // cin>>i>>j;
    // cin>>x>>y;
    // cout>>a[i][j];
    // cout>>a[x][y]
    for(x=0;x<q;x++)
    {
        cin>>u>>v;
        for(i=0;i<u;i++)
        {
            for(j=0;j<v;j++)
            {
                cout<<a[u][v]<<endl;
            }
        }
    }
    return 0;
}
/*
given 2d array of size N*N .given q queries and in each query given a,b,c,d print sum of square formed by (a,b) as top left conner and 
(c,d) as top right conner

constraints 
1<=N<=10^3
1<=a[i][j]<=10^9
1<=q<=10^5
1<=a,b,c,d<=N
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ar[101][101],t,ps[101][101],i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        cin>>ar[i][j];
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        ps[i][j]=ps[i][j-1]+ps[i-1][j]+ar[i-1][j-1]-ps[i-1][j-1];
    }    
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<ps[c][d]-ps[a-1][d]-ps[c][b-1]+ps[a-1][b-1]<<endl;
    }
}


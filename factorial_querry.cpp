/*
given t test case in each test case a number n is given print n!%m in each case 
where m=10^9+7
constraints
1<=t<=10^5
1<=n<=10^5
*/



// basic approch

#include<bits/stdc++.h>
using namespace std;
long long int m=10e9+7;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int ans=1;
       long long int n,i;
        cin>>n;
        for(i=1;i<=n;i++)
        ans=(ans*i)%m;
        cout<<ans<<endl;
    }  
}
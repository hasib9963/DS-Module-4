#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i==0)
            b[i]=a[i];
        else
            b[i]=b[i-1]+a[i];
    }
    for(int i=n-1;i>=0;i--)
        cout<<b[i]<<" ";
    return 0;
}
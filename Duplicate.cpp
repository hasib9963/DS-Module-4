#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    int f=0;
    cin>>n;
    long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            if(a[i]==a[j])
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            break;
        }
    }
    if(f==1)
    {
        cout<<"YES";
    }
    else if(f==0)
    {
        cout<<"NO";
    }
    return 0;
}

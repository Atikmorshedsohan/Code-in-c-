#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k,count=0;
        cin>>n>>k;
        int ar[n];
        for(int i=0;i<n;i++){
        cin>>ar[i];
        if(2023%ar[i]==0)
        count++;
        }
        if(count==n)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}

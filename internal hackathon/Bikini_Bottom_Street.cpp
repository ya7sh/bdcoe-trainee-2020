#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll a[n+1];
    ll b[n+1];
    for(int i=0;i<=n;i++)
    {
        b[i]=0;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        
            b[i]=a[i]+b[i-1];
        
        
    }
  
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        ll d,e;
        cin>>d>>e;
        
        if(d==e)
        cout<<0<<"\n";
        else if(d<e)
        cout<<((b[e-1])-(b[d-1]))<<"\n";
        else
        {
            cout<<(b[d]-b[e])<<"\n";
        }
        
    }

return 0;
}

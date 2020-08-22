//Dher Mithai mein keeya padela
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> veci;
typedef pair<int,int> pri;
typedef vector<long long> vecll;
typedef pair<long long,long long> prill;

#define REP(i,a,b) for (int i = a; i < b; i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k;
    cin>>n>>k;
    ll arr[n];
    REP(i,0,n)
    {
        cin>>arr[i];
    }
    
    for(int j=0;j<k;j++){
        ll mx=-1000000001;
        ll sum=0;
        int x1,x2;
        cin>>x1>>x2;
        arr[x1-1]=x2;
    for(int i=0;i<n;i++)
    {
        if(sum+arr[i]>=arr[i]){
            sum+=arr[i];
        }
        else sum=arr[i];
        mx=max(mx,sum);
    }
    cout<<mx<<"\n";
    }
    
}
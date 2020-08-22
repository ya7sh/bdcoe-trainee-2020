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

    int t;
    cin>>t;
    while(t--)
    {
        int n,k,p;
        cin>>n>>k>>p;
        int a[k];
        REP(i,0,k)
        {
            cin>>a[i];
        }
        int ne[n-k];
        for(int i=1,j=0,m=0;i<=n;i++)
        {
            if(i!=a[j]){
                ne[m++]=i;
            }
            else j++;
        }
        if(p>n-k)cout<<-1<<"\n";
        else 
        cout<<ne[p-1]<<"\n";
    }

}
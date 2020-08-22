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
        int n;
        cin>>n;
        int arr[n];
        REP(i,0,n)
        {
            cin>>arr[i];
        }
        int c=1;
        int prev=arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]>=prev)c++;
            prev=max(prev,arr[i]);
        }
        cout<<c<<"\n";
    }

}
#include<bits/stdc++.h>
typedef long long        ll;
#define pb               push_back
#define mp               make_pair
#define pii              pair<ll,ll>
#define mi               map<ll,ll>
#define mii              map<pii,ll>
#define F                first
#define S                second
#define mem(a,val)       memset(a,val,sizeof(a))
#define fr(i,x,n)        for(ll i=x;i<n;i++)
#define frr(i,x,n)       for(ll i=n-1;i>=x;i--)
#define randint(x,y)     uniform_int_distribution<int>(x, y)(rng)
#define                  Demon ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
const ll                 mod = 998244353;
const double             pi = 3.141592653589793238463;
 
using namespace std;  



void solve()
{
	int n;
	cin>>n;
	int a[n];
	fr(i,0,n)
		cin>>a[i];
	deque<int> q;
	fr(i,0,k)
	{
		if(a[i]>q.back())
		{
			while(a[i]>q.back()||q.empty())
				q.pop_back()
		}
		q.pb(a[i]);
	}	
	cout<<q.front()<<" ";
	fr(i,k,n)
	{
		if(a[i]==q.front())

	}
}

int main()
{
    Demon;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
//Owner - Nikhil Kumar Jain

//Find the maximum element for every contiguous subarray of size k


//Approach 1 - Simple O(n*k)
//Approach 2 - Use a self balancing BST
//			   O(n*logk)

// In this Approach we will use deque or doubly ended linked list 
// so that the maximum element will always be in front and we will add
// in the back the element which have the possiblity of being the maximum 
// element further.

// The time complexity of this method is nearly O(n)

#include<iostream>
#include<deque>
#include<vector>
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
	int n, k; // n = size of array, k = size of subarray
	cin >> n >> k;
	vector<int> a(n); 
	fr(i, 0, n)
		cin >> a[i];
	deque<int> q;
	// done this for the first k elements
	fr(i, 0, k)
	{
		if (q.empty())
		{
			q.pb(a[i]);
			continue;
		}
		else if (!q.empty() && a[i] > q.back())
		{
			while (!q.empty() && a[i] > q.back())
			{
				q.pop_back();
			}
		}
		q.pb(a[i]);
	}
	if (!q.empty())
		cout << q.front() << " ";
	// for the next k to n-1 elements
	fr(i, k, n)
	{
		if (q.empty())
		{
			q.pb(a[i]);
			continue;
		}
		else if (a[i - k] == q.front())
			q.pop_front();
		else if (!q.empty() && a[i] > q.back())
		{
			while (!q.empty() && a[i] > q.back())
			{
				q.pop_back();
			}
		}
		q.pb(a[i]);
		cout << q.front() << " ";
	}
	cout << endl;
}

int main()
{
	Demon;
	int t;   // total test cases
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
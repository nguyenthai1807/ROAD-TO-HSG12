/**
 *    author:  mr_secret
 *    created:    
**/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 
typedef vector<int> vi;
typedef vector<ll> vll;

#define db double
#define fl float
#define str string
#define endl '\n'
#define lb lower_bound
#define ub upper_bound 
#define pb push_back
#define TIME 1.0 * clock() / CLOCKS_PER_SEC
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define FORD(i,a,b) for(ll i=b;i>=a;i--)
#define PI M_PI

const ll N=1e6+5;
const ll MOD1=1e9 + 3, MOD2 = 1e9 + 7; 
const ll oo = 2e9;

ll n, a[N];
void read()
{
	cin>>n;
	for(int i = 0; i < n; i++) {
		cin>>a[i];
	}
}
void solve()
{
	int ma = 0;
	int res = 0;
	for(int i = 0; i < n; i++) {
		if(a[i] > ma) {
			ma = a[i];
			res = i;
		}
	}
	vi b;
	for(int i = 0; i < n; i++) {
		if(i != res) {
			b.pb(a[i]);
		}
	}
	int ma_2 = 0;
	for(int i = 0; i < b.size(); i++) {
		if(b[i] > ma_2) {
			ma_2 = b[i];
		}
	}
	int dem = 0;
	for(int i = 0; i < b.size(); i++) {
		if(ma == b[i]) {
			dem++;
		}
	}
	if(dem == 0) {
		for(int i = 0; i < n; i++) {
			if(a[i] != ma) {
				cout<<ma - a[i]<<" ";
			}
			else if(a[i] == ma) {
				cout<<ma_2 - ma<<" ";
			}
		}
	}
	else {
		for(int i = 0; i < n; i++) {
			if(a[i] != ma) {
				cout<<ma - a[i]<<" ";
			}
			else if(a[i] == ma) {
				cout<<ma - ma<<" ";
			}
		}
	}
	
}
int main()	
{
	ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
	#define task "CHENHLECH"
	if(fopen(task".inp","r")){
        freopen(task".inp","r",stdin);
        freopen(task".out","w",stdout);
    }

    int t = 1;
    while(t--) {
        read();
        solve();
    }

    return 0;
}
/* Duis */
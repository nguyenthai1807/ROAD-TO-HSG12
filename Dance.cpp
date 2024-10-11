// Wake up to code
/**
            /\_/\
          (   .__.)
        __|   >/  (_____
       /   |_           /
      /      (_________/
     /_______________ /
**/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define db double
#define fl float
#define int long long
#define str string
#define endl '\n'
#define pb push_back
#define fr(i,a,b) for(ll i=a;i<=b;i++)
#define frd(i,a,b) for(ll i=b;i>=a;i--)
#define frn(i,a,b) for (ll i=a;i<b;i++)
#define frdn(i,a,b) for(ll i=a;i>b;i++)
#define PI M_PI
#define agrimotor ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);

const ll N=1e6+6;
const ll MOD=1e9+7;

ll n,k;
ll h;
vector <ll> m,w;

/* ham sort lui

bool cmp(int x, int y)
{
    return(x>y);
}
*/

void time()
{
    cerr<< endl<<  "Time:" <<" " << 0.001*clock() << "s" << endl;
}
void doc()
{
	
	cin>>n>>k;
}
void solve()
{
	ll dem=0;
	fr(i,1,n)
	{
		cin>>h;
		if(h>0) m.pb(h);
		else w.pb(-h);
	}
	//sap xep cac phan tu trong vt men va vt women
	    sort(m.begin(), m.end());
	    sort(w.begin(), w.end());
	//Duyet qua tung chieu cao cua nam
	for(ll j:m)
	{
	    auto l=lower_bound(w.begin(), w.end(), j-k);
	    auto r=upper_bound(w.begin(), w.end(), j);
	
	    dem+=r-l;
	}
	
	cout<<dem<<endl;
	
}
signed main()
{
	//freopen("FanMU.inp","r",stdin);
	//freopen("FanMU.out","w",stdout);
	agrimotor
    doc();
    solve();
	time();
	return 0;
}

// When encountering bugs
/**
              _
             | |
             | |===( )   //////
             |_|   |||  | o o|
                    ||| ( c  )                  ____
                     ||| \= /                  ||   \_
                      ||||||                   ||     |
                      ||||||                ...||__/|-"
                      ||||||             __|________|__
                        |||             |______________|
                        |||             || ||      || ||
                        |||             || ||      || ||
------------------------|||-------------||-||------||-||-------
                        |__>            || ||      || ||
**/    

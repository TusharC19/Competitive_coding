#include <bits/stdc++.h>

using namespace std;

// #defines
#define PI (3.141592653589)
#define M 1000000007
#define pb push_back
#define f first
#define s second
#define rep(i,j) for(int i = 0; i<j; i++)
#define rrep(i,j) for(int i = j; i>=0; i--)
#define all(x) x.begin(), x.end()
#define out(x) cout << x << endl;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pm1 cout<<"-1"<<endl

//Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef map<int,int> mii;

// -------------------------------------------          Write your solution         -------------------------------------------------------------------------------//




void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    ll sum=0;
    ll mdiff=LLONG_MIN;

    for(ll i=1;i<n;i++) sum+=abs(a[i]-a[i-1]);
    
    // because index 0 and n-1 contribute only one time in diff sum
    mdiff = max(mdiff,abs(a[0]-a[1]));
    mdiff = max(mdiff,abs(a[n-1]-a[n-2]));

    for(ll i=1;i<n-1;i++){
        ll curr = abs(a[i]-a[i-1]) + abs(a[i+1]-a[i]);
        ll newc = abs(a[i+1]-a[i-1]);

        mdiff = max(mdiff,curr-newc);
    }

    ll ans = sum-mdiff;
    cout<<ans<<"\n";

}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
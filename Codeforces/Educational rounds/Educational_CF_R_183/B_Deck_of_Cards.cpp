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

void solve(){
    ll n,k; cin>>n>>k;
    string s;cin>>s;
    ll top = count(begin(s),end(s),'0');
    ll bottom = count(begin(s),end(s),'1');
    ll both = count(begin(s),end(s),'2');

    if(n==k){
        for(int i=0;i<n;i++) cout<<"-";
        cout<<"\n";
        return;
    }


    ll maxtop = top+both; ll maxbottom = bottom + both;

    for(ll i=1;i<=n;i++){
        if(i<=top || i>(n-bottom) || n==k) cout<<"-";
        else if(i<=maxtop || i>(n-maxbottom)) cout<<"?";
        else cout<<"+";
    }

    cout<<endl;

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
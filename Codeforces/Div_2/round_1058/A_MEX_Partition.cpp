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
    ll n;cin>>n;
    vector<int>a(n); rep(i,n) cin>>a[i];
  
    unordered_set<int>s(begin(a),end(a));
    a.clear();
    for(auto i:s) a.push_back(i);
    sort(begin(a),end(a));

    
    // for(int i:a) cout<<i<<" ";cout<<endl;
    bool flag=0;
    for(ll i=0;i<a.size();i++){
        if(i != a[i]) {
            cout<<i<<" ";
            flag = 1;
            cout<<endl;
            return;
        }
    }
    if(flag==0) cout<<a.size()<<endl;
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
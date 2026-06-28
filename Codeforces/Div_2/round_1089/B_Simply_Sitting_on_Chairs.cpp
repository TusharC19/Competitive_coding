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
    vl a(n);rep(i,n) cin>>a[i];
    vector<bool>mark(n,false);
    vl sit(n,0);

    ll mcnt=n/2+1;
    for(ll i=0;i<n;i++){
        if(!mark[i]){
            ll ind=a[i]-1;
            if(a[i]>mcnt || a[i]-1<=i){
                mark[ind]=true;
                sit[i]=1;
            }
        }
        else break;
        
    }

    ll cnt=0;
    for(ll i=0;i<n;i++){
        if(sit[i]==1) cnt++;
    }
    // cout<<"\n";

    cout<< cnt << endl;
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
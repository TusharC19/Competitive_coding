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
    ll x,y,z;
    cin>>x>>y>>z;

    ll a=0,b=0,c=0;
    for(int i=0;i<30;i++){
        if((x>>i)&1==1){
            a=a|(1<<i);
            b=b|(1<<i);
        }
        if((y>>i)&1==1){
            b|=(1<<i);
            c|=(1<<i);
        }
        if((z>>i)&1==1){
            a|=(1<<i);
            c|=(1<<i);
        }
    }

    // here creation of numbers takes place
    if((a&b)==x && (b&c)==y && (a&c)==z) cout << "YES"  << "\n";
    else cout << "NO"  << "\n";
    
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
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


bool isPalind(const int& n){
    string s=to_string(n);
    string t=s;
    reverse(s.begin(),s.end());
    return s==t;
}


void solve(){
    ll n;cin>>n;
    ll a=0,b=0;
    bool flag=false;
    for(ll a=0;a<=n;a++){
        ll b=n-a;
        if(isPalind(a) && b%12==0){
            flag=true;
            cout<<a<<" "<<b<<"\n";
            break;
        }
    }

    if(!flag) cout<<-1<<"\n";
    
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
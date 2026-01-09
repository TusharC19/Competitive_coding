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






/*

void solve(){
    ll n;string s;
    cin>>n>>s;

    ll a = count(s.begin(),s.end(),'a');
    ll b = count(s.begin(),s.end(),'b');
    ll d=abs(a-b);

    if(a==n || b==n){
        cout<<-1<<"\n";
        return;
    }
    if(a==b){
        cout<<0<<"\n";
        return;
    }

    ll index=-1,cnt=0;
    char target = (a>b) ? 'a' : 'b';

    for(ll i=0;i<n;i++){
        char ch = s[i];
        if(ch == target){
            if(cnt==0) index = i;
            cnt++;
            if(cnt == d){
                cout<<d<<"\n";
                // s.erase(s.begin()+index,s.begin()+index+d);
                // cout<<"string is: "<<s<<endl;
                return;
            }
            
        }
        else cnt=0;
    }
    // no such substring found
    cout<<-1<<endl;

}

*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18                                
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

void solve(){
    ll a,b,l1(0),l2(0);
    cin >> a>> b;
    vector<int> v1,v2;
    for(int i=1;i<=a;i++){
        if(i%2==0){
            
            v1.push_back(i);
            cout<< v1[i] <<" ";
        }else{
            v2.push_back(i);
        }
    }
}

int main()
{
        #ifndef ONLINE_JUDGE              
 freopen("input.txt","r",stdin);    
 freopen("output.txt","w",stdout); 
 #endif 
    fast_cin();
    // int tc;
    // cin >>tc;
    // while(tc-->0){
    // }
    solve();
    return 0;
}

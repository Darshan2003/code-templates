#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// template <class T> using oset = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;
// template <class T> using moset = tree<T, null_type,less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;
using namespace std;
#define ll             long long int
#define ulli           unsigned long long int
#define li             long int
#define ff(i,a,b)      for(int i=a;i<b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
#define w(t)           while(--t >= 0)
#define l(s)           s.length()
#define ci(n)          cin>>n;
#define fast           ios_base::sync_with_stdio(false);
#define sa(a,n)        sort(a,a+n)
#define sv(v)          sort(v.begin(),v.end())
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             cout<<"\n"
#define minus          cout<<"-1\n";
#define vi             vector<int>
#define vll            vector<long long>
#define vpi            vector<pair<int,int>>
#define vvi            vector<vector<int>>
#define vvll           vector<vector<ll>>
#define vvpi           vector<vector<pair<int,int>>>
#define pb             push_back
#define tc             int t; cin>>t;
#define pii            pair<int,int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define F0R(i, a)      for (int i=0; i<(a); i++)
#define FOR(i, a, b)   for (int i=a; i<(b); i++)
#define FORd(i,a,b)    for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a)      for (int i = (a)-1; i >= 0; i--)
#define cdiv(a, b)     (a+b-1)/b
int multiply(int a, int b, int M)
{
    return (a*1LL*b)%M;
}
int get_hash(string s)
{
    int ans = 0;
    int n = s.length();
    int p = 1;
    for (int i = 0; i < n; i++)
    {
        int temp = (p * (s[i] - 'a' + 1));
        ans += temp;
        p *= 3;
    }
    return ans;
}
void solve()
{
    string s;
    cin>>s;
    cout<<s<<"\n";
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--)
    {
      solve();
    }
    return 0;
}

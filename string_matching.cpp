#include <iostream>
#include <string>
#include <unordered_map>
#include <cmath>

using namespace std;

const int MOD = 1e9 + 7;
int get_hash(string s)
{
    int ans = 0;
    int n = s.length();
    int p = 1;
    for (int i = 0; i < n; i++)
    {
        int temp = (p * (s[i] - 'a' + 1));
        ans += temp;
        ans %= MOD;
        p *= 31;
        p %= MOD;
    }
    return ans;
}
 
int main()
{
    string inp;
    string pat;

    cin>>inp>>pat;
    int len = inp.length();
    int pat_size = pat.length();
    int occur = 0;

    int pat_hash = get_hash(pat);
 
    long long int prefix_hash[len];

    prefix_hash[0]=(inp[0]-'a'+1);
    int pow = 31;
    long long int p[len];
    p[0] = 1;
    for(int i=1;i<len;i++)
    {
        prefix_hash[i]= (prefix_hash[i-1] + ((inp[i]-'a'+1)*pow))%MOD;
        p[i] = pow;
        pow = (pow*31)%MOD;
    }
    long long int window;
    //searching for the pattern
    int start = 0, end = pat_size -1;
    while(end<len)
    {
        window = prefix_hash[end];
        if(start>0)
            window = (window - prefix_hash[start-1] + MOD)%MOD;
        
        if(window == (pat_hash*p[start])%MOD)
            occur++;
        start++;
        end++;
    }
    cout<<occur;

    return 0;
}

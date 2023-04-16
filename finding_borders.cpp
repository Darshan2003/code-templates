#include<iostream>
#include<string>
#include<vector>

using namespace std;

const int MOD = 1e9 + 7;

int main()
{
    string s;
    cin>>s;

    int len = s.length();

    long long int dp[len];
    long long int p[len];

    dp[0] = (s[0]-'a'+1);
    p[0] = 1;
    long long int pow = 31;

    for(int i=1;i<len;i++)
    {
        dp[i] = (dp[i-1] + ((s[i]-'a'+1)*pow))%MOD;
        p[i] = pow;
        pow = (pow*31)%MOD;
    }
    vector<int> v;

    for(int start=0,end=len-1;start<len-1;start++,end--)
    {
        if((dp[start]*p[end])%MOD==(dp[len-1]-dp[end-1]+MOD)%MOD)
            v.push_back(start+1);
    }

    for(auto e: v)
    {
        cout<<e<<" ";
    }

    return 0;
}
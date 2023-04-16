#include <bits/stdc++.h>

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
    cout << get_hash("bc");
    return 0;
}
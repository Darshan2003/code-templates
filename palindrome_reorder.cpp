#include <iostream>
#include <string>
#include <unordered_map>
#include <cmath>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length();

    unordered_map<char, int> freq;

    for (char c : s)
    {
        freq[c]++;
    }

    char odd = 0;
    int odd_count = 0;
    for (auto ele : freq)
    {
        if (ele.second % 2 != 0)
        {
            odd = ele.first;
            odd_count++;
            if (odd_count > 1)
            {
                cout << "NO SOLUTION";
                return 0;
            }
        }
    }

    char result[len + 1];
    result[len] = '\0';

    int point = 0;

    for (auto ele : freq)
    {
        if (ele.first != odd)
        {
            while (ele.second >= 2)
            {
                result[point] = ele.first;
                result[len - point - 1] = ele.first;
                point++;
                ele.second -= 2;
            }
        }
    }

    if (odd != 0)
    {
        while (point < ceil(len / 2.0))
        {
            result[point] = odd;
            result[len - point - 1] = odd;
            point++;
        }
    }

    cout << result;
    return 0;
}

// One Zero Swaps      Problem Code: SWAP10HG

// You are given two binary strings S and P, each with length N.
// A binary string contains only characters '0' and '1'.
// For each valid i, let's denote the i-th character of S by Si.

// You have to convert the string S into P using zero or more operations.
// In one operation, you should choose two indices i and j (1≤i<j≤N)
// such that Si is '1' and Sj is '0', and swap Si with Sj.

// Determine if it is possible to convert S into P by performing some operations.

// ------------------------------------------------------------------------------

// Input

// The first line of the input contains a single integer T denoting the number of
// test cases. The description of T test cases follows.
// The first line of each test case contains a single integer N.
// The second line contains a single string S.
// The third line contains a single string P.

// ------------------------------------------------------------------------------

// Output

// For each test case, print a single line containing the string "Yes" if it is0
// possible to convert S into P or "No" otherwise (without quotes).

// ------------------------------------------------------------------------------

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string s, p;
    int count0s, count0p, count1s, count1p, n;

    cin >> t;

    while (t--)
    {
        cin >> n;
        cin >> s;
        cin >> p;
        count0s = count0p = count1s = count1p = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                count0s++;

            if (s[i] == '1')
                count1s++;

            if (p[i] == '0')
                count0p++;

            if (p[i] == '1')
                count1p++;

            if (count1s < count1p)
            {
                break;
            }
        }

        if (count0s == count0p && count1s == count1p)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}

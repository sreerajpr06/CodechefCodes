// Sed Sequences Problem Code: SEDARR

// The special task force Sed managed to obtain a sequence of positive integers A1,A2,…,AN.

// You may perform the following operation any number of times (possibly zero):

// Choose any element of the current sequence and replace it by any positive integer.

// You need to make the sum of the elements of the sequence divisible by a given positive integer K.
// Find the minimum number of operations you need to perform to achieve this.

// ------------------------------------------------------------------------------------------------

// Input

// The first line of the input contains a single integer T denoting the number of test cases.
// The description of T test cases follows.
// The first line of each test case contains two space-separated integers N and K.
// The second line contains N space-separated integers A1,A2,…,AN.

// ------------------------------------------------------------------------------------------------

// Output

// For each test case, print a single line containing one integer ― the minimum required number of operations.

// ------------------------------------------------------------------------------------------------

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    int n, a, k;
    long long int sum;

    cin >> t;

    while (t--)
    {
        cin >> n >> k;
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            sum += a;
        }

        if (sum % k == 0)
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << 1 << '\n';
        }
    }

    return 0;
}

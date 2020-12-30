// Distinct Pairs Problem Code: DPAIRS

// Chef has two integer sequences A1,A2,…,AN and B1,B2,…,BM. You should choose N+M−1 pairs, each in the form (Ax,By),
// such that the sums Ax+By are all pairwise distinct.

// It is guaranteed that under the given constraints, a solution always exists. If there are multiple solutions, you may find any one.

// Input

// The first line of the input contains two space-separated integers N and M.
// The second line contains N space-separated integers A1,A2,…,AN.
// The third line contains M space-separated integers B1,B2,…,BM.

// Output

// Print N+M−1 lines. Each of these lines should contain two space-separated integers x and y
// denoting that you chose a pair (Ax+1,By+1).

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<pair<long long int, long long int>> a, b;
    int x, n, m;
    pair<long long int, long long int> p;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        p.first = x;
        p.second = i;
        a.push_back(p);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        p.first = x;
        p.second = i;
        b.push_back(p);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i, j, k;
    i = j = 0;
    k = 0;

    while (k != n + m - 1)
    {
        cout << a[i].second << " " << b[j].second << '\n';
        k++;

        if (j + 1 != m)
        {
            j++;
        }
        else
            i++;
    }

    return 0;
}

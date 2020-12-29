// Save Konoha     Problem Code: SAVKONO

// Pain is the leader of a secret organization whose goal is to destroy the leaf village(Konoha). After successive failures, the leader has himself appeared for the job. Naruto is the head of the village but he is not in a condition to fight so the future of the village depends on the soldiers who have sworn to obey Naruto till death.

// Naruto is a strong leader who loves his villagers more than anything but tactics is not his strong area. He is confused whether they should confront Pain or evacuate the villagers including the soldiers (he loves his villagers more than the village). Since you are his advisor and most trusted friend, Naruto wants you to take the decision.

// Pain has a strength of Z
// and is confident that he will succeed. Naruto has N soldiers under his command numbered 1 through N. Power of i-th soldier is denoted by Ai. When a soldier attacks pain, his strength gets reduced by the corresponding power of the soldier. However, every action has a reaction so the power of the soldier also gets halved i.e. Ai changes to [Ai/2]. Each soldier may attack any number of times (including 0). Pain is defeated if his strength is reduced to 0 or less.

// Find the minimum number of times the soldiers need to attack so that the village is saved.

// Input:

// First line will contain T, number of test cases. Then the test cases follow.
// The first line of each test case contains two space-separated integers N
// and Z.
// The second line contains N space-separated integers A1,A2,…,AN
// the attacking power of the soldiers.

// Output:

// For each test case, print a single line. If Pain cannot be defeated, this line should contain the string "Evacuate" (without quotes). Otherwise, it should contain the minimum number of times the soldiers need to attack.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int n;
    long long int z, p, count;
    priority_queue<int> a;

    while (t--)
    {
        while (!a.empty())
            a.pop();
        cin >> n >> z;
        count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> p;
            a.push(p);
        }

        while (!a.empty())
        {
            // cout << a[0] << " " << z << "\n";
            z -= a.top();
            count++;

            if (a.top() / 2 != 0)
            {
                a.push(a.top() / 2);
            }
            a.pop();

            if (z <= 0)
                break;
        }

        if (z <= 0)
            cout << count << '\n';
        else
            cout << "Evacuate\n";
    }

    return 0;
}

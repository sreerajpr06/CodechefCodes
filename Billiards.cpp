// Billiards           Problem Code: CDQU5

// BILLIARDS is a really interesting game. It is played on a green baize with 3 balls-red, white and yellow.
// Sheldon and Leonard are playing a game of billiards. Sheldon is playing the game for the first time and 
// is not familiar with the rules. So he asks Leonard to explain the rules to him. 
// Leonard explains the rules to Sheldon in the following way:

// “A Cannon shot gives 2 points and an In-Off Shot gives 3 points.”

// Sheldon is curious, and wants to figure out that given a score X, in how many ways can he get that score 
// by hitting a combination of Cannon and In-Off shots?

// Leonard is baffled when he is asked this question.

// Your task is to help Leonard in writing a program to compute the total number of ways one can score a total
//  of X points by hitting any combination of Cannon and In-Off shots. The order in which the shots are hit 
//  have importance.

// For example, 5 can be scored in two ways, by hitting an In-Off Shot followed by a Cannon shot or a Cannon Shot 
// followed by an In-Off shot. A score of 7 can be achieved in three ways – Cannon,In-Off,Cannon Cannon,Cannon,In-Off 
// and In-Off,Cannon,Cannon.

// Input
// The first line of input will contain an integer T which denotes the number of test cases. 1≤T≤2000

// The next T lines will each have a positive integer X, denoting the score which has to be achieved.

// Output
// For each test case, Output a single line containing the total number of ways one can score a score of X by hitting
// only Cannon and In-Off shots. Since the number can be very large, Output the answer MOD 1000000009 (109+9)

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    long long int x, N=1e9 + 9;
    vector<long long int> dp;
    dp.push_back(1);
    dp.push_back(0);
    dp.push_back(1);


    for(int i=3; i<10e6 + 1; i++){
        dp.push_back((dp[i-2] + dp[i-3]) % N);
    }


    while (t--)
    {
        cin >> x;
        cout<<dp[x]<<'\n';
    }

    return 0;
}
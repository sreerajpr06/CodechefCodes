/* 
Count K-Primes              Problem Code: KPRIME

Alice and Bob are studying for their class test together. The topic of the test is Prime Numbers. 
The preparation is getting too boring for their liking. To make it interesting, they turn it into a game. 
The winner will get an ice-cream treat from the other.

The game is called Count K-Primes. A number is a K-prime if it has exactly K distinct prime factors. 
The game is quite simple. Alice will give three numbers A, B & K to Bob. Bob needs to tell Alice the 
number of K-prime numbers between A & B (both inclusive). If Bob gives the correct answer, he gets a point. 
If not, Alice gets a point. They play this game T times.

Bob hasn't prepared so well. But he really wants to win the game. He wants you to tell him the correct answer.

Input
First line of input contains a single integer T, the number of times they play.
Each game is described in a single line containing the three numbers A,B & K.

Output
For each game, output on a separate line the number of K-primes between A & B.

 */


#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    const int N = 1e5;
    int a, b, k, count;
    
    bool dp[N + 1];
    int primeCount[N+1] = {0};
    fill_n(dp, N+1, true);
    dp[0] = dp[1] = 0;

    for(int i=2; i<N+1; i++){
        if(dp[i] == true){
            primeCount[i] = 1;
            for(int j=i*2; j<N+1; j += i){
                dp[j] = false;
                primeCount[j]++;
            }
        }
    }

    while (t--)
    {
        cin>>a>>b>>k;
        count = 0;
        for(int i=a; i<=b; i++){
            if(primeCount[i] == k){
                count++;
            }
        }

        cout<<count<<'\n';
    }

    return 0;
}
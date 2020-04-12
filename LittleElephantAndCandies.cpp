/*
A Little Elephant and his friends from the Zoo of Lviv like candies very much.

There are N elephants in the Zoo. The elephant with number K (1 ≤ K ≤ N) will be happy if he receives at least AK candies. There are C candies in all in the Zoo.

The Zoo staff is interested in knowing whether it is possible to make all the N elephants happy by giving each elephant at least as many candies as he wants, that is, the Kth elephant should receive at least AK candies. Each candy can be given to only one elephant. Print Yes if it is possible and No otherwise.

-------------------------------------------------------------------------
Input

The first line of the input file contains an integer T, the number of test cases. T test cases follow. Each test case consists of exactly 2 lines. The first line of each test case contains two space separated integers N and C, the total number of elephants and the total number of candies in the Zoo respectively. The second line contains N space separated integers A1, A2, ..., AN.

-------------------------------------------------------------------------
Output

For each test case output exactly one line containing the string Yes if it possible to make all elephants happy and the string No otherwise. Output is case sensitive. So do not print YES or yes. 
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	int numElephants,candyReq;
	long long int minCandy, totCandy;
	while(t--){	
		minCandy = 0;
		cin>>numElephants>>totCandy;
		for(int i=0;i<numElephants;i++){
			cin>>candyReq;
			minCandy += candyReq;
		}
		if(minCandy <= totCandy)
			cout<<"Yes\n";
		else 
			cout<<"No\n";
	}
	return 0;
}

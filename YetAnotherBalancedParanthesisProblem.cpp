/*
A balanced parenthesis string is defined as follows:

    The empty string is balanced
    If P is balanced, (P) is also
    If P and Q are balanced, PQ is also balanced

You are given two even integers n
and k. Find any balanced paranthesis string of length n that doesn't contain a balanced substring of length k
, or claim that no such string exists.

-------------------------------------------------------------------------------------------------------------------
Input

First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line containing n
and k

-------------------------------------------------------------------------------------------------------------------
Output

For every testcase, print on a new line, any balanced paranthesis string of length n
that doesn't contain a balanced substring of length k. If there doesn't exist any such string, print −1 instead.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;

	int n,k;
	while(t--){	
		cin>>n>>k;

		if(k==n || k==2 || k==4)
			cout<<"-1\n";
		else{
			int x = n / (k-2);
			int y = n % (k-2);
			if(y==2)
				cout<<'(';
			while(x--){
				for(int i = 0;i<(k-2)/2; i++)
					cout<<'(';
				for(int i = 0;i<(k-2)/2; i++)
					cout<<')';
			}
			if(y!=2){
				for(int i = 0;i<y/2; i++)
					cout<<'(';
				for(int i = 0;i<y/2; i++)
					cout<<')';
			}
			else 
				cout<<')';
			cout<<'\n';
		}
	}
	return 0;
}

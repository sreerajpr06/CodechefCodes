// Count Subarrays         Problem Code: SUBINC

// Given an array A1,A2,...,AN, count the number of subarrays of array A which are non-decreasing.
// A subarray A[i,j], where 1≤i≤j≤N is a sequence of integers Ai,Ai+1,...,Aj.

// A subarray A[i,j] is non-decreasing if Ai≤Ai+1≤Ai+2≤...≤Aj. You have to count the total number of such subarrays.

// Input
// The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows.

// The first line of each test case contains a single integer N denoting the size of array.

// The second line contains N space-separated integers A1, A2, …, AN denoting the elements of the array.

// Output
// For each test case, output in a single line the required answer.

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int n;
    long long int a, total;
    vector<long long int> arr;

    while(t--){
        cin>>n;
        arr.clear();
        total = 0;
        int dp[n];

        for(int i=0; i<n;i++){
            cin>>a;
            arr.push_back(a);
            dp[i] = 1;
        }

        for(int i=1; i<n; i++){
            if(arr[i] >= arr[i-1]){
                dp[i] += dp[i-1];
            }
        }

        for(auto x: dp){
            total += x;
        }
        cout<<total<<'\n';
    }

    return 0;
}
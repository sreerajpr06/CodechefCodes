/*
You are developing a smartphone app. You have a list of potential customers for your app. Each customer has a budget and will buy the app at your declared price if and only if the price is less than or equal to the customer's budget.

You want to fix a price so that the revenue you earn from the app is maximized. Find this maximum possible revenue.

For instance, suppose you have 4 potential customers and their budgets are 30, 20, 53 and 14. In this case, the maximum revenue you can get is 60.
-------------------------------------------
Input format

Line 1 : N, the total number of potential customers.

Lines 2 to N+1: Each line has the budget of a potential customer.
-------------------------------------------
Output format

The output consists of a single integer, the maximum possible revenue you can earn from selling your app.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	

    //n = number of potential customers
    //revenue = maximum possible revenue collected
    //price = maximum budget of each potential customers
	long long int n, revenue;
	vector<long long int> price;

	price.clear();
	revenue = 0;

	cin>>n;
	long long int a;
	for(long long int i=0;i<n;i++){
		cin>>a;
		price.push_back(a);
	}
	sort(price.begin(), price.end());

	for(long long int i=0; i<n; i++){
		if(revenue < price[i]*(n-i))
			revenue = price[i] * (n-i);
	}

	cout<<revenue;
	
	return 0;
}

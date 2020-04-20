/*
Most problems on CodeChef highlight chef's love for food and cooking but little is known about his love for racing sports. He is an avid Formula 1 fan. He went to watch this year's Indian Grand Prix at New Delhi. He noticed that one segment of the circuit was a long straight road. It was impossible for a car to overtake other cars on this segment. Therefore, a car had to lower down its speed if there was a slower car in front of it. While watching the race, Chef started to wonder how many cars were moving at their maximum speed.

Formally, you're given the maximum speed of N cars in the order they entered the long straight segment of the circuit. Each car prefers to move at its maximum speed. If that's not possible because of the front car being slow, it might have to lower its speed. It still moves at the fastest possible speed while avoiding any collisions. For the purpose of this problem, you can assume that the straight segment is infinitely long.

Count the number of cars which were moving at their maximum speed on the straight segment.
----------------------------------------------
Input

The first line of the input contains a single integer T denoting the number of test cases to follow. Description of each test case contains 2 lines. The first of these lines contain a single integer N, the number of cars. The second line contains N space separated integers, denoting the maximum speed of the cars in the order they entered the long straight segment.
----------------------------------------------
Output

For each test case, output a single line containing the number of cars which were moving at their maximum speed on the segment.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    //t - number of testcases
	int t;
	cin>>t;

    //n - number of cars
    //cur_max - maximum possible speed of the cars behind a car
    //max_speed - maximum speed of the car considered
    //count - number of cars going at their maximum speed
	int n;
	int cur_max, count, max_speed;

	while(t--){	
		cin>>n;
		count = 0;
		for(int i=0;i<n;i++){
			cin>>max_speed;
			if(i == 0){
				cur_max = max_speed;
				count++;
			}
			else if(max_speed <= cur_max){
				cur_max = max_speed;
				count++;
			}

		}

		cout<<count<<'\n';
	}
	return 0;
}

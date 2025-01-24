//Given a number X , find the N'th root of that number using binary search

// 9 ->root
// l/low=1 2 3 4 5 6 7 8 9 
//mid*mid = 5*5= 25 > 9 
// r/ high = mid  
// l/low=1 2 mid=3 4 r/high =5
//mid*mid = 3*3 = 9 , l = mid 
//l=3 mid=4 r=5
// r/high - l / low > 1

#include<bits/stdc++.h>
//n < 10^5
using namespace std;

#define int long long
//find root till 5th digit after decimal 
double accuracy = 1e-6 ;

double findpower( double mid , int power)
{
	double ans= 1;
	for(int i=0;i<power;i++)ans*=mid;
	return ans;
}

signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t; // T * logN 
	while(t--)
	{	
		double n;
		int root;
		cin>> n>>root;
		double low=1.0,high = n ,mid;
		while(high - low > accuracy )
		{
			mid= (low + high)/ 2.0;
			if( findpower(mid,root) < n )
			{
				low = mid;
			}
			else 
			{
				high = mid;
			}

		}
		cout<<setprecision(11)<<high <<endl;

	}
	return 0;
}


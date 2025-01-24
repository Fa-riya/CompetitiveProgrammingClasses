#include<bits/stdc++.h>

using namespace std;

#define int long long

//vector<int>cubes;
set<int> cubes;

/*bool search(int b_cube)
{
	int l=0; int r= cubes.size()-1 ;
	while(r - l > 1)
	{
		int mid= (l+r)/2;
		if(cubes[mid] < b_cube)
		{
			l = mid+1;
		}
		else 
		{
			r = mid;
		}
	}
	if( cubed[l]==b_cube)return true;
	else if (cubes[r]== b_cube)return true;
	else return false;
}*/
signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;

	for(int i=1;i<1e4 ; i++)
	{
		cubes.insert(i*i*i);
	}

	while(t--)
	{	
		int x;
		cin>>x ;
		// a and b both will be less than 3rd root of x
		//10^12 == a , b < 10^4 
		// time = 10^4 * log(searchset);
		// a^3 + b^3 =x => x - a^3 = b^3
		int flag=0;
		for(int i=1; i*i*i < x ;i++)
		{
			if( cubes.count(x-(i*i*i)))
			{
				cout>>"YES"<<endl;
				flag++;
				break;
			}

		}
		if(!flag)cout<<"NO"<<endl;


	}
	return 0;
		}
}


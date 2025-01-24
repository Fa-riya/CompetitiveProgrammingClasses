#include<bits/stdc++.h>

using namespace std;

#define int long long
int C;
vector<int> stalls;
bool okay( int dist)
{
	int lastcowplaced = -10;
	int cows_remaining = C;
	for ( int i=0;i < stalls.size() ; i++ )
	{
		if( (stalls[i] - lastcowplaced >= dist) || lastcowplaced < 0)
		{
			lastcowplaced= stalls[i];
			cows_remaining--;
			//cout<<cows_remaining<<" ";
		}
		if(cows_remaining==0)break;

	}
	if(cows_remaining==0)return true;
	else return false;

}

signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N>>C;
		stalls.clear();
		for(int i=0;i<N;i++)
		{
			int x;
			cin>>x;
			stalls.push_back(x);
		}

		sort(stalls.begin(),stalls.end());
		//for(auto s : stalls)cout<<s<<" ";
		//	cout<<endl;
		int l=0, r = 1e9,mid;
		while(r - l > 1)
		{
			mid = (l + r) / 2;
			//cout<<mid<<endl;
			if( okay( mid ))
			{
				l = mid;
			}
			else 
			{
				r = mid - 1 ;
			}
		}
		if(okay(r))cout<<r<<endl;
		else cout<<l<<endl;
	}
	return 0;
	// 1 2 3 4 5 6 7 8 
	// T T T F F F F F
	
}


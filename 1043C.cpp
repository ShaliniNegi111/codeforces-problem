/**
 God is  not finished yet ! your blessings , your healings and
 you miracle is comming !

 JUST DONT'T GIVE UP !!
 **/
#include "bits/stdc++.h"
using namespace std;
typedef long long ll ;
#define timesaver ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
string s ;
ll n ;
int main() {
	timesaver ;
	cin>> s ;
	n = strlen(s.c_str()) ;
	for ( ll i = 0 ; i < n - 1  ; i ++ )
	{
		if ( s [ i ] != s [ i + 1 ] )
		{
			cout << 1 << " " ;
		          reverse(s.begin(), s.begin() + i + 1 );
		}
		else   cout << 0 << " " ;
	}
	if ( s [ n -1 ] == 'a' )
	{
		 reverse( s.begin(), s.end() );
		 cout << 1 << " " ;
	}
	else cout << 0 << " " ;

	return 0;
}

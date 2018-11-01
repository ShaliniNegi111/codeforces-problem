/**
 God is  not finished yet ! your blessings , your healings and
 you miracle is comming !

 JUST DONT'T GIVE UP !!
 **/
#include "bits/stdc++.h"
using namespace std;
typedef long long ll ;
#define timesaver ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll n , a [101] , d , diff ( INT_MIN ) , ans (INT_MAX );
int main() {
	cin >> n ;
	cin >> a [ 0 ] ;
	for ( ll i = 1 ; i < n ;  i ++ )
	{

		cin >> a [ i ] ;
		if ( (a [ i ] - a[ i - 1 ] ) > diff )
			diff = a [ i ] - a [ i - 1 ] ;
	}

	for ( ll i = 1 ; i < n - 1 ; i ++ )
	{
		d = a [ i +  1 ] - a [ i - 1 ];
		if ( d < diff ) d= diff ;
		if (  d <= ans )
			ans = d ;

	}
	cout << ans  ;
	return 0;
}

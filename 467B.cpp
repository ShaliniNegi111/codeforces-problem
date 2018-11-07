/**
 God is  not finished yet ! your blessings , your healings and
 you miracle is comming !

 JUST DONT'T GIVE UP !!
 **/
#include "bits/stdc++.h"
using namespace std;
typedef long long ll ;
#define timesaver ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll n , m , k , fp , c , ans , arr [ 1001 ];
int main() {
	cin >> n >> m >> k ;
	for ( ll i = 0 ; i < m ; i ++ )
		cin >> arr [ i ] ;
	cin >> fp ;
	for ( ll i = 0 ; i < m ; i ++ )
	{
		c = 0 ;
		for ( ll j = 0 ; j < n ; j ++ )
			if ( ( fp & ( 1 << j ) ) != (arr[ i ] & ( 1 << j ))  )
				c++ ;
		if ( c <= k ) ans ++ ;
	}
	cout << ans ;
	return 0;
}

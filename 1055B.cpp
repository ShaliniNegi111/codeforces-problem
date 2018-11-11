#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
ll arr [ 1000001 ] , n , m , l , ans ;

int main() {
	cin >> n >> m >> l ;
	for ( ll i = 1 ; i <= n ; i ++ )
	{
		cin >> arr [ i ] ;
		if( arr [ i ] > l and arr [ i - 1 ] <= l )
			ans ++ ;
	}
	while ( m -- )
	{
		ll q ;
		cin >> q ;
		if ( !q ) cout << ans  << endl ;
		else
		{

			ll p , x ;
			cin >> p >> x ;
			if ( arr [ p ] > l ) continue ;
			arr [ p ] += x ;
			if ( arr [ p ] <= l ) continue ;
			if ( arr [ p - 1 ] > l and arr [ p + 1 ] > l  ) ans --;
			else if ( arr [ p - 1 ] <= l and arr [ p + 1 ] <= l ) ans ++ ;
		}
	}
	return 0;
}

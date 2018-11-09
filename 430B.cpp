#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
ll n , k , x ,ans (INT_MIN ), arr [ 101 ] , c (1) , p , q ;
vector< pair < ll , ll > > v ;
int main() {

	cin >> n >> k >> x ;
	for ( ll i = 0 ; i < n ; i ++ )
		cin >> arr [ i ] ;
	for ( ll i = 0 ; i < n - 1  ; i ++ )
	{

		if ( arr [ i ] == arr [ i + 1 ] )
			c ++ ;
		else
		{
			v.push_back ( { arr [ i  ] , c } ) ;
			c = 1 ;
		}

	}
	v.push_back ( { arr [ n - 1 ] , c } ) ;
	if ( v [ 0 ].first == x and v [ 0 ].second == 2 ) ans = 2 ;
	for ( ll i = 1 ; i < v.size() - 1 ; i ++ )
	{
		if ( v [ i ].first == x and v [ i ].second == 2  )
		{
			c = 2 , p = i - 1 , q = i + 1 ;
		    while ( v [ p ].first == v [ q ].first and v [ p ].second + v [ q ].second >= 3 and p >=0 and q < n )
		    {
		    	c += ( v [ p ].second + v [ q ].second) ;
		    	p -- , q ++ ;
		    }
		    ans = max ( ans , c ) ;
		}

	}
	if ( v [ 0 ].first == x and v [ 0 ].second == 2 ) ans = max ( ans , ll(2) ) ;
	cout << max ( ans ,ll (0) )  ;
	return 0;
}

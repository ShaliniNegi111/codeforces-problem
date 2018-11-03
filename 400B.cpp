/**
 God is  not finished yet ! your blessings , your healings and
 you miracle is comming !

 JUST DONT'T GIVE UP !!
 **/
#include "bits/stdc++.h"
using namespace std;
typedef long long ll ;
#define timesaver ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll n , m , g , s , d , ans , z ;
string S ;
pair < ll , ll > p ;
vector < pair < ll , pair < ll , ll >  >  > v ;
int main() {
	timesaver ;
	cin >> n >> m ;
	for ( ll i = 0 ; i < n ; i ++ )
	{
		cin >> S ;
		for ( ll j = 0 ; j < m ;j ++ )
		{
			if ( S [ j ] == 'G' )
				g = j ;
			if (  S [ j ] == 'S' )
				s = j ;
		}
		if (  g == s )	z ++ ;
		if ( s  < g )
			return cout << -1 , 0 ;
		p .first = g , p.second = s ;
		d = s - g ;
		v.push_back( { d , p } ) ;
	}
	if ( z == n ) return cout << 0 , 0 ;
	sort ( v.begin() , v.end() ) ;
	for ( ll i = 0 ; i < n ; i ++ )
	{

		if ( v [ i ].second .first  != v [ i ].second .second)
		{
			d = v [ i ].first;
			ans ++ ;
			for( ll j = i  ; j < n ; j ++ )
			{
				v [ j ].second .first += d ;
		v [ j ].first = v [j ].second .second - v [ j ].second .first ;
			}
		}
	}
	cout << ans ;
	return 0;
}

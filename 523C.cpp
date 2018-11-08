/**
 God is  not finished yet ! your blessings , your healings and
 you miracle is comming !

 JUST DONT'T GIVE UP !!
 // i_m_cool
 // nilisha_neig
 // shalini_negi
 **/
#include "bits/stdc++.h"
using namespace std;
typedef long long ll ;
#define timesaver ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
string s , t ;
ll j ,  n , ans , r , l, i , m ;
int main() {
	cin >> s >> t ;
	n = s.length() , m = t.length() ;
	if ( s == t or n > m ) return cout << 0 , 0;
	for ( i = 0 ; i < m and j < n ; i ++ )
	{
		if ( t [ i ] == s [ j ] )
			j ++ ;

	}
	r = -- i ;
	j = n - 1 ;
	for ( i = m - 1  ; i >= 0 and j >= 0; i -- )
	{
		if ( t [ i ] == s [ j ] )
			j -- ;

	}
	l = ++ i ;
	cout << max ( ll (0) , l - r ) ;
	return 0;
}

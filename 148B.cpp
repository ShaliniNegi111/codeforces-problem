
/**
 God is  not finished yet ! your blessings , your healings and
 you miracle is comming !

 JUST DONT'T GIVE UP !!
 **/
#include <bits/stdc++.h>
using namespace std;
#define timesaver ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
double vp , vd , t , f ,c, dist ,dis_travl , cat_time  ;
int ans ;
int main() {
	 timesaver ;
	cin >> vp >> vd >> t >> f >>c ;
	if ( vp > vd ) return cout << 0 , 0 ;
	dis_travl = vp * t ;
	while ( dis_travl< c )
	{
	      cat_time = 	dis_travl / ( vd - vp ) ;
	      dist = vp *cat_time + dis_travl ;
	      if ( dist >= c ) break;
	      dis_travl  = dist + vp *cat_time + vp * f ;
	      ans ++ ;
	}
	cout << ans ;
	return 0;
}

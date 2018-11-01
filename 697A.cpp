/**
 God is  not finished yet ! your blessings , your healings and
 you miracle is comming !

 JUST DONT'T GIVE UP !!
 **/
#include "bits/stdc++.h"
using namespace std;
typedef long long ll ;
#define timesaver ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll t  , x , x1 , x2  ;
ll s ;
int main() {
	cin >> t >> s >> x ;
	if ( t > x ) return cout << "NO" , 0 ;
	if ( (x - t) % s == 0   )
		return cout << "YES" , 0 ;
	if ( (x - t  - 1 ) % s == 0   and (x-1) != t )
		return cout << "YES" , 0 ;
	cout << "NO" ;

	return 0;
}

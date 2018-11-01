/**
 God is  not finished yet ! your blessings , your healings and
 you miracle is comming !

 JUST DONT'T GIVE UP !!
 **/
#include "bits/stdc++.h"
using namespace std;
typedef long long ll ;
#define timesaver ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll n , * a , sum1  , maxi ( INT_MIN ) , sum2 ;
int main() {
	timesaver ;
	cin  >> n ;
         a = ( ll * ) malloc ( n * sizeof ( ll )) ;
         for ( ll i =0 ; i < n ; i ++ )
         {
         	cin >> a[ i ] ;
         	sum1 += a [i ] ;
         	if ( a [ i ] > maxi ) maxi = a [ i ] ;
         }
         for ( ll i = 0 ; i < n ; i ++ )
         	sum2 += ( maxi - a [ i ] ) ;
         if ( sum2 > sum1 ) return cout << maxi , 0 ;
         sum2 = 0 ;
         for ( ll i = maxi +1 ;  ; i ++ )
         {
         	 sum2 = 0 ;
         	  for ( ll j = 0 ; j < n ; j ++ )
         		sum2 += ( i - a [ j ] ) ;
         	if ( sum2 > sum1 )
         		return cout << i, 0;
         }
	return 0;
}

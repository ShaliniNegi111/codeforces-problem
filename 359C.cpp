/**
 God is  not finished yet ! your blessings , your healings and
 you miracle is comming !

 JUST DONT'T GIVE UP !!
 **/
#include "bits/stdc++.h"
using namespace std;
typedef long long ll ;
#define timesaver ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll n , x , arr [ 100001 ] , sum , MOD ( 1000000007);
map < ll , ll > mp ;
ll power(ll x, ll y){
    x %= MOD;
    ll ans = 1;
    while(y){
        if(y & 1)
            ans = (ans * x) % MOD;
        y >>= 1LL;
        x = (x * x) % MOD;
    }
    return ans;
}

int main() {
	cin >> n >> x ;
	for( ll i = 0 ; i < n ; i ++ )
	{
		cin >> arr [ i ] ;
		sum += arr [ i ] ;
	}
	for ( ll i = 0 ; i < n ; i ++ )
		mp [ sum - arr [ i ]  ] ++ ;

	for ( auto it : mp )
	{

		if ( it.second % x !=0 )
			return cout << power ( x , min (it.first , sum ) ) , 0 ;
		else
			mp [ it.first + 1 ] += it.second / x ;
	}
	return 0;
}

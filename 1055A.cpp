#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
ll n , s , arr1 [ 1001 ] , arr2 [ 1001 ] , flag ;
int main() {
	cin >> n >> s ;
	for ( ll i = 1 ; i <= n ; i ++ )
		cin >> arr1 [ i ] ;
	for ( ll i = 1 ; i <= n ; i ++ )
		cin >> arr2 [ i ] ;
	if ( arr1 [ 1 ] == 0 ) return cout <<"NO" , 0 ;
	if ( arr1 [ s ] == 1 ) return cout <<"YES" , 0;
	for ( ll i = s + 1 ; i <= n ; i ++ )
	{
		if ( arr1 [ i ] == arr2 [ i ] and arr1 [ i ] == 1 )
		{
			flag = 1 ;
			break ;
		}
	}
	if ( !flag ) return cout << "NO" , 0 ;
	if ( arr2 [ s ] == 1 ) return cout <<"YES" , 0 ;
	else cout <<"NO" ;
	return 0;
}

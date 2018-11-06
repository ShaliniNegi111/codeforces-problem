/**
 God is  not finished yet ! your blessings , your healings and
 you miracle is comming !

 JUST DONT'T GIVE UP !!
 **/
#include "bits/stdc++.h"
using namespace std;
typedef long long ll ;
#define timesaver ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll n , s , e ;
string  S ;
int main() {
	cin  >> n >> s  >> e >> S ;
	s-- , e-- ;
	if ( S [ s ] == S[ e ] ) return cout << 0 , 0 ;
	cout << 1 ;
	return 0;
}

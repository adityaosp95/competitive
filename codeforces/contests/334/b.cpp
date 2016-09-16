#include <iostream>
using namespace std;

int maxi( int a , int b)
{
	if ( a > b )
		return a;
	else
		return b;
}

int main() {
	
	int n, k;
	cin >> n;
	cin >> k;
	
	int s[n];
	for ( int i = 0; i < n; i++ )
	{
	    cin >> s[i];
	}
	
	int cut = (k - n/2);
	int end = n - cut;
	int maxa = 0, maxb = 0;
	
	for ( int i = 0; i < end; i++ )
	{
	    /*if ( i == (end-i-1) )
	        if ( s[i] > maxa )*/
	            maxa = s[i];
	    if ( s[i] + s[end - i - 1] > maxa )
	        maxa = s[i] + s[end - i - 1];
	}
	
	for ( int i = end; i < n; i++ )
	{
	    if ( s[i] > maxb )
	        maxb = s[i];
	}
	
	cout << max(maxa, maxb);
	return 0;
}

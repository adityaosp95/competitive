#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for ( int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int l = 0, r = 0;
	int maxrang = 0, currrang = 0, len = 0, maxlen = 0, currmax = a[0], currmin = a[0];
	while ( l < n-1 && r < n)
	{
		if ( currrang <= 1)
		{
			r++;
		}
		else
		{
			l++;
		}
		if ( a[r] > currmax)
			currmax = a[r];
		if ( a[r] < currmin)
			currmin = a[r];
		if ( a[l] > currmax)
			currmax = a[l];
		if ( a[l] < currmin)
			currmin = a[l];
		len = l - r;
		if ( len > maxlen)
		{
			maxlen = len;
		}
		currrang = currmax - currmin;
		cout << "l: " << l << " r: " << r << " maxlen: " << maxlen << " currmax: " << currmax << " currmin: " << currmin << endl;
	}
	cout << maxlen + 1;
	return 0;
}

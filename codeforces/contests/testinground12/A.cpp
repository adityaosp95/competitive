#include <iostream>
using namespace std;

int main() {
	
	long long int a, b, k;
	cin >> k >> a >> b;
	long long int temp = a;
	while( temp%k != 0)
	{
		temp++;
	}
	//cout << temp << endl;
	long long int count = 0, i = 0;
	long long int temp2 = temp;
	while( 1 )
	{
		
		if ( temp2 <= b)
			count++;
		else
			break;
	    temp2 += k;
	}
	cout << count;
	return 0;
}

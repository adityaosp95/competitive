#include <iostream>
using namespace std;

int main() {
	long long int a, b, c;
	cin >> a >> b >> c;
	long long int arr[4] = {a+b+c, 2*(a+b), 2*(a+c), 2*(b+c)};
	long long int mini = 10000000;
	for ( int i = 0; i < 4; i++)
	{
	    if ( arr[i] < mini )
	        mini = arr[i];
	}
	cout << mini;

	return 0;
}

#include <iostream>
#include <string.h>
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;


int main()
{
    string s;
    cin >> s;
    
    int n, l, r, k;
    
    cin >> n;
    while ( n-- )
    {
        cin >> l >> r >> k;
        int rot =  k % ((r-l) + 1);
        //cout << rot << endl;
        reverse(s.begin()+l-1, s.begin()+r-rot);
        reverse(s.begin()+r-rot, s.begin()+r);
        reverse(s.begin()+l-1, s.begin()+r);
    }
    
    cout << s;
    return 0;
}

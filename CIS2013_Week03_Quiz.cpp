#include <iostream>
#include <string>
using namespace std;

int main()
    {
    int bottles = 99;
	
    while ( bottles > 0 )
        {
        cout << bottles << " bottle(s) of beer on the wall," << endl;
        cout << bottles << " bottle(s) of beer." << endl;
        cout << "Take one down, pass it around," << endl;
        cout << --bottles << " bottle(s) of beer on the wall." << endl;
        }
		if (bottles == 0)
		{
			cout<< "No more bottles of beer on the wall" << endl;
		}
    return 0;
    }
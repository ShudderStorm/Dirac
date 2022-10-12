#include <iostream>
using namespace std;
int main() 
{
	int k = 1;
	int i = 2;
	do {
		int t = (i - 1) % 3;
		if (t != 0) {
			i++;
		}
		else {
			int l = ((2 * i / 3) - 1) % 3;
			if (l != 0) {
				i++;
			}
			else {
				int z = (2 * i / 3) - 1;
				k = ((2 * z / 3) - 1) % 3;
				if (k == 0) {
					cout << i;
				}
				else {
					i++;
				}
			}
		}
	} while (k != 0);
	return 0;
}



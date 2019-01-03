#include <iostream>
#include <string>

using namespace std;

int main() {
	string strT("ababcdabbabababad");
	string strP("abababa");
	int sizeT = strT.size();
	int sizeP = strP.size();
	cout << sizeT << " " << sizeP << endl;
	int T = 0, P = 0;
	while ((T <= (sizeT - sizeP)) && (P < sizeP)) {
		P = 0;
		while (P < sizeP) {
			if ((strT.at(T + P) == strP.at(P)) && (P <= (sizeP - 1))) {
				if (P == (sizeP - 1)) {
					cout << (T + P) - sizeP + 1 << (T + P) << endl;
					P++;
				}
				else
					P++;
			}
			else {
				T++;
				break;
			}

		}
	}
	





	getchar();
	return 0;
}

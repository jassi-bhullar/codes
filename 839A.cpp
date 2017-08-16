#include <iostream>
using namespace std;

int main() {
	int n,k;
	cin >> n >> k;
	int a;
	int arya, bran, tmp;
	
	arya = bran = tmp = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		arya += a;

		if(arya > 8) tmp = 8;
		else tmp = arya;

		arya -= tmp;
		bran += tmp;

		if(bran >= k){
			cout << i+1;
			return 0;
		}
	}

	cout << -1;
	

	return 0;
}
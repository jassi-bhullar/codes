#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string str;

	cin >> n;
	string ans;

	while(n--){
		cin >> str;
		ans = str;

		int len = str.length();
		if(len > 10){
			char b = str[0];
			char e = str[len-1];
			ans = b + std::to_string(len-2) + e;
		}
		cout << ans << endl;
	}

	return 0;
}
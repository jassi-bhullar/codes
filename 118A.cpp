#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;

	int len = s.length();
	string w="";

	int t=len;
	int i=0;
	while(t--){
		char c = s[i];
		i++;
		c = tolower(c);
		if(c=='a' || c=='y' || c=='u' || c=='o' || c=='i' || c=='e') continue;

		w += ".";
		w += c;
		
	}

	cout << w;
// silent
	return 0;
}
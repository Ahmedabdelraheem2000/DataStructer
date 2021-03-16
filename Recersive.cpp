#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{	
	string str;
	cin >> str;
	sort(str.begin(), str.end());
	int xx = str.size(),c=0,d;
	d = str.size();
	string b = str;
	cout << str << endl;
	while (d!=0) {
		for (int x = xx - 1; x > 1; x--) {
			string a;
			swap(str[x - 1], str[x]);
			if (str == b)break;
			else cout << str << endl;
		}
		if (str == b) {
			swap(str[0], str[c+1]);
			b = str;
			c++;
			d--;
			if (d == 0)break;
			cout << str<<endl;
		}	
	}
}
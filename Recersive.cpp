#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
using namespace std;
string b, a;  int c=0; 

void prem(string str) {
	int s = 0; int z = 0;
	if (z <str.size()) {
		
		for (int x = str.size()-1; x > 1; x--) {
			swap(str[x], str[x - 1]);
			if (str == b)break;
			cout << str << endl;
		}
	}
		if (str == b) {
			swap(b[0], b[c + 1]);
			c++;
			z++;
			str = b;
			if (c == str.size())return;
			cout << str << endl;
		}
		
		return prem(str);
}

int main()
{
	 cin>>a ;
	b = a;
	prem(a);
}

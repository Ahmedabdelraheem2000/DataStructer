#include<iostream>
#include<queue>
using namespace std;
class Hash {
private:int val;
public:
	queue<int>* q1;
	Hash(int a) {
		val = a;
		q1 = new queue<int> [val];
	}
	void addhash(int v) {
		int n = v % val;
		q1[n].push(v);
	}
	void display() {
		for (int x = 0; x < val; x++) {
			cout << x << "-> ";
			while (!q1[x].empty()) {
				cout << q1[x].front()<<" ";
				q1[x].pop();
			}
			cout << endl;
		}
	}
};
int main() {
	
	int a[5] = { 6,7,3,4,10 };
	Hash h1(5);
	for (int x = 0; x < 5; x++) {
		h1.addhash(a[x]);
	}
	h1.display();
}
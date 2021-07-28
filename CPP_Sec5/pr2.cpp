#include<iostream>
using namespace std;

/*
Write a program that reads 2 integers A, B
- B is either -1 or 1
- If -1, print 2*A+1
- If 1, print A*A
Hint
You need to think in a simple 1 line formula for the output
*/

int main() {

	int a,b;
	cin>> a >>b;

	int eq_is_neg_1 = 2*a + 1;
	int eq_is_1 = a * a;

	//0 for -1 and 1 for 1
	int is_1 = (b+1)/2;
	int is_neg_1 = 1 - is_1;

	cout<< is_1*eq_is_1 + is_neg_1*eq_is_neg_1;
	return 0;
}

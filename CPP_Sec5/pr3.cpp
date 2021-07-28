#include<iostream>
using namespace std;

/*
Write a program that reads integer N and Print the sum from 1 to N
E.g. If input N = 5, then Output is: 15
Why? As 1+2+3+4+5 = 15
Below table of more values
3 --> 6 (1+2+3)
4 --> 10 (1+2+3+4)
5 --> 15 (1+2+3+4+5)
You need to find a simple 1 line formula to solve the problem
Hint: Let N = 8. Write numbers from 1 to 8
What is the sum of 1st and 8th number? sum of 2nd and 7th? And so on
Your formula should be good for even and odd N. Be careful programmer!
What is the maximum N after it overflow occurs? Recall int max is 2147483647
 */

int main() {

	int n,pair_result,pairs_no,middle_element,if_odd,formula;
	cin>> n;

	pair_result = 1+n;
	pairs_no = n/2;
	middle_element = pair_result/2;

	//0 if even number, 1 if odd number
	if_odd = n%2;

	formula = (pairs_no * pair_result)+(middle_element*if_odd);

	cout<<formula<<"\n";
	return 0;

	// Another intelligent solution: cout<<n*(n+1)/2<<"\n";
}

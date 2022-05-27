/*By::Cebastian Santiago
* Climbing Stars Leetcode 70
*/
#include<iostream>

int climbStairs(int n) {
	int two = 1;
	int one = 1;
	int temp = 0;


	for (int i = n-1; i > 0; i--){
		temp = one;
		one = one + two;
		two = temp;

	}

	return one;
}



int main(int argc, char argv[]) {
	std::cout << climbStairs(4);
}
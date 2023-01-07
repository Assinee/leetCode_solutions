//Palindrome numbers that read the same as backward as forward
#include<iostream>
using namespace std;
//int sizeNumber(int n) {	
//	if (n == 0) {
//		return 1;
//	} else {  
//		int i = 0;
//		while (i < n && n / int(pow(10, i))>0) {
//			i = i + 1;
//		}
//		return i;
//	}	
//}
bool isPalindrom(int n) {
	int rev = 0;
	int num,digit(0);
	num = n;
	do {
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;
	} while (num != 0);
	if (rev == n) {
		return true;
	}
	else { 
		return false;
	}
}
int main() {
	cout<< isPalindrom(363);
}
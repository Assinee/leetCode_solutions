#include<bits/stdc++.h>
using namespace std;
int main() {
	int x;
	cin >> x;
	int rev = 0;
	int num, chif(0);
	num = x;
	do {
		chif = num % 10;
		rev = (rev * 10) + chif;
		num = num / 10;
	} while (num != 0);
	if (rev<pow(-2,31) || rev > pow(2,31)-1) {
		cout<<0;
	}
	else {
		cout<< rev;
	}
	
}

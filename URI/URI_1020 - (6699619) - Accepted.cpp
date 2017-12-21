#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, yr, month, day;
	cin>>n;
	yr= n/365;
	n%=365;
	month= n/30;
	day=n%30;
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",yr, month, day);
}
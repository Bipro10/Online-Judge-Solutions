#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, hr, mn, sec;
	cin>>n;
	hr= n/3600;
	n%=3600;
	mn= n/60;
	sec= n%60;
	printf("%d:%d:%d\n",hr,mn,sec);
}
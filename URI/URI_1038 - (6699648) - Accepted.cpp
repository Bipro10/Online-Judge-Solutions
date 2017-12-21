#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y;
	float ans;
	cin>>x>>y;
	switch(x){
	    case 1: ans= 4.0*y;break;
	    case 2: ans= 4.5*y;break;
	    case 3: ans= 5.0*y;break;
	    case 4: ans= 2.0*y;break;
	    case 5: ans= 1.5*y;break;
	}
	printf("Total: R$ %.2f\n",ans);
}
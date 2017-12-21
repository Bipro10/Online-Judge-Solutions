#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159
int main() {
	float a, b, c, ans;
	cin>>a>>b>>c;
	printf("TRIANGULO: %.3f\n",a*c*.5);
	printf("CIRCULO: %.3f\n",PI*c*c);
	printf("TRAPEZIO: %.3f\n",(a+b)*c*.5);
	printf("QUADRADO: %.3f\n",b*b);
	printf("RETANGULO: %.3f\n",a*b);
	return 0;
}
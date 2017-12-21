#include <bits/stdc++.h>
using namespace std;

int main(){
    int code, unit;
    float cost, sum=0;
    cin>>code>>unit>>cost;
    sum= unit*cost;
    cin>>code>>unit>>cost;
    sum+= unit*cost;
    printf("VALOR A PAGAR: R$ %.2f\n",sum);
    return 0;
}
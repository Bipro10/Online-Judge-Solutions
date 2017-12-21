#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    float salary, bonus;
    cin>>s>>salary>>bonus;
    printf("TOTAL = R$ %.2f\n",salary+bonus*.15);
    return 0;
}
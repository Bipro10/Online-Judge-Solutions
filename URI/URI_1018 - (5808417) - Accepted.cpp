#include<bits/stdc++.h>
using namespace std;

int main(){
    int total_taka, num_note, remain_taka;
    cin>>total_taka;
    cout<<total_taka<<"\n";
    int i=100;
    while(i>0){
        num_note = total_taka /i;
        cout<<num_note<<" nota(s) de R$ "<<i<<",00\n";
        total_taka = total_taka % i;
        (float) i/20>=1? i=(i/20)*10 : i=((float)i/20)*10;
    }
    return 0;
}

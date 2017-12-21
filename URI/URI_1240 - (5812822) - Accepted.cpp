#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1, s2;
        cin>>s1>>s2;
        int i= s1.length();
        int j= s2.length();
        if(i<j) {cout<<"nao encaixa\n";continue;}
        bool b= true;
        while(j && b){
            if(s1[--i]!=s2[--j]){
                b=false;
            }
        }
        b ? cout<<"encaixa\n" : cout<<"nao encaixa\n";
    }
  return 0;
}
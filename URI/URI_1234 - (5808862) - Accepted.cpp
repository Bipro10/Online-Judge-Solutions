#include <bits/stdc++.h>
using namespace std;

int main(){
   string s;
   while (getline (cin, s, '\n')){
      bool b= true;
      for(int i=0; s[i]; i++){
         if(s[i]!=' '){
             if(b){
                 putchar(toupper(s[i]));
                 b= false;
             } 
             else {
                 putchar(tolower(s[i]));
                 b= true;
             }
         }
         else cout<<' ';
      }
      cout<<endl;
   }
   return 0;
}

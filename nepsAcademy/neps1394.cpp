#include <bits/stdc++.h>
using namespace std;
int main(){

string s1, s2;
cin >> s1;
s2 = s1;
reverse(s2.begin(), s2.end());
if(s1 == s2){
    cout << "eh palindromo";
}
else{
    cout << "nao eh palindromo";
}
}
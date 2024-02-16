#include <iostream>

using namespace std;

string replace(const string &s)
{
    string result=s;
    for(size_t i=0;i<s.length();i++){
      if(s[i] =='a' ||s[i] =='e'||s[i] =='i'||s[i] =='o'||s[i] =='u'||s[i] =='A'||s[i] =='E'||s[i] =='I'||s[i] =='O'||s[i] =='U'){
        result[i]='!';
      }
    }
  return result;
}
// ignore main fuction there would be no change since it "PASS BY VALUE" In PASS BY VALUE no changes occur in //?actual parameters
int main (){
    string a="hello";
    replace(a);
    cout<<a<<endl;
    return 0;
}
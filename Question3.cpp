#include<iostream>
using namespace std;


string removeExclamationMarks(string str){
  //your code here
  for(size_t i=0;i<str.length();i++){
    if(str[i]=='!'){
      str.erase(i,1);
      --i;
    }
  }
  return str;
}

int main(){
    string x="hello!";
    removeExclamationMarks(x);
    cout<<x;
    return 0;
}
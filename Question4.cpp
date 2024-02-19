#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
void star(int row ){
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";// printf("*");
        }
    cout<<endl;// printf("\n");     
    }
}
void number(int a){
    for(int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }

}
void alphabate(int b){
    for(int i=0;i<b;i++){
        for(int j=0;j<=i;j++){
            cout<<static_cast<char>('A'+j)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int x=5;
    star(x);
    cout<<star<<endl;
    number(x);
    cout<<number<<endl;
    alphabate(x);
    cout<<alphabate<<endl;
    return 0;
}





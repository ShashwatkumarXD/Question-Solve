#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int starpattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<'x';
        }
        cout<<'\n';
    }
    return 0;
}

int number(int n){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        cout<<'\n';
    }
    return 0;
}
int main(){
    // starpattern(5);
    number(6);
    return 0;
}


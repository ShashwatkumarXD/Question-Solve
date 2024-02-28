#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
int onebyone(int n){
    int A[n];
    int B[n];
    cout<<"enter array"<<endl;
    cin>>A[n];

    cout<<"ENTER 2nd ARRAY"<<endl;
    cin>>B[n];

    for(int i=0;i<n;i++){
        cout<<A[i]<<endl;
        cout<<B[i]<<endl;
        
    }
    return 0;
}
int mai (){
    int size =5;
    int x[size]={2,3,4,5,6,7};
    onebyone(size);
    for(int i=0;i<size;i++){
        cout<<x[i]<<endl;
    }
    return 0;

}
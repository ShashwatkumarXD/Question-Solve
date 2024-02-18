#include <bits/stdc++.h>
using namespace std;

int main(){
    int a [7]={1,12,8,0,5,9,7};
    // int n=a.length();
      int max=a[0],min=a[0] ;
    for(int i=1;i<7;i++){
        
        if(a[i]>max ){
            max=a[i];  
                  }
        
       
        if(a[i]<min){
            min = a[i];
        }
        
    }
    cout<<min<<" "<<max<<endl;
    int sum = min + max;
    cout<<sum<<endl;
    int totalsum=0;
    for(int i=0;i<7;i++){
        totalsum=totalsum+a[i];
    }
    cout<<totalsum<<endl;
    totalsum-=sum;
    cout<<totalsum;
    return 0;
}
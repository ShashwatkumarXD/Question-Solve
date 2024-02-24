// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Finish the solution so that it returns the sum of all the multiples of 3 or 5 below the number passed in.
// Additionally, if the number is negative, return 0.
// Note: If the number is a multiple of both 3 and 5, only count it once.

#include<stdio.h>
#include<iostream>

using namespace std;

int solution(int number) 
{
  int sum=0;
  for(int i = 0; i<number; i++){
    if((i%3==0) || (i%5==0))
      sum = sum+i;
  }
  return sum;
}
int main (){
    int x=solution(6);
    cout<<x<<endl;

    return 0;
}

// OUTPUT = 8

// (CODEWARS) 6kyu
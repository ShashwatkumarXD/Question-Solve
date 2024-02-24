// Write a function that takes an integer as input, and returns the number of bits that are equal to one in the binary representation of that number. You can guarantee that input is non-negative.

// Example: The binary representation of 1234 is 10011010010, so the function should return 5 in this case

#include <stdio.h>
#include <iostream>

using namespace std;

unsigned int countbits(unsigned n){
    int count=0;
    while(n){
        if(n%2==1)
        count++;
        n=n/2;
    }
    return count;
}
int main() {
    
    unsigned num = 1234; 
    unsigned int result = countbits(num);

    cout << "Number of set bits in the binary representation of " << num << ": " << result << endl;

    return 0;
}
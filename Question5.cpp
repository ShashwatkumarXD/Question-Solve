#include <iostream>
#include <stdio.h>

using namespace std;

struct data {
    int Rollnumber;
    char Name[25];
    char Address[50];
};

int main(){
    data d;
    cout<<"Enter Name"<<endl;
    cin>>d.Name;
    cout<<"Enter RollNumber"<<endl;
    cin>>d.Rollnumber;
    cout<<"Enter Address"<<endl;
    cin>>d.Address;

    cout<<"Input NAME:"<<endl<<d.Name<<endl;
    cout<<"Input ROLLNUMBER:"<<endl<<d.Rollnumber<<endl;
    cout<<"Input ADDRESS:"<<endl<<d.Address<<endl;

}
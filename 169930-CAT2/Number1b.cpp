//Admission number 169930
//Course DBIT Sep-Dec 2023
//Strathmore University
#include<iostream>
using namespace std;
int main()
{
    int lyear, year;
lyear = year% 4;
cout<<"Enter year: ";
cin>>year;
if(lyear==0){
    cout<<"This is a leap year.";//display when condition is met

}
else{
    cout<<"This is not a leap year";
}
}
//Admission number 169930
//Course DBIT Sep-Dec 2023
//Strathmore Univesity
#include<iostream>
using namespace std;
int main(){
    char choice, az,check;
    cin>>choice;
    az = tolower(choice);
    check = isalpha(az);
    if(!check){
        cout<<"Choice invalid";
        return 0;
    }
    switch(choice)
    {
        case 'a':
        cout<<"Vowel";
        break;
        case 'e':
        cout<<"Vowel";
        break;
        case 'i':
        cout<<"Vowel";
        break;
        case 'o':
        cout<<"Vowel";
        break;
        case 'u':
        cout<<"Vowel";
        break;
        default:
        cout<<"Consonant";
    }
}
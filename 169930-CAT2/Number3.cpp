


#include<iostream>
using namespace std;
int main()
{
string user_name,password,name,pass;
int choice;
cout<<"Enter name: ";
cin>>user_name;
cout<<"Enter password: ";
cin>>password; 
user_name="juls";
password = "1969";
if(user_name!=user_name && password!=pass){
cout<<"INVALID";
}
else{
    cout<<"Login successful.\nWelcome to my Simple App.Select action to perform:";
}
cout<<"Go to About Us Page.\n2.Go to Services Page.\n3.Go to Full Profile Page.\n4.Logout";
cin>>choice;
  switch(choice){
    case 1:
    cout<<"I am an omnivert.\n C++ because of developing games";
    break;
    case 2:
    cout<<"I can crochet";
    break;
    case 3:
    cout<<"Juliana Akhaika Musau.\n2000.\nKenya.\nKenyan.\nNairobi.\nStrathmore.\nDBIT.\nProgramming.\nReading novels";
    break;
    case 4:
    cout<<"Logout successful.";
    default:
    cout<<"Invalid details";
  }
}
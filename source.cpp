#include<iostream>
#include<fstream>
#include<string>
#include<ctime>
using namespace std;
int main(){
  char character[]="qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM 1234567890~!@#$%^&*"; //all uppercase lowercase special character and numbers and space also.
  string password;
  int length,rnum;
  ofstream out_file;
  out_file.open("password.txt");
  cout<<"Enter the length of your password you want"<<endl;
  cin>>length;
  srand(time(NULL));
  for(int i=1;i<=length;i++){
    rnum=rand() % 72 + 1; //total number of character is 72 and character store total 73 size;
    out_file<<character[rnum];
  }
    cout<<"password generated /"<<endl;
    return 0;
}
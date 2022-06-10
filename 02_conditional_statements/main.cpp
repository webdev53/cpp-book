#include<iostream>
using namespace std;


int main(){

  //* if else statement
  // int x, y;
  // cout<<"Enter two numbers!"<<endl;
  // cin>>x>>y;

  // if(x>y){
  //   cout<<"Max is " << x <<endl;

  // }else{
  //   cout<<"Max is " << y <<endl;
  // }

  int roll;
  cout<<"Enter your roll number"<<endl;
  cin>>roll;
  if(roll<1){
    cout<<"invalid roll no" << endl;
  }else{
    cout<<"valid roll no" << endl;
  }
  
  return 0;
}
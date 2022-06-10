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

  // int roll;
  // cout<<"Enter your roll number"<<endl;
  // cin>>roll;
  // if(roll<1){
  //   cout<<"invalid roll no" << endl;
  // }else{
  //   cout<<"valid roll no" << endl;
  // }


  //* LOGICAL OPERATORS
  //  int age;
  //  cout<<"Enter your age";
  //  cin>>age;
  //  if(age>=12 && age<=50){
  //    cout<<"young"<<endl;
  //  }else{
  //    cout<<"not young"<<endl;
  //  }

   int age1;
   cout<<"Enter your age";
   cin>>age1;
   if(age1<12 || age1>50){
     cout<<"Eligible"<<endl;
   }else{
     cout<<"Not Eligible"<<endl;
   }
  
  return 0;
}
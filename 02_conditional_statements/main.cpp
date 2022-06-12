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

  //  int age1;
  //  cout<<"Enter your age";
  //  cin>>age1;
  //  if(age1<12 || age1>50){
  //    cout<<"Eligible"<<endl;
  //  }else{
  //    cout<<"Not Eligible"<<endl;
  //  }

  //* else if
  //  int a, b, c;
  //  cout<<"Enter three numbers" << endl;
  //  cin>>a>>b>>c;

  //  if(a>b && b>c){
  //   cout<<"a is greater " <<endl;

  //  }else if(b>c){
  //   cout<<"b is greater than c" <<endl;
  //  }else{
  //   cout<<"c is there"<<endl;
  //  }

  //* else if day ladder
  // int day;
  // cout<<"Enter day number"<<endl;
  // cin>>day;
  // if(day ==1){
  //   cout<<"Sunday"<<endl;

  // }else if(day == 2){
  //   cout<<"Monday"<<endl;
  // }else if(day == 3){
  //   cout<<"Tuesday"<<endl;
  // }else{
  //   cout<<"Invalid input"<<endl;
  // }

  //* Short Circuit
  // int a = 10, b = 5, i = 5;
  // if(a<b && ++i<=b){
  //   cout<<"Short circuit is false";
  // } else if(a<b || ++i <=b){
  //   cout<<"a: "<<a<<endl;
  // }
  // cout<<i<<endl; //6

  //*dynamic declaration
  // int a = 10, b = 5;

  // if(int c = a + b; c>10){
  //   cout<<"c : " << c << endl;
  // }

  //*switch case
  int day;
  cout<<"Enter day in number"<<endl;
  cin>>day;

  switch(day){
    case 1: cout<<"Sunday"<<endl;
            break;
    case 2: cout<<"Monday"<<endl;
            break;
    case 3: cout<<"Tuesday"<<endl;
            break;
    case 4: cout<<"Wednesday"<<endl;
            break;
    default: cout<< "Invalid day"<<endl;
  }

  
  return 0;
}
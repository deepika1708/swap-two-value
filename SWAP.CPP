#include<iostream.h>
#include<conio.h>
void main()
 {

 int a,b,c;

 cout<<"\n Enter any number a::";
 cin>>a;
 cout<<"\nEnter any number b::";
 cin>>b;
  for(int i=1;i<=4;i++)
 c=a;
 a=b;
 b=c;
 cout<< " After swap  a :";
 cout<<a<<"b: "<<b;
 getch();
 }

#include<iostream>
using namespace std;
int main()

{
int a,b;
cout<<"enter two numbers";
cin>> a>> b;
if (a>b)
{ 
cout<<a<<"is the bigger number";
}else if (b>a){
cout<<b<< " is the bigger number";
}
else{
cout<< " both numbers are same";
}
return 0;
}

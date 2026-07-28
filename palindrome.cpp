#include<iostream>
using namespace std;
int main()
{
int n,temp,rem,rev=0;
cout<<"enter a number:";
cin>>n;
temp=n;
while(n!=0)
{
rem=n%10;
rev= rev*10+rem;
n=n/10;
}
if (temp == rev)
cout<<"the no is palindrome";
else
cout<<" the no is not palindrome";
return 0;
}


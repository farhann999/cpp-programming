#include <iostream>
using namespace std;

int main()
{
int num;
cout<<"enter a year:" ;
cin>> num;


if (num%4 == 0) {
cout << num<<"is leap";
}else{ 
cout<<num<< "is not leap";
}
return 0;
}

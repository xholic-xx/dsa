#include<iostream>
using namespace std;
int main(){
	int n,a=0,b=1,i,c;
	cout<<"how many number of fibonacci series do you require? :"<<endl;
	cin>> n;
	cout<<a<<"  "<<b<<"  ";
  
	for (int i=0;i<n;i++)
{ c=a+b;
cout<<c<<"  ";
a=b;
b=c;
}
return 0;	
}

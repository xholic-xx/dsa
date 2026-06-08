//array insertion
#include<iostream>
using namespace std;
int main()
{
	int val,i,pos,n=5;
	int arr[10]={10,20,30,40,50};
	
	for (i = 0; i< n ; i++)
	{
		cout << "The element at index "<< i << " is "<< arr[i] << endl;
	}
	
	cout << "Enter the postion you want to add the element:";
	cin >> pos;
	
	cout << "Enter the vlaue you want to add the element :";
	cin >> val;
	
	
	for ( i = n ; i >= pos ; i--){
		arr[i+1]=arr[i];
	}
	
	arr[pos]=val;
	n++;
	
	for (i = 0; i< n ;i++)
	{
		cout << "The element at index "<< i << " is "<< arr[i] << endl;
	}
	
	return 0;
}

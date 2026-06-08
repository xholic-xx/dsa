#include<iostream>
using namespace std;
int main(){
	int i, pos,val,n=5;
	int arr[10]={10,20,30,40,50};
	
	for(i=0;i<n;i++){
		cout<<"The value at the index" << i <<"is " << arr[i]<<endl;
	}
	
	cout << "Enter the index of the element you want to delete";
	cin >> pos;
	
	for(i=pos ;i<n ;i++){
		arr[i]=arr[i+1];
	}
	
	n--;
	
		for(i=0;i<n;i++){
		cout<<"The value at the index" << i <<"is " << arr[i]<<endl;
	}
	return 0;
}
 

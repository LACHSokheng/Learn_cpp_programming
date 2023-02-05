#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	int add[50],i,n,item;
	
	//add element
	cout <<"Enter element: "; cin>>n;
	for (i = 0; i < n; i++){
		cout<<"\n Array ["<<i<<"]= "; cin>>add[i];	
	}
	
	//show element
//	cout <<"\nAll Element";
//	for (i = 0; i < n; i++){
//		cout <<"\n Array ["<<i<<"]= "<<add[i];
//	}
//	
	//find element
	cout <<"\nFind Item = "; cin>>item;
	for (i = 0; i < n; i++){
		if (item == add[i]){
			cout <<"\n Array["<<i<<"]= "<<add[i];
			break;
		}
	}
	if (i == n){
		cout <<"\nNo found!";
	}
		
}

#include <iostream>
#include <conio.h>

using namespace std;

void Add(int add[],int n);
void Show();
int Assign(int a[]);
int Find();
int Sort(int a[]);

int main(){
	char selec;
	int n,i,add[50];
	//call function
	Show();
	cout <<"Choose Option(1,2,3,4,5) :"; cin>>selec;
	
}

void Show(){
	cout <<"1. Add List\n ";
	cout <<" a. Assign Value\n ";
	cout <<" b. Input from keyboard\n";
	cout <<"2. Show List\n";
	cout <<"3. Find Item in List\n";
	
}

//void Add(int add[],int n){
//	int i;
//	for (i = 0; i < n; i++){
//		cout<<"\n Array ["<<i<<"]= "<<endl; cin>>add[i];	
//	}	
//}

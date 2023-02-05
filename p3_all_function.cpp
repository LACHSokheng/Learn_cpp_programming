#include <iostream>
#include <conio.h>
using namespace std;

int a, b,result;

void show();
int Max1(int a, int b);
int Max2();
void Max3(int a, int b);
void Max4();
int Sum(int n);
int RSum(int n);

int main(){
	float s,a,b,n;
	int c,d;
	again:
		system("color D");//add color
	show();
	cout <<"\nChoose number(1,2,3) to show : "; cin>>c;
	
	switch(c){
		case 1:
			int d;
				cout <<" 1.1.Function : int Max1(int x, int y)\n";
				cout <<"Enter A :";cin>>a;
				cout <<"Enter Y :";cin>>b;
				d = Max1(a,b);
				cout <<"\nMaximum number is "<<d<<endl;
				getch();
				cout <<"\n 1.2.Function : int Max2()\n";
				d = Max2();
				cout <<"\nMaximum number is "<<d<<endl;
				getch();
				cout <<"\n 1.3.Function : void Max3(int x, int y)\n";
				Max3(a,b);
				getch();
				cout <<"\n 1.4.Function : void Max4()\n";
				Max4();
				cout <<"\nMaximum number is "<<d<<endl;
				
				getch();
				system("cls");
				goto again;
				break;
				
		case 2:
			cout <<"\n 2.1.Use funtion not Recursive\n";
			cout <<"\nEnter n: "; cin>>n;
			c = Sum(n);
			cout <<"\nSum of number = "<<c<<endl;
			getch();
			
			//recursive funtion
			cout <<"\n 2.2.Use Recursive funtion\n"<<endl;
			cout <<"Enter n: "; cin>>n;
			c = RSum(n);
			cout <<"\nRecursive number = "<<c<<endl;
			getch();
			system("cls");
			goto again;
			break;

		case 3:
			cout <<"\nThank you";
			getch();
			break;
					
	}
}

void show(){
	cout <<"1.Use Function(Problem:Find Maximum(x,y)\n";
	cout <<" 1.1.Function : int Max1(int x, int y)\n";
	cout <<" 1.2.Function : int Max2()\n";
	cout <<" 1.3.Function : void Max3(int x, int y)\n";
	cout <<" 1.4.Function : void Max4()\n"<<endl;
	cout <<"2.Use Recursive function(Probleam:1+2+3+....+n)\n";
	cout <<" 2.1.Use funtion not Recursive\n";
	cout <<" 2.2.Use Recursive funtion\n"<<endl;
	cout <<"3. Exite to program\n";
	
}
//
int Max1(int a, int b){
	int result;
	if (a > b){
		result = a;
	}else {
		result = b;
	}
	return result;
}

int Max2(){
	int result;
	cout <<"\nEnter a :"; cin>>a;
	cout <<"\nEnter b :"; cin>>b;
	if (a > b){
		result = a;
	}else {
		result = b;
	}
	return result;
}

void Max3(int a, int b){
	cout <<"\nEnter a :"; cin>>a;
	cout <<"\nEnter b :"; cin>>b;
	if (a > b){
		result = a;
		cout <<"Maximum is "<<result;
	}else {
		result = b;
		cout <<"Maximum is "<<result;
	}
}
void Max4(){
	cout <<"\nEnter a:"; cin>>a;
	cout <<"\nEnter b:"; cin>>b;
	if (a > b){
		result = a;
		cout <<"Maximum is "<<result;
	}else {
		result = b;
		cout <<"Maximum is "<<result;
	}
}

int Sum(int n){
	int s=0 ,i;
	for (i = 1; i <= n; i++){
		s +=i;
	}
	return s;
}

int RSum(int n){
	if (n == 1)
		return 1;
	else
		return (n+RSum(n-1));
		
}

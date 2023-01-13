#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	int selec ;
	char grade;
	float a1,b1,a,b,c,x1,x2,x,data;
	again:
	
	cout <<"--------------------------------------------------------------\n";
	cout << setw(60)<<"1. Comparetion about two number \n";//60-35=25
	cout << setw(40)<<"2. Equation \n";//40-15=25
	cout << setw(46)<<"3. Classification \n";//45-20=25
	cout << setw(42)<<"4. Complected \n";//15
	cout <<"--------------------------------------------------------------\n";
	
	
	cout <<"\n Choose the number(1,2,3,4) that you want to show : "; cin>>selec;
	
	if (selec == 1){
		system("cls");
		cout <<setw(60)<<"Comparetion about two number :\n";
		cout <<"\nEnter number of a : "; cin>>a1;
		cout <<"\nEnter number of b : "; cin>>b1;
		if (a1 > b1){
			cout <<"\nThe number a is biger than number b  ";
		}else{
			cout <<"\nThe number a is smaller than number b  ";
		}
		getch();
		system("cls");
		goto again;
		
	}else if (selec == 2){
		cout <<setw(40)<<"The equation have: ax^2 + bx + c = 0 \n";
	
			cout <<"\nEnter a = ";cin>>a;
			cout <<"\nEnter b = ";cin>>b;
			cout <<"\nEnter c = ";cin>>c;
			
			if (a == 0){
				if (b != 0){
					x1=x2 = -c/b;
					cout<<"\nThe equation one X = "<<x1;
				}else {
					if (c == 0){
						cout <<"\nMany roots!!";
					}else {
						cout <<"\nNo roots!!";
					}
				}
				
				}else if (c == 0){
					x2 = -b/a;
					cout <<"\nThe equation has 2 roots:\n x1 = 0\n x2 = "<<x2;
			
				}else if (a + b + c == 0){
					x2 = c/a;
					cout <<"\nThe equation has 2 different roots:\n x1 = 1\n x2 = "<<x2;
					
				}else if (a + b + c == 0){
					x2 = -c/a;
					cout <<"\nThe equation has 2 different roots:\n x1 = -1\n x2 = "<<x2;
					
				}else {
					data = pow(b,2) - 4 *a*c;
					if (data == 0){
						x1 = x2 = -b/2*a;
						cout <<"\nThe number of roots X1 = X2 = "<<x1;
					}else if (data > 0){
						x1 = ( -b + sqrt(data))/2*a;
						x2 = ( -b + sqrt(data))/2*a;
						cout <<"\nThe number of root X1 = "<<x1;
						cout <<"\nThe number of root X2 = "<<x2;
					}else {
						x1 = ( -b + sqrt(data))/2*a;
						x2 = ( -b + sqrt(data))/2*a;
						cout <<"\nThe number of root X1 = "<<x1 <<"i";
						cout <<"\nThe number of root X2 = "<<x2 <<"i";
							
						}
					}
					getch();
				system("cls");
				goto again;
					
	}else if (selec == 3){
		cout <<setw(40)<<"\nClassification :";
		cout <<"\nInput your grade (A-F) : "; cin>>grade;
		switch(grade){
			case 'A':
				cout <<"\nExellent ";
				break;
				
			case 'B':
			case 'C':
				cout <<"\nWell done ";
				break;
			case 'D':
				cout <<"\nYou passed ";
				break;
			case 'E':
				cout <<"\nBetter Try again ";
				break;
				
			default:
				cout <<"\nYou fail ";
				break;		
				}
		getch();
		system("cls");
		goto again;	
	}else{
		cout <<setw(20)<<"Thanks you";
	}
	
}

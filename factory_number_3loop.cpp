#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main(){
	
	int n,i,f=1,S;
	again:
	
	cout <<setw(33)<<"1. For loop\n";//13 charater
	cout <<setw(35)<<"2. While loop\n";//15 charater
	cout <<setw(33)<<"3. Do-while\n";// 13charater
	cout <<setw(30)<<"4. Leave\n";
	cout <<"\n Choose the number(1,2,3) that you want to show : "; cin>>S;
	
	switch(S){
		case 1:
			cout <<setw(33)<<"1. For loop\n";
			cout <<"\nEnter number n: ";cin>>n;
			if (n != 0){
				for (i = 1; i <= n; i++){
					f *= i;
				}
				cout <<"\nThe Result of "<<n <<"! = "<<f;
				
			}else{
				
				cout <<"\nThe Result of 0! = 1";
			}
			getch();
			system("cls");
			goto again;	
			break;
			
		
		case 2:
			cout <<setw(35)<<"2. While loop\n";
			i = 1;f=1;
			cout <<"\nEnter number n: ";cin>>n;
		
			if (n != 0){
				while (i <= n){
				f *=i;
				i++;
				
				}
				cout <<"\nThe Result of "<<n <<"! = "<<f;
				
			}else{
				cout <<"\nThe Result of 0! = 1";
			} 
			getch();
			system("cls");
			goto again;
			break;
				
		
		case 3:
			cout <<setw(33)<<"3. Do-while\n";
			cout <<"\nEnter number n: ";cin>>n;
			i= 1;f=1;
			
			if (n != 0){
				do{
					f *= i;
					i++;
				
				}while (i <= n);
				cout <<"\nThe Result of "<<n <<"! = "<<f;
			}else{
				cout <<"\nThe Result of 0! = 1";
			} 
			getch();
			system("cls");
			goto again;	
			break;
		
			
		default :
			cout <<"\n"<<setw(32)<<"Thank you \n"; //12char--
			break;
		}
		
		
	}
	


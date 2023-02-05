#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main(){
	
	int n,i,f=1,S,sum=0;
	again:
	
	cout <<setw(33)<<"1. For loop\n";//13 charater
	cout <<setw(35)<<"2. While loop\n";//15 charater
	cout <<setw(33)<<"3. Do-while\n";// 13charater
	cout <<setw(30)<<"4. Label\n";
	cout <<setw(40)<<"5. Exit to grogram\n";
	cout <<"\n Choose the number(1,2,3,4,5) that you want to show : "; cin>>S;
	cout <<"\n Calcule = 1!+2!+3!+....+n! \n";
	
	switch(S){
		case 1:
			cout <<setw(33)<<"1. For loop\n";
			cout <<"\nEnter number n: ";cin>>n;
			if (n != 0){
				for (i = 1; i <= n; i++){
					f *= i;
					sum +=f;
				}
				cout <<"\nThe Result Sum of factory is = "<<sum;
				
			}else{
				
				cout <<"\nThe Result of 0! = 1";
			}
			getch();
			system("cls");
			goto again;	
			break;
			
		
		case 2:
			cout <<setw(35)<<"2. While loop\n";
			i = 1;f=1,sum= 0;
			cout <<"\nEnter number n: ";cin>>n;
		
			if (n != 0){
				while (i <= n){
				f *=i;
				sum +=f;
				i++;
				
				}
				cout <<"\nThe Result Sum of factory is = "<<sum;
				
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
			i= 1;f=1,sum= 0;
			
			if (n != 0){
				do{
					f *= i;
					sum +=f;
					i++;
				
				}while (i <= n);
				cout <<"\nThe Result Sum of factory is = "<<sum;
					
			}else{
				cout <<"\nThe Result of 0! = 1";
			} 
			getch();
			system("cls");
			goto again;	
			break;
			
		case 4:
			cout <<"\nEnter number n: ";cin>>n;
			f = 1;sum = 0; i= 1;
			Again: f *= i;sum += f;
			i++;
			cout <<"\nThe Result Sum of factory is = "<<sum;
			getch();
			system("cls");
			goto Again;	
			break;
			
			
		default :
			cout <<"\n"<<setw(32)<<"Thank you \n"; //12char--
			getch();
			break;
		}
		
		
	}
	


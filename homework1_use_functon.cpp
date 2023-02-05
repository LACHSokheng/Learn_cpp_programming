#include <iostream>
#include <conio.h>

using namespace std;
int Teacher;
void Option();
void Input (Teacher *pt, int n);
void Output (Teacher *pt, int n);
float Income(Teacher a[50], int n);
void Search(Teacher a[50], int n, char *Name);
void Sort(Teacher *pt, int n);

struct Teacher{
	char name[30],subj[20], sex;
	int id,old;
	float salary;
	
};
int main(){
	
	
}
void Option(){
	cout <<"\n1. Input Information";
	cout <<"\n1. Output Information";
	cout <<"\n1. Income Information";
	cout <<"\n1. Search Information";
	cout <<"\n1. Sort Information";
}


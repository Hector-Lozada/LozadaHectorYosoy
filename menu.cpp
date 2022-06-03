#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int op, flag;
	do
	{
		system("cls");
		cout<<"1. SUMA DE VARIOS NÚMEROS"<<endl;
		cout<<"2. COMPARA"<<endl;
		cout<<"3. SALIR"<<endl;
		cout<<"INGRESE UNA OPCIÓN: "; cin>>op;
		
	}
	while(op != 3);
	//system("tree");
	return(0);
}

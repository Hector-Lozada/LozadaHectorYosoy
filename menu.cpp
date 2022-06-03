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
		switch(op)
		{
			case 1:
				cout<<"Aqui va la suma de varios numeros";
				flag=cin.ignore().get();
			break;
			case 2:
				cout<<"Aqui va el programa de compara";
				flag=cin.ignore().get();
		}
	}
	while(op != 3);
	//system("tree");
	return(0);
}

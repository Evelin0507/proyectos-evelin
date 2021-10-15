#include<iostream>
#include<stdio.h>
using namespace std;
string  menu, usuario, pass, user="sistemas", password="programador";
char opc1, opc2, opc3, opc4;
int main(){
     cout<<"bienvenido a nuetsro aplicativo por favor identificte"<<endl;
	 cout<<"Ingresa tu usuario:";
	 cin>>usuario;
	 cout<<"ingresa tu password:";
	 cin>>password;
if (usuario == user && pass == password){
	do{
	cout<<"Por favor selecciona alguna opcion del menu"<<usuario<<endl;
	cout<<"a-Programa de sumas"<<endl;
	cout<<"b-programa de restas"<<endl;
	cout<<"c-estudia las tablas de multiplicar"<<endl;
	cout<<"d-vocal o cconsonante"<<endl;
	cin>>menu;
	
	if( menu == 'a')	{
		cout<<"sumas"<<endl;
		int a,b,c,d, resp;
		do{
			cout<<"bienvenido al programa de sumas:"<<endl;
			cout<<"ingresa el primer numero a sumar:";
			cin>>a;
			cout<<"ingresa el segundo numero a sumar:";
			cin>>b;
			cout<<"ingresa el tercer numero a sumar:";
			cin>>c;
			cout<<"ingresa el tercer numero a sumar:";
			cin>>d;
			resp= a+b+c+d;
			cout<<"la respuesta de la suma de:"<<a<<"+"<<b<<"+"<<c<<"+"<<d<<resp;
			cout<<"퓉uieres sumar de nuevo?"<<endl;
			cin>>opc2;
		}
		while(opc2!='n');
		
	}
	else if( menu == 'b'){
		cout<<"restas"<<endl;
		do{
			cout<<"bienvenido al programa de restas:"<<endl;
			cout<<"ingresa el primer numero a restar:";
			cin>>a;
			cout<<"ingresa el segundo numero a restar:";
			cin>>b;
			cout<<"ingresa el tercer numero a restar:";
			cin>>c;
			cout<<"ingresa el tercer numero a restar:";
			cin>>d;
			resp= a-b-c-d;
			cout<<"la respuesta de la suma de:"<<a<<"-"<<b<<"-"<<c<<"-"<<d<<resp;
			cout<<"퓉uieres restar de nuevo?"<<endl;
			cin>>opc3;
		}
		while(opc3!='n');
		
	}	
	else if( menu == 'c'){
		cout<<"tablas"<<endl;
		int multiplica, numero, i;
		do{
			cout<<"bienvenido a las tablas de multiplicar:"<<endl;
			cout<<"por favor ingresa el numero de la tabla a generar:"<<endl;
			cin>>numero;
			for(int i=1; i<= 10; i++){
				multiplica= 1*numero;
				cout<<numero<<"*"<<i<<"="<<multiplica<<endl;
			}
			cout<<"퓉uieres generar otra tabla de multiplicar?"<<endl;
			fflush(stdin);
			cin>>opc4;	
		}
		while(opc4!='n');
		
		
	}
	else if( menu == 'd'){
		cout<<"vocal"<<endl;
	}	
	
	else{
		cout<<"opcion invalida 퓉uieres ingresar al menu?"<<endl;
		cin>>opc1;
	}
			
	}
	while(opc1!=n)
	
}
else{
	cout<<"usuario no identificado por favor contacta a soporte"<<endl;
}	
		
	
}

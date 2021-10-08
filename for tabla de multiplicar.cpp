#include<iostream>
#include"stdio.h"
using namespace std; 
int main(){
string user, pass, usuario="programador", password="sistema";
char seguir, opc;
int multiplica, numero;

cout<<"Bienvenido por favor ingresa al sistema"<<endl;
cout<<"Ingresa tu usuario:";
cin>>user;
cout<<"Ingresa tu password:";
cin>>pass;
if(user==usuario && pass==password){
do{
cout<<"Ingresa un numero para la tabla de multiplicar"<<endl;
cin>>numero;
for(int i=1; i<= 10; i++){
multiplica=1*numero;
cout<<numero<<"*"<<i<<"="<<numero*i<<endl;
}

cout<<"Quieres generar otra tabla de multiplicar"<<endl;
fflush(stdin);
cin>>seguir;
}	
while (seguir!='n');
}
else {
	cout<<"Usuario no valido por favor contacta a soporte"<<endl;
}
cin.get ();
return 0;	
}

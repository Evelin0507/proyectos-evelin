#include<iostream>
#include"stdio.h"
using namespace std; 
int main(){
string user, pass, usuario="programador", password="eve";
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


cin.get ();
return 0;	
}

#include "iostream"
using namespace std; 
string usuario="", pass="", user="Evelin6", password="678";
int numero1, numero2, numero3, resultado; 
int main(){
char opc;

cout<<"Bienvenido por favor igresar tus credenciales"<<endl; 
cout<<"Por favor ingresa tu usuario:"<<endl; 
cin>>usuario;
cout<<"digita tu password:"<<endl;
cin>>pass;

if(usuario==user&&pass==password){
	cout<<"Bienvenido"<<usuario<<"al sistema, por favor selecciona una opcion"<<endl;
	cout<<"1-Suma"<<endl;
	cout<<"2-Resta"<<endl;
	cout<<"3-Multiplicacion"<<endl;
	cin>>opc;
}
if(opc=='1'){
	cout<<"Bienvenido a la Suma"<<endl;
	cout<<"Por favor Ingresa 3 numeros enteros a sumar"<<endl;
	cout<<"Ingresa el Primer numero"<<endl;
	cin>>numero1;
	cout<<"Ingresa el segundo numero"<<endl;
	cin>>numero2;
	cout<<"Ingresa el trecer numero"<<endl;
	cin>>numero3;
	resultado = numero1 + numero2 + numero3;
	cout<<"El resultado de tu suma es:"<<resultado; 
}	

else if(opc=='2'){
	cout<<"Resta"<<endl;
	cout<<"Bienvenido a la Resta"<<endl;
	cout<<"Por favor Ingresa 3 numeros enteros a restar"<<endl;
	cout<<"Ingresa el Primer numero"<<endl;
	cin>>numero1;
	cout<<"Ingresa el segundo numero"<<endl;
	cin>>numero2;
	cout<<"Ingresa el trecer numero"<<endl;
	cin>>numero3;
	resultado = numero1 - numero2 - numero3;
	cout<<"El resultado de tu resta es:"<<resultado;
}

else if(opc=='3'){
	cout<<"Multiplicacion";
	cout<<"Bienvenido a la Multiplicacion"<<endl;
	cout<<"Por favor Ingresa 3 numeros enteros a Multiplicacion"<<endl;
	cout<<"Ingresa el Primer numero"<<endl;
	cin>>numero1;
	cout<<"Ingresa el segundo numero"<<endl;
	cin>>numero2;
	cout<<"Ingresa el trecer numero"<<endl;
	cin>>numero3;
	resultado = numero1 * numero2 * numero3;
	cout<<"El resultado de tu Multiplicacion es:"<<resultado;
}

else{
	cout<<"No es una fucion permitida"<<endl;
}


return 0;
cin.get ();







}

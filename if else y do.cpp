#include"iostream"
using namespace std; 
string user="programador", pass="eve", usuario, password, saludo="hola bienvenido"; 
int opc;
int main(){
string nombre, grupo;
int edad;	
	cout<<"Bienvenido al sistema por favor digita tu usuario y tu password"<<endl;
	cout<<"Usuario:"<<endl;
	cin>>usuario;
	cout<<"Password:"<<endl;
	cin>>password;
	
	if(usuario == user && password == pass){
	cout<<saludo<<":"<<usuario<<endl; 
	cout<<"Por favor selecciona una opcion"<<endl;
	
	do{
	  cout<<"1.-Registrar usuario"<<endl;
	  cout<<"2.-Ver perfil"<<endl;
	  cout<<"3.-Salir"<<endl;
	  cin>>opc;
	if(opc == 1){
		cout<<"Registra un usuario"<<endl;
		cout<<"nombre"<<endl;
		cin>>nombre;
		cout<<"edad"<<endl;
		cin>>edad;
		cout<<"grupo"<<endl;
		cin>>grupo;
	}
	else if (opc == 2){
		cout<<"Verificar perfil"<<endl;
		cout<<nombre<<endl;
		cout<<edad<<endl;
		cout<<grupo<<endl; 
	}
	
	}
	while(opc != 3);
	
	}  
	else {
		cout<<"Usuario no valido"<<endl; 
		
	}
	
	
	cin.get(); 
	return 0;
}

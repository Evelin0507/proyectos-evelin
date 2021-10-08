#include"iostream"
using namespace std; 
string usuario, password, user="Eve", pass="1234", saludo="¿Hola Como estas?";
int main(){
	char opc, letra;
	int tope= 2021, edad, an, meses=12,mes, dias=365, dia, hrs=24, horas, min=60, minutos; 
	cout<<"Por favor ingresa tu usuario"<<endl;
	cin>>usuario;
	cout<<"Por favor ingresa tu Password"<<endl;
	cin>>password;
if (user==usuario && pass==password){
	cout<<"Bienvenido al sistema:"<<usuario<<endl;
	cout<<"Selecciona una opcion"<<endl;
	cout<<"1-Saludarte"<<endl;
	cout<<"2-Te indicaremos tu edad para que sepas tus dias, tus mese, tus horas y tus minutos"<<endl;
	cout<<"3-Te indicaremos si la letra que digitaste es vocal o consonante"<<endl;
	cin>>opc;
}

if (opc=='1'){
	cout<<saludo<<""<<usuario<<endl;
}

if (opc=='2'){
	cout<<"Por favor ingresa el año en el que naciste"<<endl;
	cin>>an;
	edad=tope-an;
	cout<<"Tu edad es:"<<edad<<"años"<<endl;
	mes=an*meses;
	cout<<"Los meses equivalentes a tus:"<<edad<<"\n años son:"<<mes<<"meses"<<endl;
	
	dia=mes*dias;
	cout<<"Los dias equivalentes a tus:"<<mes<<"\n meses son:"<<dia<<"dias"<<endl;
	
	horas=dia*hrs;
	cout<<"Las horas son equivalentes a tus:"<<dia<<"\n dias son:"<<horas<<"horas"<<endl;
	
	minutos=horas*min;
	cout<<"Los minutos equivalentes a tus:"<<horas<<"\n horas son:"<<minutos<<"minutos"<<endl;
}

if (opc=='3'){
	cout<<"Por favor digita una letra a validar"<<endl;
	cin>>letra;
 }	 
	 if (letra=='a'){
	cout<<"la letra seleccionada es vocal"<<endl;
}
     if (letra=='e'){
    cout<<"la letra selecciona es una vocal"	<<endl;
}
     if (letra=='i'){
    cout<<" La letra seleccionada es una vocal"<<endl;	
}
    if (letra=='o'){
    cout<<"La letra seleccionada es una vocal"<<endl;	
}
     if(letra=='u'){
    cout<<"La letra seleccionada es una vocal"<<endl;	
}
    else {
    cout<<"La letra es una consonante"<<endl; 
	}
	

return 0; 

}
	



#include "iostream"
using namespace std; 
int main(){

int compra, pago=0;
cout<<"Ingresa los datos de la compra...¿Cuantas prendas se llevan?"<<endl<<compra<<endl; 
cin>>compra; 

pago=compra*250; 

if(compra<10){
cout<<"No se cumplio con la promocion al monto"<<endl; 
}
else if (compra<10){
cout<<"Se cumple la promocion el monto a pagar aplicando 15% es:"<<pago-(compra*0.15)<<endl;
}
else if (compra<25){
cout<<"Se cumple la promocion el monto a pagar aplicando 25% es:"<<pago-(compra*0.25)<<endl;
}
else if (compra<35){
cout<<"Se cumple la promocion el monto a apagar aplicando 40% es:"<<pago-(compra*0.40)<<endl;
}

return 0;
cin.get ();


}



#include"iostream"
using namespace std;
int main(){
	char vocal;
	cout<<"Digita una letra"<<endl;
	cin>>vocal;
	 switch(vocal){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		cout<<"La letra digitada es: vocal"<<endl;
		break;
		default:
		cout<<"La letra es una: consonante"<<endl;	
	}
	return 0;
	cin.get();
}


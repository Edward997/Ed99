#include <iostream>
using namespace std;

struct Persona{
	char nombre[20];
	int edad;
} persona1, persona2;

int main(int argc, char** argv){
	
	cout<<"Nombre: ";
	cin.getline(persona1.nombre,20,'\n');
	cout<<"Edad: ";
	cin>>persona1.edad;

	cout<<persona1.nombre<<endl;
	cout<<persona1.edad<<endl;
	
	cout<<"Nombre: ";
	cin.getline(persona2.nombre,20,'\n');
	cin.getline(persona2.nombre,20,'\n');
	cout<<"Edad: ";
	cin>>persona2.edad;

	cout<<persona2.nombre<<endl;
	cout<<persona2.edad<<endl;

	system("pause") ;

	return 0;
}
 


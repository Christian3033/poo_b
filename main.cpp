#include "Cliente.cpp"
#include <iostream>
using namespace std;

int main(){
	string nit, nombres, apellidos, direccion;
	int telefono;
	
	cout<<"Ingrese su NIT: ";
	cin>>nit;
	cout<<"Ingrese su nombre: ";
	cin>>nombres;
	cout<<"Ingrese su apellido: ";
	cin>>apellidos;
	cout<<"Ingrese su direccion: ";
	cin>>direccion;
	cout<<"Ingrese su telefono: ";
	cin>>telefono;
	
	//instancia de un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	

	cout<<"Datos del cliente"<<obj.getNit()<<", "<<obj.getNombres()<<", "<<obj.getApellidos()<<", "<<obj.getDireccion()<<", "<<obj.getTelefono()<<endl;
	
	/*Cliente obj = Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	
	obj.mostrar();*/ 
}

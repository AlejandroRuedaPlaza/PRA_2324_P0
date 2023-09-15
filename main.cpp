#include "BrazoRobotico.h"
#include <iostream>

int main(){
	BrazoRobotico b1(0.0,0.0,0.0,false);
	std::cout << "El brazo se en cuentra en las coordenadas: (" << b1.getX() << "," <<
		b1.getY() << "," << b1.getZ() << ")"<< std::endl;
	if(b1.getSujetando()){
		std::cout << ",y esta sujetando un objeto" << std::endl;
	}else{
		std::cout << ",y no esta sujetando ningun objeto" << std::endl;
	}
	
	b1.mover(5.2,3.0,1.0);
	std::cout << "El brazo se ha movido a las coordenas: (" << b1.getX() << "," <<
		                b1.getY() << "," << b1.getZ() << ")"<< std::endl;
	
	b1.coger();
	std::cout << "El brazo ha empezado a sujetar un objeto" << std::endl;


	return 0;
}

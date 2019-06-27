#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;


struct circuito{

	float corriente;
	float resistencia;

}circuit[4], *pointer=circuit;


void pedir_datos();
void imprimirdatos(circuito *pointer);

int main(){


	pedir_datos();
	imprimirdatos(pointer);



	return 0;
}



void pedir_datos(){



	for(int i=0; i<4; i++){

		cout<<"Digite la corriente::";
		cin>>(pointer+i)->corriente;
		cout<<"Digite valor resistencia";
		cin>>(pointer+i)->resistencia;


	}


}



void imprimirdatos(circuito *pointer){



	cout<<"Corriente\tResistencia"<<endl;
	 for(int i=0; i<4; i++){

                cout<<(pointer+i)->corriente<<"\t\t"<<(pointer+i)->resistencia<<"\n";

        }

}

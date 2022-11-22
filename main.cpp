// =================================================================
//
// File: main.cpp
// Author: Diego Iturbe Bravo
// Date: x/x/2022
//
// =================================================================
#include <iostream>
#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <cstring>

// #include "header.h"
#include "search.h" 
#include "sort.h" 
// #include "bubble.h"
// #include "selection.h"
// #include "insertion.h"

using namespace std;

int main(int argc, char* argv[]) {
	int array1[] = {58, 92, 75, 5, 21, 92, 84, 91, 64, 54, 3, 28, 11, 61, 65, 4, 1, 8, 52, 78};
	vector<int> original1 (array1, array1 + sizeof(array1) / sizeof(int) );

	int array2[] = {120, 10, 5, 897, 333, 68};
	vector<int> original2 (array2, array2 + sizeof(array2) / sizeof(int) );

	vector<int> prueba;
	prueba = original1;

	int arrayBus[]={1, 58, 92, 1312, 78, 11, 31313};
	vector<int> buscados (arrayBus,arrayBus + sizeof(arrayBus) / sizeof(int) );	
	// int busquedas = 1;
	int vector[] = {2,5,1,3,7};
	string resp1 = "[1, 3, 4, 5, 8, 11, 21, 28, 52, 54, 58, 61, 64, 65, 75, 78, 84, 91, 92, 92]";
	
	cout << endl<< "Vector: 58, 92, 75, 5, 21, 92, 84, 91, 64, 54, 3, 28, 11, 61, 65, 4, 1, 8, 52, 78" << endl << "Los numeros a buscar son: 1, 58, 92, 1312, 78, 11, 31313 "  << endl;
	Search<int> search;
	Sorts<int> sorts;


	for (int i =0; i < buscados.size() ; i++){
		int buscado= buscados[i];
		cout<< endl<<"Numero a buscar: " << buscado << endl;
		sorts.mergeSort(prueba);
		int secuencial= search.busqSecuencial(prueba, buscado);
		if (search.busqBinaria(prueba, buscado) == -1){ //incompleto es necesario ordenar
			cout<<"No encontrado"<<endl;
		};
		if (secuencial != -1){
			cout<< "Posicion: "<< secuencial<< endl;
		}
		else{
			cout<<"No encontrado"<<endl;
		}
	}

	return 0;
}

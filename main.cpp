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

	int array1[] = {10,4,8,12,20,15,54,18};
	vector<int> original1 (array1, array1 + sizeof(array1) / sizeof(int) );

	vector<int> prueba;
	prueba = original1;


	int arrayBus[]={20,54,100,12};
	vector<int> buscados (arrayBus,arrayBus + sizeof(arrayBus) / sizeof(int) );	

	int vector[] = {2,5,1,3,7};
	string resp1 = "[1, 3, 4, 5, 8, 11, 21, 28, 52, 54, 58, 61, 64, 65, 75, 78, 84, 91, 92, 92]";
	Search<int> search;
	Sorts<int> sorts;

	sorts.bubbleSort(prueba);
	prueba = original1;

	sorts.selectionSort(prueba);
	prueba = original1;

	sorts.mergeSort(prueba);
	cout<<endl<<endl;

	for (int i =0; i < buscados.size() ; i++){
		int buscado= buscados[i];
		
		int secuencial= search.busqSecuencial(prueba, buscado);
		search.busqBinaria(prueba, buscado) ;
		cout<< endl;
	}

	return 0;
}

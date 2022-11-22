// =================================================================
//
// File: search.h
// Author: Pedro Perez
// Description: This file contains the implementations of the
//				sequential and binary search algorithms.
//
// Copyright (c) 2020 by Tecnologico de Monterrey.
// All Rights Reserved. May be reproduced for any non-commercial
// purpose.
// =================================================================
#ifndef SEARCH_H
#define SEARCH_H

#include "header.h"
#include <vector>

template <class T>
class Search {
    public:
        Search(){};
        // Searching algorithms
        int busqSecuencial(const vector<T> &v, int); //Proceso
        int busqBinaria(const vector<T> &v, int); //Proceso
};

template <class T>
int Search<T>::busqSecuencial(const vector<T> &v, int n) {
	int contadorSS= 0;
	for (int i = 0; i < v.size(); i++) {
		contadorSS++;
		if (v[i] == n) {
			cout<<"Cantidad de comparaciones Busqueda Secuencial: "<< contadorSS<< endl; 
			return i;
		}
	}
	return -1;
}

template <class T>
int Search<T>::busqBinaria(const vector<T> &v, int n) {	
	int low, high, mid, contador;
	low = 0;
	high = v.size() - 1;
	contador = 0;
	while (low <= high) {
		mid = low + ((high - low) / 2); // mid = (high + low) / 2;
		contador++;
		if (n == v[mid]) {
			cout<<"Cantidad de comparaciones Busqueda Binaria: "<< contador << endl; 
			return mid;
		} else if (n < v[mid]) {
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}
	return -1;
}

#endif /* SEARCH_H */

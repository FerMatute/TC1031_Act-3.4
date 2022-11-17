// =================================================================
//
// File: main.cpp
// Author: Alain Vicencio A01620758
// 		   Fernnado Matute A00833375
// 		   Ricardo Navarro A01708825
// 
// Date: 18/11/2022
//
// =================================================================
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int main(int argc, char* argv[]) {

	ifstream input;
    fstream mySolution;

	if (argc != 3){
    	cout<< "Error"<<endl;
    	return -1;
  	}

 	input.open(argv[1]);
 	 if (!input.is_open()){
		cout << "Error al abrir el archivo\n";
		return -1;
  	}

	mySolution.open(argv[2]);

	return 0;
}

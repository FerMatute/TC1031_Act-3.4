// =================================================================
//
// File: main.cpp
// Author: María Fernanda Moreno Gómez
// Date: 25/10/22
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
	
// =================================================================
//
// Arguments to open file 
//
// =================================================================
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

	//Declaration of variables
	int n, listNum, sum, num1, num2, cont=0, res;
	priority_queue<int, vector<int>, greater<int> > number;

	input>>n;
	vector<int>numbers;
	numbers.resize(n);
	mySolution << n;

	input.close();
    mySolution.close();
	/*
	for (int i=0; i<n; i++){
		input>>listNum;
		numbers[i]=listNum;
    }

	for (int i=0;i<numbers.size();i++){
		cin>>numbers[i];
		number.push(numbers[i]);
	}

    while(number.size() != 1) {
    	num1 = number.top(); number.pop();
    	num2 = number.top(); number.pop();
    	res = num1 + num2 - 1;
   	    cont= cont+res;
    	number.push(res);
    }

	mySolution << cont;
	return 0;*/

	/*
	void showpq(priority_queue<int, vector<int>, greater<int> > gq){
		priority_queue<int, vector<int>, greater<int> > g = gq;
		while (!g.empty()){
			cout << '\t' << g.top();
			g.pop();
		}
		cout << '\n';
	}

// Driver Code
	int main(){
		priority_queue<int, vector<int>, greater<int> > gquiz;
		gquiz.push(10);
		gquiz.push(30);
		gquiz.push(20);
		gquiz.push(5);
		gquiz.push(1);

		cout << "The priority queue gquiz is : ";
		showpq(gquiz);

		cout << "\ngquiz.size() : " << gquiz.size();
		cout << "\ngquiz.top() : " << gquiz.top();

		cout << "\ngquiz.pop() : ";
		gquiz.pop();
		showpq(gquiz);

		return 0;
	}
	*/

}


	/*
	int n, cont = 0, a, b, res;
    priority_queue <int, vector <int>, greater <int>> num;
  
    cin >> n;
    vector <int> aux_num;
    aux_num.resize(n);

    // Data push
    for (int i = 0; i < aux_num.size(); i++) {
    cin >> aux_num[i]; 
    num.push(aux_num[i]);
    }

    // Cycle that runs the data and preforms the operations
    while(num.size() != 1) {
    	a = num.top(); num.pop();
    	b = num.top(); num.pop();
    	res = a + b - 1;
   	    cont += res;
    	num.push(res);
    }
  
  	cout << cont << endl;
	return 0;
	*/



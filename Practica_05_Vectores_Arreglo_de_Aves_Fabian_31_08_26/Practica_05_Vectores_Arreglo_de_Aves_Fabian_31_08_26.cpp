#include <iostream>
#include <vector>
using namespace std;

void impr(vector<string> v) {
	for (int i = 0; i < v.size(); i++)
		cout << "Posicion " << i << ":" << v[i] << endl;
}

int main(){
	string n_elm;
	cout << "Arreglo de aves mediante vectores, Practica 05 " << endl;
	vector < string>aves = { "spearow", "farfetch'd", "pidgey" };
	impr(aves);
	cout << "Ingrese un nuevo elemento para el vector: ";
	cin >> n_elm;
	aves.insert(begin(aves)+1,n_elm);
	impr(aves);
	return 0; 
}
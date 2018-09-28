#include <iostream>
#include <string>

using namespace std;


int main(){
	string nome,nome2;


	cin >> nome;

	nome2 = nome.substr(1);

	cout << nome << ", "<<nome<<", bo-";
	if(nome[0] != 'B')
		cout << "b";
	
	cout<<nome2<<endl;
	
	cout << "Banana-fana fo-";
	
	if(nome[0] != 'F')
		cout << "f";
	
	cout <<nome2<<endl;
	cout << "Fee-fi-mo-";
	
	if(nome[0] != 'M')
		cout << "m";
	
	cout <<nome2<<endl;
	cout << nome<<"!\n";



	return 0;
}
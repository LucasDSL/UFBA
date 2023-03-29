#include <iostream>
#include <string>
using namespace std;

//Exercicio 09 de structs 
// feito por Jonas

struct Passagem {
	int numero;
	string data; 
	string hora;
	string origem; 
	string destino; 
	int poltrona;
	int idade;
	string nome;
};

int main() {
	struct Passagem p[44];
  int n;
  cout << "Insira quantas passagens deseja cadastrar ";
  cin >> n; 
	for (int i = 0; i < n; i++) {
    cout << "Nome do passageiro: ";
    cin >> p[i].nome;

		cout << "Numero da passagem: ";
    cin >> p[i].numero;

    cout << "Data da viagem: ";
    cin >> p[i].data;

    cout << "Hora da viagem: ";
    cin >> p[i].hora;

    cout << "Origem da viagem: ";
    cin >> p[i].origem;

    cout << "Destino: ";
    cin >> p[i].destino;

    cout << "Numero da poltrona: ";
    cin >> p[i].poltrona;

    cout << "Idade do passageiro: ";
    cin >> p[i].idade;

    cout << endl;
	}
  int media_idade = 0;
	for (int i = 0; i < n; i++) media_idade += p[i].idade;
  
  media_idade /= n;

	for (int i = 0; i < n; i++) {
		if (p[i].idade > media_idade && p[i].poltrona % 2 == 0) {
    cout << "Nome do passageiro: " << p[i].nome << endl;
    
    cout << "Numero da passagem: " << p[i].numero << endl;

    cout << "Data da viagem: " << p[i].data << endl;

    cout << "Hora da viagem: " << p[i].hora  << endl;

    cout << "Origem da viagem: " << p[i].origem << endl;

    cout << "Destino: " << p[i].destino << endl;

    cout << "Numero da poltrona: " << p[i].poltrona << endl;

    cout << "Idade do passageiro: " << p[i].idade << endl;
    cout << endl; 
    }
	}
}

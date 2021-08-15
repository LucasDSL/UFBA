#include<iostream>
#include<string>
using namespace std;
int main(){
    string string_passada;
    getline(cin, string_passada);
    int vogais = 0, consoantes = 0;
    for(int letra = 0; letra < string_passada.length(); letra++){
        if(string_passada[letra] == 'a' || string_passada[letra] == 'A'
        || string_passada[letra] == 'e' || string_passada[letra] == 'E'
        || string_passada[letra] == 'i' || string_passada[letra] == 'I'
        || string_passada[letra] == 'o' || string_passada[letra] == 'O'
        || string_passada[letra] == 'u' || string_passada[letra] == 'U'){
            vogais++;
        }
        else if (string_passada[letra] == ' '){
            consoantes = consoantes;
        }
        else{
            consoantes++;
        }
    }
    cout << "Vogais:" << vogais << endl;
    cout << "Consoantes:" << consoantes << endl;
}
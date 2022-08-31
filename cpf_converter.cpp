#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>
#include <locale.h>

using namespace std;
int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int qtd_cpf,i,j;
	string cpf,cpf_num,num,lista;
	
	cout << "Digite o numero de CPFs que você deseja transformar: ";
	cin >> qtd_cpf;
	
	for (i=0;i<qtd_cpf;i++) {
		cout << "Digite um CPF: ";
		cin >> cpf;
		cpf_num = "";
		
		for (j=0;j<=15;j++) {
			num = cpf[j];
			if ((num == ".") || (num == "-")) {
				cpf_num = cpf_num + "";
			} else {
				cpf_num = cpf_num + num;
			}
		}
		lista = lista + "\n" + cpf_num;
	}
	cout << lista;
}

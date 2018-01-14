
/*

Programa em C++ que resolve fatoriais de acordo numero digitado pelo usuario
utilizando uma funcao recursiva.

Aluno: Lucas Batista
28-07-2017

*/

//Utilizando vairavel do tipo int o retorno sera limitado ao fatorial de 16,
//por este motivo e bom usar double


#include<iostream>		//chama a biblioteca iostream
using namespace std;		//para se dar prioridade as palavras reservadas da biblioteca


int fat(int x); //Prototipo da funao

int main(){

	int n;

	do{
		cout<<"\nDigite um numero: [   ]\b\b\b";
		cin>>n;
		cout<<"\nFatorial de " <<n<< " = " <<fat(n)<< "\n";

	}while(n>=0);

	cout<<"\n\n";
	return 0;
}

int fat(int x){

	//***IMPORTANTE*** necessario saber que tanto fatorial de 0 quando de 1 = 1

	if(x==0)
		return 1;
	else
		return x * fat(x-1);
}

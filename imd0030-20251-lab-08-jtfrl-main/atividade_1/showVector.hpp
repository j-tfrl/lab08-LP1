/*
Permita que o usuário digite uma sequência de números inteiros positivos 
(digitar qualquer número negativo encerra a entrada).

Exiba:
A quantidade de números digitados.
A média dos valores.
O menor e o maior valor.
Exiba os números em ordem crescente.
Permita que o usuário pesquise um único número e informe se ele está na lista.
Encerre o programa.

*/
#include <vector>
#include <iostream>

class sVetor{
    std::vector<int> dados; //apenas inteiros
    int soma; //variaveis para obter média
    //usar size para obter tam

    public:
    sVetor(): dados({0}){}

    sVetor (std::vector<int> dados): dados(dados){ //usa o próprio atributo
        //implementação
    }

    ~sVetor(){
        dados.clear();
    }

    void inVetor(int v){
        std::cout<
    }



    

}
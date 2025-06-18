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

::>OBS:
IMPORTANTE! Deve ser incluído um Makefile, no diretório da atividade (/atividade_1), 
que ao executar make gere um binário chamado estatistica.


*/
#include <vector>
#include <iostream>
#include <iomanip>

class sVetor{
    std::vector<int> dados; //apenas inteiros
    int soma=0; //variaveis para obter média
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
        std::cout<<"Digite números inteiros (-1 para sair): "<<std::endl;
        std::cin>>v;
        if(v!=-1 && v>0){
            dados.push_back(v);
        }else if(v==-1){
            contaV(dados);
            avV(dados);
            std::vector<int> dadosNovo=bbsort(dados);
            std::cout<<"Menor valor: "<<dadosNovo[0];
            std::cout<<"Maior valor: "<<dadosNovo[dadosNovo.size()-1]<<std::endl;
            //std::cout<<"Vetor ordendado: "<<bbsort(dados); necessário sobrecarregar

        }
    }

    void contaV(std::vector<int> dados){
        std::cout<<"Quantidade de números: "<<dados.size()<<std::endl;
    }

    void avV(std::vector<int> dados){
        for(int i=0; i<dados.size(); i++){
            soma+=dados[i];
        }
        double media=soma/dados.size();
        std::cout<<"Média: "<<media<<std::endl;
    }

    std::vector<int> bbsort(std::vector<int> dados){
        int tam=dados.size();
        for(int i=0; i<tam-1; i++){
            for(int j=0;j<tam-1-i; j++){
                if(v[j+1]<dados[j]){
                    int t=dados[j];
                    dados[j]=dados[j+1];
                    dados[j+1]=t;
                }
            }
        }
        return dados;
    }

    


    

};
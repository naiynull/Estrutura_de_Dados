#include "orientada.h"

void orientada::gerarvetoraleatorio(){
    for(int i=0; i<18; i++){
        int n;
        do{
            n=rand()%100+1;
        }while(n%2!=0);
            vetpar[i]=n;
        do{
            n=rand()%100+1;
        }while(n%2==0);
            vetimpar[i]=n;
    }
};
void orientada::exibirnormal(){
    std::cout<<"Vetor de numeros pares: "<<std::endl;
    for(int i=0; i<18; i++){
        std::cout<<vetpar[i]<<" ";
    }
    std::cout<<""<<std::endl;
    std::cout<<"Vetor de numeros impares: "<<std::endl;
    for(int i=0; i<18; i++){
        std::cout<<vetimpar[i]<<" ";
    }
    std::cout<<""<<std::endl;
};
void orientada::ordenavetor(){
    int aux;
    for(int i=0; i<18; i++){
        for( int j=0; j<(18-1) ; j++){
            if(vetpar[j]>vetpar[j+1]){
                aux=vetpar[j];
                vetpar[j]=vetpar[j+1];
                vetpar[j+1]=aux;
            }
        }
    }
    for(int i=0; i<18; i++){
        for( int j=0; j<(18-1) ; j++){
            if(vetimpar[j]>vetimpar[j+1]){
                aux=vetimpar[j];
                vetimpar[j]=vetimpar[j+1];
                vetimpar[j+1]=aux;
            }
        }
    }
};
void orientada::exibir(){
    std::cout<<"Vetor de numeros pares ordenados: "<<std::endl;
    for(int i=0; i<18; i++){
        std::cout<<vetpar[i]<<" ";
    }
    std::cout<<""<<std::endl;
    std::cout<<"Vetor de numeros impares ordenados: "<<std::endl;
    for(int i=0; i<18; i++){
        std::cout<<vetimpar[i]<<" ";
    }
    std::cout<<""<<std::endl;
};
void orientada::ordemcrescente(){
    int par=0, impar=0;
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            if(par<18 && impar<18){
                if(vetpar[par]<vetimpar[impar]){
                    m[i][j]=vetpar[par];
                    par++;
                }else{
                    m[i][j]=vetimpar[impar];
                    impar++;
                }
            }else{
                if(par==18){
                    m[i][j]=vetimpar[impar];
                    impar++;
                }else{
                    m[i][j]=vetpar[par];
                    par++;
                }
            }
        }
    }
};
void orientada::matrizvetor(){
    std::cout<<"Matriz: "<<std::endl;
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            std::cout<<m[i][j]<<" "<<"\t";
        }
    }
};

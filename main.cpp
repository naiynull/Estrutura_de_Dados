#include <iostream>
#include "orientada.h"
#include <time.h>
using namespace std;

int main(){
srand(time(NULL));
orientada O;
    int i, j, n, aux;
     int vet[18];
        int m[6][6];
         int par, impar;
        O.gerarvetoraleatorio();
        O.exibirnormal();
        O.ordenavetor();
        O.exibir();
        O.ordemcrescente();
        O.matrizvetor();
}




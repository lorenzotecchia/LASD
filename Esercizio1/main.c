/*Dato un heap H (di interi) rappresentato con vettore statico, scrivere una procedura che, 
in tempo logaritmico, presi in input H e un valore numerico v presente in H (con relativo 
indice di posizione di v nel vettore), rimuova v da H, mantenendo la proprietà di heap.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

void funzione(int *H, int v, int indice){
    
}

int main(){
    srand(time(NULL));
    int H[MAX]={42, 37, 40, 25, 20, 3, 20, 7, 18, 1};
    int i=(rand() % (MAX));
    int v=H[i];

    funzione(H, v, i);


}
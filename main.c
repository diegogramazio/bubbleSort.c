#include <stdio.h>
/* funzione che scambia le posizioni di due elementi */
void scambia(int *array, int i, int j)  {
       int temp = array[i];
       array[i] = array[j];
       array[j] = temp;
}
/* funzione che implementa bubble sort */
void bubbleSort(int *array, int n) {
        int scambioFatto = 1;             // l'ultima passata ha cambiato qualcosa?
        // inizializzarla a 1 serve solo per entrare la prima volta nel ciclo while
        int nonOrdinato = n-1;           // ultimo elemento non ordinato
        /* prosegui fino a che fai passate valide o non ne hai fatte n-1 */
        while(nonOrdinato>0 && scambioFatto) {
               scambioFatto = 0;
               /* fai una passata */
               for(int j=0;j<=nonOrdinato-1;j++)
                       if(array[j+1]<array[j]) {
                               scambia(array,j,j+1);
                               scambioFatto = 1;
                       }
              nonOrdinato--;           //hai ordinato <lmeno un elemento
        }
}
/* funzione principale */
int main() {
         int array[] = {2,4,6,-1,-7,-4,8,9,-6};
         bubbleSort(array,9);
         for(int i=0;i<9;i++){
               printf("%d ",array[i]);
           }
           system("PAUSE");
}

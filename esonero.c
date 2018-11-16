#include<stdio.h>
int main() {

int i , d , n ;
printf("Inserisci il numero di giorni che Rosco deve prevedere   \n" );
scanf("%d", &n );
printf("Inserisci il numero di azioni che desideri acquistare  \n" );
scanf("%d", &d );
int a[n]  ;
for ( i = 0; i < n ; i++) {
  printf("Inserisci il valore delle azioni del giorno %d \n", i );
  scanf("%d", &a[i] );
}
int  c=0 ,acq,ven,diff=0, max=-6666 ;
for ( i = 0; i < n-1 ; i++) {

      for (c = i+1 ; c < n; c++) {
   diff= a[c]-a[i] ;
   if (diff>=max ) {
     max=diff;
     acq=i ;
     ven = c ;

   }
}
}
if (max>0) {
  printf("Dato che le azioni reggiungeranno un minimo di : %d\n ,dovresti comprare nella mattinata del giorno %d  , investendo %d dollari\n ",a[acq] ,acq+1,d*a[acq] );
  printf("Il giorno %d ,dovresti vendere a: %d dollari, dato che le azioni raggiungeranno il valore massimo di : %d\n ottenenendo dunque una plusvalenza di %d dollari\n",ven,d*a[ven],a[ven],(d*a[ven])-(d*a[acq]));
} else {
  printf("Non devi comprare ! \n" );
}
return 0;
}


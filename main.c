#include <stdio.h>

int main(void) {
        int quantita;
        float prezzo, totale, totaleS, sconto;
        printf("Inserisci il numero di prodotti acquistati: ");
        scanf("%d", &quantita);
        printf("Inserisci il prezzo del prodotto: ");
        scanf("%f", &prezzo);
        totale = quantita * prezzo;
        if (totale > 50) {
            sconto = 0.20;
        } else if(totale > 10) {
            sconto = 0.10;
        }
        totaleS = totale * (1 - sconto);
        printf("Totale: %f \n", totale);
        printf("Sconto applicato: %f \n", sconto * 100);
        printf("Totale scontato: %f  ", totaleS);

        return 0;
}

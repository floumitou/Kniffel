#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

bool spiel=true;



//Kompletter Würfelvorgang (3 mal würfeln und beliebige behalten)
void wuerfeln(){
    int wuerfe[6];
    bool behalten[6];
    //Initialisierung
    for(int i=0;i<5;i++){
        behalten[i]=false;
    }

    for(int durchgang=1; durchgang <= 3 ; durchgang++) {
        //Würfeln und Würfe ausgeben
        for (int i = 0; i < 5; i++) {
            if (!behalten[i]) {
                int zahl = (rand() % 6) + 1;
                wuerfe[i] = zahl;
            };
            printf("   %d   ", wuerfe[i]);
        }
        printf("\n\n\n");

        //Überprüfen welche Würfel behalten werden
        for (int i = 0; i < 5; i++) {
            if (!behalten[i]) {
                char c;
                do {
                    printf("Würfel %d: %d  |  Behalten ?(j/n)\n\n", i + 1, wuerfe[i]);
                    c = getchar();
                } while (c != 'j' && c != 'J' && c != 'n' && c != 'N');
                if (c == 'j' || c == 'J') {
                    behalten[i] = true;
                } else if (c == 'n' || c == 'N') {
                    //
                } else { printf("Fehler"); };
            }

        }
        printf("\n");
    }
    return;
}


//geht den Spielvorgang jede Runde durch.
void spielVorgang(){
    while(spiel==true){
        //TODO: Spielvorgang durchlaufen
        wuerfeln();

        spiel = false;
    }
}


int main() {
    srand(time(NULL));

    spielVorgang();
}

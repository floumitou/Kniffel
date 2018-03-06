#include <stdio.h>
#include <stdbool.h>
#include <tgmath.h>
#include <time.h>
#include <stdlib.h>
#include <memory.h>

bool spiel=true;

bool checkSpielVorbei(){
    //TODO: Check Bedingungen ob Spiel vorbei
    return false;
}

//geht den Spielvorgang jede Runde durch.
void spielVorgang(){
    while(spiel==true){
        //TODO: Spielvorgang durchlaufen
        spiel = checkSpielVorbei();
    }}

int *wuerfelWurf(int uebrigeWuerfel, int wurf){

    srand(time(NULL));
    char auswahlLett [5]= {'a','b','c','d','e'};
    int randomDice[uebrigeWuerfel];
    for (int i = 0; i < uebrigeWuerfel ; i++) {

        randomDice[i] = (rand() % 6) + 1;
        printf("Würfel %c: %d\n", auswahlLett[i], randomDice[i] );
    }

    return randomDice;
}


char *wuerfelMitnahme(int *gewürfelte, int *mitgenommene, int uebrigeWuerfel) {
    //int *gut = (int *) malloc(20);
    int *gut =*gewürfelte;
    char choices[5];
    printf("%d dasd der", gewürfelte[1]);
    int letters [5]={0,0,0,0,0};                    //jeder Buchstabe nur einmal array
    printf("Schreibe Buchstaben der Würfel direkt hintereinander\n");
    printf("%d", gut[0]);
    scanf("%s", choices);

    int lange = strlen(choices);
    printf("%d", lange);

    printf("%c", choices[0]);

    if (lange<=uebrigeWuerfel){                      //Überprüfung nicht mehr würfel mitnehmen als übrig
        for (int i = 0; i <= lange ; i++) {
            switch (choices[i]){
                case 'a':
                    if (letters[0]<1) {
                        printf("doom");
                        printf("guten tag: %d schalme", gut[0]);
                        mitgenommene[i] = gewürfelte[0];
                        letters[0]++;
                    }
                    break;

                case 'b':
                    if (letters[1]<1) {
                        printf("%d", gut[1]);
                        mitgenommene[i] = gewürfelte[1];
                        letters[1]++;
                    }
                    break;

                case 'c':
                    if (letters[2]<1) {
                        mitgenommene[i] = gewürfelte[2];
                        letters[2]++;
                    }
                    break;

                case 'd':
                    if (letters[3]<1) {
                        mitgenommene[i] = gewürfelte[3];
                        letters[3]++;
                    }
                    break;

                case 'e':
                    if (letters[4]<1) {
                        mitgenommene[i] = gewürfelte[4];
                        letters[4]++;
                    }
                    break;


            }
        }
    }

    return choices;
}




int main() {
    srand(time(NULL));
    int mitgenommen [5];
    int wurf=1;
    char wuerfeln;

    //int *p=wuerfelWurf(5,1);
    wuerfelMitnahme(wuerfelWurf(5,1), mitgenommen, 5);



   //printf("doofmann: %d", p[0]);



}

#include <stdio.h>
#include <stdbool.h>

bool spiel=true;


int main() {
    spielVorgang();
}

//returnt false, falls das Spiel vorbei ist. Sonst true.
bool checkSpielVorbei(){
    //TODO: Check Bedingungen ob Spiel vorbei
    return false;
}

//geht den Spielvorgang jede Runde durch.
void spielVorgang(){
    while(spiel==true){
        //TODO: Spielvorgang durchlaufen
        spiel = checkSpielVorbei();
    }
}

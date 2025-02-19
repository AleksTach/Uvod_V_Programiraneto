#include <stdio.h>

// Funktsiya za proverka dali godinata e visokosna
int e_visokosna(int godina) {
    if ((godina % 4 == 0 && godina % 100 != 0) || (godina % 400 == 0)) {
        return 1; // Visokosna godina
    }
    return 0; // Ne e visokosna godina
}

// Funktsiya za izchislyavane na poredniya den v godinata
int poredni_den(int den, int mesec, int godina) {
    int dni_v_mesecite[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Proverka za visokosna godina
    if (e_visokosna(godina)) {
        dni_v_mesecite[1] = 29; // Fevruari ima 29 dni
    }

    // Sumarirane na dni ot predhodnite mesetsi
    int obshto_dni = 0;
    for (int i = 0; i < mesec - 1; i++) {
        obshto_dni += dni_v_mesecite[i];
    }

    // Dobavyane na dni ot tekushtiya mesec
    obshto_dni += den;

    return obshto_dni;
}

int main() {
    int den, mesec, godina;

    // Vavezhdane na data ot potrebitelya
    printf("Vuvedete den: ");
    scanf("%d", &den);
    printf("Vuvedete mesec: ");
    scanf("%d", &mesec);
    printf("Vuvedete godina: ");
    scanf("%d", &godina);

    // Izchislyavane na poredniya den
    int rezultat = poredni_den(den, mesec, godina);

    // Izvejdane na rezultata
    printf("Den %d.%d.%d e %d-iyat den v godinata.\n", den, mesec, godina, rezultat);

    return 0;
}

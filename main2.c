#include <stdio.h>

typedef struct {
    char nazov[50];
    double cena;
    int pocet;
} Produkt;

int main() {
    Produkt produkty[3];
    double celkova_cena = 0.0;

    printf("=== ZADÁVANIE POLOŽIEK NÁKUPU ===\n\n");
    for (int i = 0; i < 3; i++) {
        printf("Produkt %d:\n", i + 1);
        
        printf("  Názov: ");
        scanf(" %49[^\n]", produkty[i].nazov);
        
        printf("  Cena za kus (€): ");
        scanf("%lf", &produkty[i].cena);
        
        printf("  Počet kusov: ");
        scanf(" %d", &produkty[i].pocet);
        
        printf("\n");
    }

    printf("=================================\n");
    printf("         ZHRNUTIE NÁKUPU         \n");
    printf("=================================\n");

    for (int i = 0; i < 3; i++) {
        double spolu_za_produkt = produkty[i].cena * produkty[i].pocet;
        celkova_cena += spolu_za_produkt;

        printf("%d. %s\n", i + 1, produkty[i].nazov);
        printf("   %d ks x %.2f € = %.2f €\n", produkty[i].pocet, produkty[i].cena, spolu_za_produkt);
    }

    printf("---------------------------------\n");
    printf("Celková cena: %.2f €\n", celkova_cena);

    if (celkova_cena > 50.0) {
        double zlava = celkova_cena * 0.10;
        double vysledna_cena = celkova_cena - zlava;

        printf("\nGratulujeme! Získali ste zľavu 10 %% za nákup nad 50 €.\n");
        printf("Výška zľavy: -%.2f €\n", zlava);
        printf("Výsledná cena po zľave: %.2f €\n", vysledna_cena);
    }

    return 0;
}

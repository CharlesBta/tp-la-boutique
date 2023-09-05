#include <stdio.h>

int main() {
    int applePrice = 100;
    int sodaPrice = 200;
    int cakePrice = 400;
    int selectedPrice;
    char chose;

    printf("Quel produit voulez vous? p,s ou g: ");
    scanf("%c", &chose);

    if(chose == 'p'){
        selectedPrice = applePrice;
    }
    if(chose == 's'){
        selectedPrice = sodaPrice;
    }
    if(chose == 'g'){
        selectedPrice = cakePrice;
    }
    if(chose != 'p' && chose != 's' && chose != 'g'){
        printf("Erreur");
        return 0;
    }
    selectedPrice = selectedPrice*1.20;
    printf("%d",selectedPrice);
    return 0;
}

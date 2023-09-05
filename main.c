#include <stdio.h>

int main() {
    int applePrice = 100;
    int sodaPrice = 200;
    int cakePrice = 400;
    int selectedPrice;
    char choose;

    printf("Quel produit voulez vous? p,s ou g: ");
    scanf("%c", &choose);

    if(choose == 'p'){
        selectedPrice = applePrice;
    }
    if(choose == 's'){
        selectedPrice = sodaPrice;
    }
    if(choose == 'g'){
        selectedPrice = cakePrice;
    }
    if(choose != 'p' && choose != 's' && choose != 'g'){
        printf("Erreur");
        return 0;
    }
    selectedPrice = selectedPrice*1.20;
    printf("%d",selectedPrice);
    return 0;
}

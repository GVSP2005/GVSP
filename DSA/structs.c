#include <stdio.h>
#include <string.h>
typedef struct polynomial{
    unsigned int degree;//we are using unsigned because degree is +ve for polynomial.
    //int coeff[degree+1]; this doesn't work because we don't know degree;
    //so here we have to use dynamic memory allocation
    int *a;
}polynomial;
typedef struct cards{
    char *face;
    char *suit;

}card;
int main(){
    card card1;
    //card1={"Ace","Heart"}; you can't do like this it should be done at initialisation or do by variable access
    card1.face="Ace";
    card1.suit="Heart";
    card *card2;
    card2=(card*)(malloc(sizeof(card*)));//we can give card card3;card2=&card3;
    card2->suit="Spade";
    card2->face-"Two";
    
}
#include <stdio.h>

int main(void) {
    int giorno1, mese1, anno1, giorno2, mese2, anno2, differenza;
    printf("inserire la prima data: ");
    scanf("%d %d %d", &giorno1, &mese1, &anno1);
    printf("inserire la secona data: ");
    scanf("%d %d %d", &giorno2, &mese2, &anno2);
    differenza = giorno2 - giorno1 + (mese2 - mese1) * 30 + (anno2 - anno1) * 360;
    giorno1 = differenza % 30;
    mese1 = (differenza / 30) % 12;
    anno1 = differenza/360;
    printf("la differenza tra le due date è: %d giorni, %d mesi, %d anni", giorno1, mese1, anno1);
    return 0;
}

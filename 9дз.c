#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    char ch;
    int h, b1, b2;
    do {
        printf("Ââåäèòå ñèìâîë: ");
        scanf(" %c", &ch);

        printf("Ââåäèòå âûñîòó: ");
        scanf("%d", &h);

        printf("Ââåäèòå äëèíó âåðõíåé îñíîâû: ");
        scanf("%d", &b1);

        printf("Ââåäèòå äëèíó íèæíåé îñíîâû: ");
        scanf("%d", &b2);

        printf("\nÏðÿìîóãîëüíàÿ òðàïåöèÿ:\n");

        int diff = (b2 - b1) / (h - 1);

        for (int i = 0; i < h; i++) 
        {
            for (int j = 0; j < b1 + diff * i; j++) 
            {
                printf("%c", ch);
            }
            printf("\n");
        }

        printf("\nÏðîäîëæèòü? (0 - íåò, 1 - äà): ");
        int cont;
        scanf("%d", &cont);
        if (cont == 0) break;
    } while (1);

    return 0;
}

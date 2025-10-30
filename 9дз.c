#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    char ch;
    int h, b1, b2;
    do {
        printf("Введите символ: ");
        scanf(" %c", &ch);

        printf("Введите высоту: ");
        scanf("%d", &h);

        printf("Введите длину верхней основы: ");
        scanf("%d", &b1);

        printf("Введите длину нижней основы: ");
        scanf("%d", &b2);

        printf("\nПрямоугольная трапеция:\n");

        int diff = (b2 - b1) / (h - 1);

        for (int i = 0; i < h; i++) 
        {
            for (int j = 0; j < b1 + diff * i; j++) 
            {
                printf("%c", ch);
            }
            printf("\n");
        }

        printf("\nПродолжить? (0 - нет, 1 - да): ");
        int cont;
        scanf("%d", &cont);
        if (cont == 0) break;
    } while (1);

    return 0;
}

#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    char ch;
    int h, b1, b2;
    do {
        printf("������� ������: ");
        scanf(" %c", &ch);

        printf("������� ������: ");
        scanf("%d", &h);

        printf("������� ����� ������� ������: ");
        scanf("%d", &b1);

        printf("������� ����� ������ ������: ");
        scanf("%d", &b2);

        printf("\n������������� ��������:\n");

        int diff = (b2 - b1) / (h - 1);

        for (int i = 0; i < h; i++) 
        {
            for (int j = 0; j < b1 + diff * i; j++) 
            {
                printf("%c", ch);
            }
            printf("\n");
        }

        printf("\n����������? (0 - ���, 1 - ��): ");
        int cont;
        scanf("%d", &cont);
        if (cont == 0) break;
    } while (1);

    return 0;
}

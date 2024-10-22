#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define TEAMS 8
#define STATS 5

void Table(int table[TEAMS][STATS]) {
    printf("Команда\tВыигранные эндов\tПроигранные эндов\tЗабитые камни\tВыбитые камни противника\tНеудачные броски \n");
    for (int i = 0; i < TEAMS; i++) {
        printf("%d\t", i + 1);
        for (int j = 0; j < STATS; j++) {
            printf("%d\t\t", table[i][j]);
        }
        printf("\n");
    }
}

int main() {
    setlocale(LC_CTYPE, "RUS");

    int table[TEAMS][STATS] = { 0 };


    for (int i = 0; i < TEAMS; i++) {
        printf("Введите данные для команды %d:\n", i + 1);
        printf("Количество выигранных эндов: ");
        scanf("%d", &table[i][0]);
        printf("Количество проигранных эндов: ");
        scanf("%d", &table[i][1]);
        printf("Количество забитых камней: ");
        scanf("%d", &table[i][2]);
        printf("Количество выбитых камней противника: ");
        scanf("%d", &table[i][3]);
        printf("Количество неудачных бросков: ");
        scanf("%d", &table[i][4]);
        printf("\n");
    }

    Table(table);

    return 0;
}
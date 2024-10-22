#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define TEAMS 8
#define STATS 5

void Table(int table[TEAMS][STATS]) {
    printf("�������\t���������� �����\t����������� �����\t������� �����\t������� ����� ����������\t��������� ������ \n");
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
        printf("������� ������ ��� ������� %d:\n", i + 1);
        printf("���������� ���������� �����: ");
        scanf("%d", &table[i][0]);
        printf("���������� ����������� �����: ");
        scanf("%d", &table[i][1]);
        printf("���������� ������� ������: ");
        scanf("%d", &table[i][2]);
        printf("���������� ������� ������ ����������: ");
        scanf("%d", &table[i][3]);
        printf("���������� ��������� �������: ");
        scanf("%d", &table[i][4]);
        printf("\n");
    }

    Table(table);

    return 0;
}
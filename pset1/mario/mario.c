#include <stdio.h>
#include <cs50.h>
// Функция повтора написания одинакового символа
void repeat(int t, char s) {
    while (--t >= 0) {
        printf("%c", s);
    }
}

int main() {
    int height, width;
    // Повторный ввод при нерпавильных данных
    do {
        height = get_int("Height: ");
        width = height;
    } while (height < 1 || height >= 9);
    // Построение лестницы
    for (int i = 1; i <= height; i++)
    {
        int num_hashes = i;
        int num_spaces = width - num_hashes;

        repeat(num_spaces, ' ');
        repeat(num_hashes, '#');

        printf("\n");
    }
}
#include <stdio.h>
#include <string.h>

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    char word[15];
    printf("Введіть слово: ");
    scanf("%s", word);
    int length = strlen(word);
    int count[26] = {0};
    for (int i = 0; i < length; i++) {
        count[word[i] - 'A']++;
    }
    long long result = factorial(length);
    for (int i = 0; i < 26; i++) {
        result /= factorial(count[i]);
    }
    printf("Кількість анаграм: %lld\n", result);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_LENGTH 7 // 6 caracteres + 1 para o caractere nulo

// Fun��o para gerar uma letra aleat�ria
char random_char() {
    return 'a' + rand() % 26;
}

// Fun��o para gerar uma string aleat�ria
void generate_random_string(char *str, int length) {
	int i;
    for (i = 0; i < length; i++) {
        str[i] = random_char();
    }
    str[length] = '\0'; // Adiciona o terminador nulo no final da string
}

// Fun��o para comparar duas strings de comprimento conhecido
int compare_strings(const char *str1, const char *str2, int length) {
	int i;
    for (i = 0; i < length; i++) {
        if (str1[i] != str2[i]) {
            return 0; // As strings s�o diferentes
        }
    }
    return 1; // As strings s�o iguais
}

int main() {
    char word[MAX_LENGTH]; // +1 para o caractere nulo
    char target[MAX_LENGTH]; // +1 para o caractere nulo
    int iterations = 0; // Vari�vel para contar o n�mero de itera��es

    srand((unsigned)time(NULL));

    printf("Digite uma palavra: ");
    fgets(target, sizeof(target), stdin);
    target[strcspn(target, "\n")] = '\0'; // Remove o caractere de nova linha, se houver

    // Loop principal para gerar e comparar as palavras
    while (1) {
        generate_random_string(word, strlen(target));
        iterations++; // Incrementa o n�mero de itera��es

        // Verifica se a palavra gerada � igual � palavra alvo
        if (compare_strings(word, target, strlen(target))) {
            break; // Palavra encontrada, sai do loop
        }
    }

    printf("Palavra encontrada: %s\n", word);
    printf("N�mero de itera��es: %d\n", iterations);

    return 0;
}


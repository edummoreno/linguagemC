#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_LENGTH 7 // 6 caracteres + 1 para o caractere nulo

// Função para gerar uma letra aleatória
char random_char() {
    return 'a' + rand() % 26;
}

// Função para gerar uma string aleatória
void generate_random_string(char *str, int length) {
	int i;
    for (i = 0; i < length; i++) {
        str[i] = random_char();
    }
    str[length] = '\0'; // Adiciona o terminador nulo no final da string
}

// Função para comparar duas strings de comprimento conhecido
int compare_strings(const char *str1, const char *str2, int length) {
	int i;
    for (i = 0; i < length; i++) {
        if (str1[i] != str2[i]) {
            return 0; // As strings são diferentes
        }
    }
    return 1; // As strings são iguais
}

int main() {
    char word[MAX_LENGTH]; // +1 para o caractere nulo
    char target[MAX_LENGTH]; // +1 para o caractere nulo
    int iterations = 0; // Variável para contar o número de iterações

    srand((unsigned)time(NULL));

    printf("Digite uma palavra: ");
    fgets(target, sizeof(target), stdin);
    target[strcspn(target, "\n")] = '\0'; // Remove o caractere de nova linha, se houver

    // Loop principal para gerar e comparar as palavras
    while (1) {
        generate_random_string(word, strlen(target));
        iterations++; // Incrementa o número de iterações

        // Verifica se a palavra gerada é igual à palavra alvo
        if (compare_strings(word, target, strlen(target))) {
            break; // Palavra encontrada, sai do loop
        }
    }

    printf("Palavra encontrada: %s\n", word);
    printf("Número de iterações: %d\n", iterations);

    return 0;
}


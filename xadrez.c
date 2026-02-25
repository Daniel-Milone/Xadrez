#include <stdio.h>

// Função recursiva para simular o movimento da Torre: 5 casas para a direita
void moverTorreRecursivo(int casasRestantes) {
    // Caso base: se não houver mais casas para mover, para a recursão
    if (casasRestantes <= 0) {
        return;
    }
    // Imprime a direção do movimento
    printf("Direita\n");
    // Chamada recursiva reduzindo o número de casas
    moverTorreRecursivo(casasRestantes - 1);
}

// Função recursiva para simular o movimento do Bispo: 5 casas na diagonal cima-direita
void moverBispoRecursivo(int casasRestantes) {
    // Caso base: se não houver mais casas para mover, para a recursão
    if (casasRestantes <= 0) {
        return;
    }
    // Imprime a direção combinada para diagonal
    printf("Cima, Direita\n");
    // Chamada recursiva reduzindo o número de casas
    moverBispoRecursivo(casasRestantes - 1);
}

// Função com loops aninhados para simular o movimento do Bispo: 5 casas na diagonal cima-direita
// Loop externo controla o componente vertical, interno o horizontal, imprimindo apenas na diagonal
void moverBispoLoopsAninhados(int casas) {
    int vertical;
    // Loop externo para o movimento vertical (cima)
    for (vertical = 1; vertical <= casas; vertical++) {
        int horizontal = 1;
        // Loop interno para o movimento horizontal (direita)
        while (horizontal <= casas) {
            // Imprime apenas quando vertical e horizontal coincidem, simulando diagonal
            if (horizontal == vertical) {
                printf("Cima, Direita\n");
            }
            horizontal++;
        }
    }
}

// Função recursiva para simular o movimento da Rainha: 8 casas para a esquerda
void moverRainhaRecursivo(int casasRestantes) {
    // Caso base: se não houver mais casas para mover, para a recursão
    if (casasRestantes <= 0) {
        return;
    }
    // Imprime a direção do movimento
    printf("Esquerda\n");
    // Chamada recursiva reduzindo o número de casas
    moverRainhaRecursivo(casasRestantes - 1);
}

// Função com loops aninhados complexos para simular o movimento do Cavalo em "L"
// Movimento: 2 casas para cima e 1 para a direita, usando múltiplas variáveis e condições
void moverCavaloComplexo() {
    int passosVerticais = 2;  // Número de passos verticais (cima)
    int passosHorizontais = 1;  // Número de passos horizontais (direita)
    int contadorVertical = 0;
    int contadorHorizontal = 0;

    // Loop externo: controla os passos verticais com for
    for (contadorVertical = 1; contadorVertical <= passosVerticais; contadorVertical++) {
        // Imprime o movimento vertical
        printf("Cima\n");
        
        // Condição para continuar ou pular (exemplo de uso de continue)
        if (contadorVertical < passosVerticais) {
            continue;  // Continua para o próximo passo vertical sem entrar no horizontal
        }
        
        // Após os verticais, inicia o loop interno para horizontal com while e múltiplas condições
        contadorHorizontal = 1;
        while (contadorHorizontal <= passosHorizontais && contadorHorizontal > 0) {
            // Imprime o movimento horizontal
            printf("Direita\n");
            contadorHorizontal++;
            
            // Exemplo de break para controlar o fluxo (sai após o único passo necessário)
            if (contadorHorizontal > passosHorizontais) {
                break;
            }
        }
    }
}

int main() {
    // Variáveis para definir o número de casas (definidas diretamente no código)
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // Simulação do movimento da Torre usando recursividade
    moverTorreRecursivo(casasTorre);
    printf("\n");

    // Simulação do movimento do Bispo usando recursividade
    moverBispoRecursivo(casasBispo);
    printf("\n");

    // Simulação do movimento do Bispo usando loops aninhados (requisito adicional)
    moverBispoLoopsAninhados(casasBispo);
    printf("\n");

    // Simulação do movimento da Rainha usando recursividade
    moverRainhaRecursivo(casasRainha);
    printf("\n");

    // Simulação do movimento do Cavalo usando loops aninhados complexos
    moverCavaloComplexo();
    printf("\n");

    return 0;
}
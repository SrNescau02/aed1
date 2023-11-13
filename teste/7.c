#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para representar o país e suas medalhas
typedef struct {
    char nome[50];
    int ouro, prata, bronze;
} Pais;

// Função para comparar dois países para fins de ordenação
int comparar_paises(const void *a, const void *b) {
    const Pais *pais1 = (Pais *)a;
    const Pais *pais2 = (Pais *)b;
    
    if (pais1->ouro != pais2->ouro) {
        return pais2->ouro - pais1->ouro;
    } else if (pais1->prata != pais2->prata) {
        return pais2->prata - pais1->prata;
    } else if (pais1->bronze != pais2->bronze) {
        return pais2->bronze - pais1->bronze;
    } else {
        return strcmp(pais1->nome, pais2->nome);
    }
}

int main() {
    Pais paises[300]; // No máximo 300 países
    int num_paises = 0;
    
    char descricao[100];
    
    while (fgets(descricao, sizeof(descricao), stdin) != NULL) {
        // Remove a quebra de linha do final da descrição
        descricao[strcspn(descricao, "\n")] = '\0';
        
        fgets(paises[num_paises].nome, sizeof(paises[num_paises].nome), stdin);
        paises[num_paises].nome[strcspn(paises[num_paises].nome, "\n")] = '\0';
        
        fgets(paises[num_paises + 1].nome, sizeof(paises[num_paises + 1].nome), stdin);
        paises[num_paises + 1].nome[strcspn(paises[num_paises + 1].nome, "\n")] = '\0';
        
        fgets(paises[num_paises + 2].nome, sizeof(paises[num_paises + 2].nome), stdin);
        paises[num_paises + 2].nome[strcspn(paises[num_paises + 2].nome, "\n")] = '\0';
        
        // Atualiza as medalhas para os países
        paises[num_paises].ouro++;
        paises[num_paises + 1].prata++;
        paises[num_paises + 2].bronze++;
        
        num_paises += 3;
    }
    
    // Ordena os países
    qsort(paises, num_paises, sizeof(Pais), comparar_paises);
    
    // Imprime o quadro de medalhas
    printf("Quadro de Medalhas\n");
    for (int i = 0; i < num_paises; i++) {
        printf("%s %d %d %d\n", paises[i].nome, paises[i].ouro, paises[i].prata, paises[i].bronze);
    }
    
    return 0;
}

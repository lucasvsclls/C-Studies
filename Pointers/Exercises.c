#include <stdio.h>

void extremos(int vetor[], int tamanho, int *pmaior, int *pmenor){
    *pmaior = vetor[0];
    *pmenor = vetor[0];
    for(int i = 0; i < tamanho; i++){
        if(*pmaior < vetor[i]){
            *pmaior = vetor[i];
        }
        if (*pmenor > vetor[i]){
            *pmenor = vetor[i];
        }
    }
    printf("\nMaior numero do vetor: %d\nMenor numero do vetor: %d\n", *pmaior, *pmenor);
}

void troca(float *num1, float *num2){
    float aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}

char stringcpy(char *origem, char *destino){
    while (*origem != '\0'){
        *destino = *origem;
        origem++;
        destino++;
    }
    *destino = '\0';
}


int main(){
    /*
    int tamanho, maior = 0, menor = 0, *pmaior, *pmenor;

    pmaior = &maior;
    pmenor = &menor;

    printf("\nDigite o tamanho do seu vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for(int i = 0; i < tamanho; i++){
        printf("Digite o numero (%d/%d): ", i+1, tamanho);
        scanf("%d", &vetor[i]);
    }

    extremos(vetor, tamanho, pmaior, pmenor);
    

    printf("\nExercicio 2\n");

    float a, b, *ap, *bp;

    ap = &a;
    bp = &b;

    printf("\nDigite dois numeros pra trocar: ");
    scanf("%f %f", &a, &b);

    printf("\nA: %.1f | B: %.1f",*ap, *bp);
    
    printf("\n\nAbracadabra!\n\n");
    troca(bp, ap);

    printf("A: %.1f | B: %.1f\n\n",*ap, *bp);
    
    

    printf("\nExercicio 3\n");

    int vet[10] = {0,1,2,3,4,5,6,7,8,9};
    int tamanho = (sizeof(vet)/sizeof(int));

    for(int i = 0; i < tamanho; i++){
        printf("\nO numero %d esta na posicao %d do vetor e no endereco de memoria %p\n\n", *(vet+i), i, &vet[i]);
    }

    printf("\nExercicio 4\n");

    int a, *b, **c, ***d;

    b = &a;
    c = &b;
    d = &c;

    printf("\nDigite um numero pra exibir o dobro, o triplo e o quadruplo: ");
    scanf("%d", &a);

    printf("\nNumero original: %d | Dobro: %d | Triplo: %d | Quadruplo: %d", a, (*b)*2, (**c)*3, (***d)*4);
    */
    
    printf("\nExercicio 5\n");

    char nome[10], nomecpy[10];
    char *pnome, *pnomecpy;

    pnome = nome;
    pnomecpy = nomecpy;

    printf("\nDigite o seu nome: ");
    scanf("%9s", pnome);

    stringcpy(pnome, pnomecpy);

    printf("\nnome copiado: %s\n\n", pnomecpy);

    return 0;
}
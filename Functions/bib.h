#include <stdio.h>
#include <math.h>

int positivo(numero){
    if(numero >= 0){
        return 1;
    }
    else{
        return 0;
    }
}

int somatorio(num1, num2){
    int soma = 0;
    for(int i = num1+1; i < num2; i++){
        soma += i;
    }
    return soma;
}

int somatoriodiv(a, b, c){
    int soma = 0;
    for(int i = b; i <= c; i++){
        if(i%a == 0){
            soma += i;
        }
    }
    return soma;
}

void conversor_tempo(segundos){
    int horas, minutos, segundosf = 0;

    horas = segundos/3600;
    minutos = (segundos%3600)/60;
    segundosf = ((segundos%3600)%60);

    printf("\n%d segundos sao %d horas, %d minutos e %d segundos.\n\n", segundos, horas, minutos, segundosf);
}

float acrescimo(valor1, valor2){
    float porcentagem;
    porcentagem = (valor2/valor1)*50;
    
    return porcentagem;
}

void retangulo(altura, largura){
    for(int i = 0; i < altura; i++){
        for(int j = 0; j < largura; j++){
            printf("# ");
        }
        printf("\n");
    }
}


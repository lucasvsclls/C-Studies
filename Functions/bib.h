#include <stdio.h>
#include <math.h>

#define Pi 3.14

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

void digitos(long long int cpfi){
    long long int divisor, cpff, cpf;
    int verificador, somatorio = 0;

    cpf = cpfi;
    cpff = cpfi;
    for(int i = 9; i >= 0; i--){
        divisor = (int)pow(10, i);
        
        somatorio = somatorio + (cpff/divisor);
        cpff = cpff%divisor;
        }

    somatorio = (somatorio/10) * (somatorio%10);
    verificador = ((somatorio%10)-(somatorio/10));

    somatorio = 0;
    cpff = (cpfi*10)+verificador;

    for(int i = 10; i >= 0; i--){
        divisor = (long long int)pow(10, i);
        
        somatorio = somatorio + (cpff/divisor);
        cpff = cpff%divisor;
    }

    somatorio = (somatorio/10) * (somatorio%10);
    verificador = (verificador*10) + ((somatorio%10)-(somatorio/10));
    printf("O Cpf eh: %lld-%d", cpf, verificador);

}

void histograma(dom, seg, ter, qua, qui, sex, sab){
    printf("\nHistograma:\n");

    printf("D: ");
    for(int i = 0; i < dom; i++){
        printf("*");
    }

    printf("\n");
    printf("S: ");
    for(int i = 0; i < seg; i++){
        printf("*");
    }
    printf("\n");

    printf("T: ");
    for(int i = 0; i < ter; i++){
        printf("*");
    }
    printf("\n");

    printf("Q: ");
    for(int i = 0; i < qua; i++){
        printf("*");
    }
    printf("\n");

    printf("Q: ");
    for(int i = 0; i < qui; i++){
        printf("*");
    }
    printf("\n");

    printf("S: ");
    for(int i = 0; i < sex; i++){
        printf("*");
    }
    printf("\n");

    printf("S: ");
    for(int i = 0; i < sab; i++){
        printf("*");
    }
    printf("\n\n");
}

float area(raio){
    return Pi * (raio*raio);
}

int bissexto(ano){
    if((ano%4)==0){
        if(ano%100){
            if(ano%400){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return 1;
        }
    }
    else{
        return 0;
    }
}

float media(char ope, float n1, float n2, float n3){
    float peso1 = 5, peso2 = 3, peso3 = 2;
    switch (ope){
    case 'A':            peso1 = 1;
        peso2 = 1;
        peso3 = 1;
        break;
    case 'P':
        break;
    default:
        printf("Operacao invalida, digite de novo: ");
        scanf("%c", &ope);
        media(ope, n1, n2, n3);
        break;
    }

    return ((n1*peso1) + (n2*peso2) + (n3*peso3))/(peso1+peso2+peso3);
}

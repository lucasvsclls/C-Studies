#include <stdio.h>
#include <math.h>
#include "bib.h"

#define Pi 3.14
#define QUAD(n) n*n
#define Multiplo(a,b) (((a%b)==0) ? 1 : 0)
#define Is_Vogal(letra) ((letra == 'A' || letra == 'a' || letra == 'E' || letra == 'e' || letra == 'I' || letra == 'i' || letra == 'O' || letra == 'o' || letra == 'U' || letra == 'u') ? 1 : 0)
#define ABS(n) ((n>=0) ? n : (-1*(n)))

int main(){

    printf("\nExercicio 1\n");
    printf("\nPrograma do sinal\n");

    int num;

    printf("\nDigite um numero: ");
    scanf("%d", &num);

    printf("\n%d\n", positivo(num));



    printf("\nExercicio 2\n");
    printf("\nPrograma do somatorio\n");

    int num1, num2;

    printf("\nDigite dois numeros separados por espaco: ");
    scanf("%d %d", &num1, &num2);

    printf("\nO somatorio dos numeros entre %d e %d eh: %d\n", num1, num2, somatorio(num1, num2));



    printf("\nExercicio 3\n");
    printf("\nPrograma do somatorio divisivel\n");

    int a, b, c;

    printf("\nDigite a, b e c separados por espaco: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("\nO somatorio dos numeros entre %d e %d divisiveis por %d eh: %d\n", b, c, a,somatoriodiv(a, b, c));


    printf("\nExercicio 4\n");
    printf("\nPrograma do Conversor de Segundos\n");

    int segundos;

    printf("\nDigite os segundos: ");
    scanf("%d", &segundos);

    conversor_tempo(segundos);
    


    printf("\nExercicio 5\n");
    printf("\nPorcentagem de acrescimo\n");
    
    int produtoi, produtof;

    printf("Digite o valor inicial e final do produto separados por espaco: ");
    scanf("%d %d", &produtoi, &produtof);

    printf("\nA procentagem do aumento foi de %.1f%%\n", acrescimo(produtoi, produtof));



    printf("\nExercicio 6\n");
    printf("\nPrograma da media\n");

    float n1, n2, n3;
    char ope;

    printf("Digite tres notas separadas por espaco: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("Digite P para media ponderada A para aritmetica: ");
    scanf(" %c", &ope);

    printf("\nMedia %c das notas eh: %.2f\n\n", ope, media(ope, n1, n2, n3));



    printf("\nExercicio 7\n");
    printf("\nPrograma do Retangulo\n");
    
    int altura, largura;

    printf("Digite a altura e a largura do retangulo separados por espaco: ");
    scanf("%d %d", &altura, &largura);

    printf("\nRetangulo:\n\n");
    
    retangulo(altura, largura);

    printf("\n");
    
    


    printf("\nExercicio 8\n");
    printf("\nPrograma Verificador de cpf\n");

    long long int cpfi;

    printf("Digite o cpf: ");
    scanf("%lld", &cpfi);


    digitos(cpfi);
    


    printf("\nExercicio 9\n");
    printf("\nPrograma do Histograma\n");

    int dom, seg, ter, qua, qui, sex, sab;

    printf("Digite os graus Celsius de domingo: ");
    scanf("%d", &dom);

    printf("Digite os graus Celsius de segunda: ");
    scanf("%d", &seg);

    printf("Digite os graus Celsius de terca: ");
    scanf("%d", &ter);

    printf("Digite os graus Celsius de quarta: ");
    scanf("%d", &qua);

    printf("Digite os graus Celsius de quinta: ");
    scanf("%d", &qui);

    printf("Digite os graus Celsius de sexta: ");
    scanf("%d", &sex);

    printf("Digite os graus Celsius de sabado: ");
    scanf("%d", &sab);


    histograma(dom, seg, ter, qua, qui, sex, sab);
    


    printf("\nExercicio 10\n");
    printf("\nArea do Circulo\n");

    int raio;

    printf("Digite o raio: ");
    scanf("%d", &raio);

    printf("A area de um circulo de raio %d eh: %.2fcm2", raio, area(raio));
   
    

    printf("\nExercicio 11\n");
    printf("\nQuadrado de um Numero\n");

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("\nQuadrado de %d eh: %d\n\n", n, QUAD(n));
    


    printf("\nExercicio 12\n");
    printf("\nPrograma do Ano Bissexto\n");

    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    printf("\n%d eh bissexto?\nResposta: %d\n\n", ano, bissexto(ano));
    


    printf("\nExercicio 13\n");
    printf("\nPrograma do Multiplo\n");

    int a, b;

    printf("Digite dois numeros separados por espaco: ");
    scanf("%d %d", &a, &b);

    printf("\n%d eh multiplo de %d bissexto?\nResposta: %d\n\n", a, b, Multiplo(a,b));
    


    printf("\nExercicio 14\n");
    printf("\nPrograma da Vogal\n");

    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    printf("\n%c eh vogal?\nResposta: %d\n\n", letra, Is_Vogal(letra));
    


    printf("\nExercicio 15\n");
    printf("\nPrograma do Absoluto\n");

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("\nAbsoluto de %d eh: %d\n\n", n, ABS(n));


    return 0;
}
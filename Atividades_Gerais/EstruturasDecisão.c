//Estruturas de decisão:

#include <stdio.h>
#include <string.h>

//1) Faça um Programa que peça dois números e imprima o maior deles.
/*
int main()
{
    int n1, n2, maior;
    printf("Qualquer número: ");
    scanf("%d", &n1);
    printf("Qualquer outro número: ");
    scanf("%d", &n2);
    
    if (n1 > n2) {
        printf("O maior número é: %d", n1);
    } else {
        printf("O maior número é: %d", n2);
    }
    
    return 0;
}*/

//2) Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.
/*
int main()
{
    int numero;
    printf("Um número: ");
    scanf("%d", &numero);
    if (numero % 2 == 0) {
        printf("Número par.");
    } else {
        printf("Número impar.");
    }
    
    return 0;
}*/

// 3) Faça um Programa que verifique se uma letra digitada é vogal ou consoante.
/*
int main()
{
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    
    if (letra == 'A' || 'E' || 'I' || 'O' || 'U') {
        printf("Vogal!");
    } else {
        printf("Cosoante!");
    }
    
    return 0;
}*/

// 4) Faça um Programa que peça as 4 notas bimestrais e mostre a média.
/*
int main()
{
    float nota1, nota2, nota3, nota4, media;
    printf("Primeira nota: ");
    scanf("%f", &nota1);
    printf("Segunda nota: ");
    scanf("%f", &nota2);
    printf("Terceira nota: ");
    scanf("%f", &nota3);
    printf("Quarta nota: ");
    scanf("%f", &nota4);
    
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    
    printf("Média das notas: %.1f", media);

    return 0;
}*/

// 5) Faça um Programa que converta metros para centímetros.
/*/
int main()
{
    int metro, centimetro;
    printf("De metros para centimetros: ");
    scanf("%d", &metro);
    
    centimetro = metro * 100;
    
    printf("%d metros em centimetros é %d", metro, centimetro);

    return 0;
}*/

//6) Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.
/*
#define PI 3.1415

int main()
{
    float raio, area;
    printf("Raio do círculo: ");
    scanf("%f", &raio);
    
    area = PI * raio * raio;
    printf("Área do círculo; %.2f\n", area);

    return 0;
}*/


//7) Faça um Programa que leia três números e mostre o maior e o menor deles.
/*
int n1, n2, n3, maior, menor;
    printf("Três números: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    if (n1 > n2 &&  n1 > n3) {
        maior = n1;
        printf("O maior número é: %d", maior);
    } else if (n2 > n1 && n2 > n3) {
        maior = n2;
        printf("O maior número é: %d", maior);
    } else if (n3 > n1 && n3 > n2) {
        maior = n3;
        printf("O maior número é: %d\n", maior);
    }
    
    if (n1 < n2 && n1 < n3) {
        menor = n1;
        printf("O menor número é: %d", n1);
    } else if (n2 < n1 && n2 < n3) {
        menor = n2;
        printf("O menor número é: %d", n2);
    } else if (n3 < n1 && n3 < n2) {
        menor = n3;
        printf("O menor número é: %d", n3);
    }

    return 0;
}*/

//8) Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.
/*
int main()
{
    float preco1, preco2, preco3, barato;
    printf("Três preços de produtos: ");
    scanf("%f %f %f", &preco1, &preco2, &preco3);
    
    if (preco1 < preco2 && preco1 < preco3) {
        barato = preco1;
        printf("Vou comprar %.1f então.", preco1);
    } else if (preco2 < preco1 && preco2 < preco3) {
        barato = preco2;
        printf("Vou comprar %.1f então.", preco2);
    } else if (preco3 < preco1 && preco3 < preco2) {
        barato = preco3;
        printf("Vou comprar %.1f então.", preco3);
    }
    return 0;
}*/

//9) Faça um Programa que leia três números e mostre-os em ordem decrescente.
/*
int main()
{
    int a, b, c, maior, medio, menor;
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c) {
        maior = a;
        if (b >= c) {
            medio = b;
            menor = c;
        } else {
            medio = c;
            menor = b;
        }
    } else if (b >= a && b >= c) {
        maior = b;
        if (a >= c) {
            medio = a;
            menor = c;
        } else {
            medio = c;
            menor = a;
        }
    } else {
        maior = c;
        if (a >= b) {
            medio = a;
            menor = b;
        } else {
            medio = b;
            menor = a;
        }
    }
    
    printf("Ordem decrescente: %d %d %d\n", maior, medio, menor);

    return 0;
}*/

// 10) Faça um Programa que pergunte em que turno você estuda. Peça para digitar M-Matutino ou V-Vespertino ou N-Noturno. Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.
/*
int main()
{
    char turno;
    printf("Qual seu turno [Matutino/Vespertino/Noturno]\nDigite somente a primeira letra: ");
    scanf("%c", &turno);
    switch(turno) {
        case 'M':
        case 'm':
            printf("Bom dia Matutino!");
            break;
        case 'V':
        case 'v':
            printf("Boa tarde Vespertino!");
            break;
        case 'N':
        case 'n':
            printf("Não vai perder o onibus, Noturno");
            break;
    }

    return 0;
}*/

/*11) As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e lhe contrataram para desenvolver o programa que calculará os reajustes.
- Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual:
- salários até R$ 280,00 (incluindo) : aumento de 20%
- salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
- salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
- salários de R$ 1500,00 em diante : aumento de 5% Após o aumento ser realizado, informe na tela:
- o salário antes do reajuste;
- o percentual de aumento aplicado;
- o valor do aumento;
- o novo salário, após o aumento.*/

/*
int main()
{
    float salario, reajuste, novosal, aumento;
    printf("Salário: ");
    scanf("%f", &salario);
    if (salario <= 280.00) {
        reajuste = 0.20;
    } else if (salario > 280.00 && salario <= 700.00) {
        reajuste = 0.15;
    } else if (salario > 700.00 && salario <= 1500.00) {
        reajuste = 0.10;
    } else {
        reajuste = 0.05;
    }
    
    aumento = salario * reajuste;
    novosal = salario + aumento;
    
    printf("Salário antes do reajuste: R$ %.2f\n", salario);
    printf("Percentual de aumento aplicado: %.0f%%\n", reajuste * 100);
    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salário, após o aumento: R$ %.2f\n", novosal);
    

    return 0;
}*/

//13) Faça um Programa que leia um número e exiba o dia correspondente da semana. (1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido.
/*
int main()
{
    int dia;
    printf("Digite um número para ver o dia da semana: ");
    scanf("%d", &dia);
    if (dia == 1) {
        printf("É Domigo!");
    } else if (dia == 2) {
        printf("É Segunda :<");
    } else if (dia == 3) {
        printf("É Terça");
    } else if (dia == 4) {
        printf("É Quarta, têm 28hrs");
    } else if (dia == 5) {
        printf("É Quinta");
    } else if (dia == 6) {
        printf("É Sexta");
    } else if (dia == 7) {
        printf("É Sabado!");
    } else {
        printf("Só existem sete dias na semana.");
    }
    
    return 0;
}*/

/*14) Faça um programa que lê as duas notas parciais obtidas por um aluno numa disciplina ao longo de um semestre, e calcule a sua média. A atribuição de conceitos obedece à tabela abaixo:
    -	  Média de Aproveitamento  Conceito
    -	  Entre 9.0 e 10.0        A
    -	  Entre 7.5 e 9.0         B
    -	  Entre 6.0 e 7.5         C
    -	  Entre 4.0 e 6.0         D
    -	  Entre 4.0 e zero        E
O algoritmo deve mostrar na tela as notas, a média, o conceito correspondente e a mensagem “APROVADO” se o conceito for A, B ou C ou “REPROVADO” se o conceito for D ou E.*/

/*
int main()
{
    float nota1, nota2, media;
    printf("Primeira nota: ");
    scanf("%f", &nota1);
    printf("Segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("Média de Aproveitamento\n");
    if (media >= 9.0 && media <= 10.0) {
        printf("Notas %.1f e %.1f\nMédia: %.1f\nConceito: [A] - Aprovado!", nota1, nota2, media);
    } else if (media >= 7.5 && media <= 8.9) {
        printf("Notas %.1f e %.1f\nMédia: %.1f\nConceito: [B] - Aprovado!", nota1, nota2, media);
    } else if (media >= 6.0 && media <= 7.4) {
        printf("Notas %.1f e %.1f\nMédia: %.1f\nConceito: [C] - Aprovado!", nota1, nota2, media); 
    } else if (media >= 4.0 && media <= 5.9) {
        printf("Notas %.1f e %.1f\nMédia: %.1f\nConceito: [D] - Reprovado!", nota1, nota2, media);
    } else if (media <= 4.0) {
        printf("Notas %.1f e %.1f\nMédia: %.1f\nConceito: [E] - Reprovado!", nota1, nota2, media);
    }

    return 0;
}*/

/*15) Faça um Programa que peça os 3 lados de um triângulo. O programa deverá informar se os valores podem ser um triângulo. Indique, caso os lados formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.
Dicas:
- Três lados formam um triângulo quando a soma de quaisquer dois lados for maior que o terceiro;
- Triângulo Equilátero: três lados iguais;
- Triângulo Isósceles: quaisquer dois lados iguais;
- Triângulo Escaleno: três lados diferentes;*/

/*
int main()
{
    int lado1, lado2, lado3;
    printf("Os três lados para formar um triângulo: ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) { 
        printf("Os lados formam um triângulo.\n"); 
        
        if (lado1 == lado2 && lado2 == lado3) {
            printf("Triângulo Equilátero");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("Triângulo Isósceles\n");
        } else {
            printf("Triângulo Escaleno.\n");
        }
    } else {
        printf("Não formam um Triângulo.\n");
    }

    return 0;
}*/

17)// Faça um Programa que peça um número correspondente a um determinado ano e em seguida informe se este ano é ou não bissexto.
/*
int main()
{
    int anos, bissexto;
    
    printf("Um ano para saber se é bissexto: ");
    scanf("%d", &anos);
    
    if ((anos % 4 == 0 && anos % 100 != 0) || (anos % 400 == 0)) {
        printf("%d é bissexto.\n", anos);
    } else {
        printf("%d não é bissexto.\n", anos);
    }

    return 0;
}*/

//18) Faça um Programa que peça uma data no formato dd/mm/aaaa e determine se a mesma é uma data válida.
/*
int main()
{
    int dd, mm, aaaa;
    
    printf("Informe uma data: ");
    scanf("%d/%d/%d", &dd, &mm, &aaaa);
    
    if (mm > 12)
    {
        printf("Aonde que %d é um mês? seu animal!\n", mm);
    } if (dd > 31)
    {
        printf("Mês grande da porra, véi!\n");
    }

    return 0;
}*/

/*19) Faça um Programa que leia um número inteiro menor que 1000 e imprima a quantidade de centenas, dezenas e unidades do mesmo.
- Observando os termos no plural a colocação do "e", da vírgula entre outros. Exemplo:
- 326 = 3 centenas, 2 dezenas e 6 unidades
- 12 = 1 dezena e 2 unidades 
Testar com: 326 ☻, 300☻, 100☻, 320, 310,305, 301, 101, 311, 111, 25, 20, 10, 21, 11, 1, 7 e 16.*/

/*
int main() {
    int numero, centenas, dezenas, unidades;

    printf("Digite um número menor que 1000: ");
    scanf("%d", &numero);

    if (numero < 10) {
        unidades = numero % 10;
        printf("%d unidade(s)\n", unidades);
    } else if (numero < 100) {
        dezenas = (numero % 100) / 10;
        unidades = numero % 10;
        printf("%d dezena(s)\n%d unidade(s)\n", dezenas, unidades);
    } else if (numero < 1000) {
        centenas = numero / 100;
        dezenas = (numero % 100) / 10;
        unidades = numero % 10;
        printf("%d centena(s)\n%d dezena(s)%d unidade(s)\n", centenas, dezenas, unidades);
    } else {
        printf("Número inválido. Por favor, digite um número menor que 1000.\n");
    }

    return 0;
}

[Os principais erros do antigo código foram verificar a pluralização, os limites entre as casas dos números e um erro de considerar como centena qualquer numero solitário na entrada.]*/

/*
20) Faça um Programa para leitura de três notas parciais de um aluno. O programa deve calcular a média alcançada por aluno e presentar:
    a.	A mensagem "Aprovado", se a média for maior ou igual a 7, com a respectiva média alcançada;
    b.	A mensagem "Reprovado", se a média for menor do que 7, com a respectiva média alcançada;
    c.	A mensagem "Aprovado com Distinção", se a média for igual a 10.*/

/*
int main()
{
    float nota1, nota2, nota3, media;
    
    printf("Insira a 1ª nota: ");
    scanf("%f", &nota1);
    printf("Insira a 2ª nota: ");
    scanf("%f", &nota2);
    printf("Insira a 3ª nota: ");
    scanf("%f", &nota3);
    
    media = (nota1 + nota2 + nota3) / 3;
    
    if (media >= 7)
    {
        printf("(%.2f + %.2f + %.2f) / 3 = %.2f\n", nota1, nota2, nota3, media);
        printf("Aprovado!");
    } else if (media < 7)
    {
        printf("(%.2f + %.2f + %.2f) / 3 = %.2f\n", nota1, nota2, nota3, media);
        printf("Reprovado!");
    } else if ( media == 10)
    {
        printf("(%.2f + %.2f + %.2f) / 3 = %.2f\n", nota1, nota2, nota3, media);
        printf("DEZ!?\nAprovado com distinção!");
    }

    return 0;
}*/

/*
21) Faça um Programa para um caixa eletrônico. O programa deverá perguntar ao usuário a valor do saque e depois informar quantas notas de cada valor serão fornecidas. As notas disponíveis serão as de 1, 5, 10, 50 e 100 reais. O valor mínimo é de 10 reais e o máximo de 600 reais. O programa não deve se preocupar com a quantidade de notas existentes na máquina.
    a.	Exemplo 1: Para sacar a quantia de 256 reais, o programa fornece duas notas de 100, uma nota de 50, uma nota de 5 e uma nota de 1;
    b.	Exemplo 2: Para sacar a quantia de 399 reais, o programa fornece três notas de 100, uma nota de 50, quatro notas de 10, uma nota de 5 e quatro notas de 1.*/

/*
int main()
{
	int saque, cem, cinque, dez, cinco, um;

	printf("Qual valor de saque? ");
	scanf("%d", &saque);
	
	if (saque >= 10 && saque <= 600)
	{
		cem = saque / 100;
		saque = saque % 100;
		printf("%d notas de cem.[ ♦ ]\n", cem);

		cinque = saque / 50;
		saque = saque % 50;
		printf("%d notas de cinquenta.[ ♣ ]\n", cinque);

		dez = saque / 10;
		saque = saque % 10;
		printf("%d notas de dez.[ ♠ ]\n", dez);

		cinco = saque / 5;
		saque = saque % 5;
		printf("%d notas de cinco.[ ♥ ]\n", cinco);
		
		um = saque;
        printf("%d notas de um.[ • ]\n", um);
	} 
	else
	{
		printf("Só aceitamos valores entre 10 e 600.\n");
	}

	return 0;
}*/


//22) Faça um Programa que peça um número inteiro e determine se ele é par ou impar. Dica: utilize o operador módulo (resto da divisão).
/*
int main()
{
    int numero, impare;
    
    printf("Um número: ");
    scanf("%d", &numero);
    
    impare = numero % 2;
    if (impare == 0)
    {
        printf("O resultado é: %d. Par", impare);
    }
    else
    {
        printf("O resultado é: %d. Impar", impare);
    }

    return 0;
}*/

//23) Faça um Programa que peça um número e informe se o número é inteiro ou decimal. Dica: utilize uma função de arredondamento.

#include <math.h>
/*
int main()
{
    float numero, piso;
    float margem = 1e-9;
    
    printf("Um número: ");
    scanf("%f", &numero);
    
    piso = floor(numero);
    if (fabs(numero - piso) < margem) //fabs é usado para calcular o valor absoluto entre dois algoritmos
    {
        printf("Inteiro.");
    }
    else
    {
        printf("Decimal.");
    }

    return 0;
}*/

/*24) Faça um Programa que leia 2 números e em seguida pergunte ao usuário qual operação ele deseja realizar. O resultado da operação deve ser acompanhado de uma frase que diga se o número é:
a. par ou ímpar;
b. positivo ou negativo;
c. inteiro ou decimal.*/

/*
int main()
{
    int n1, n2, impare, resul;
    char simbolo;
     
    printf("Digite dois números:\n");
    scanf("%d %d", &n1, &n2);
    printf("Qual operação? [Só as 4 básicas]");
    scanf(" %c", &simbolo);
    
    if (simbolo=='+')
    {
        resul = n1 + n2;
        
    } else if (simbolo=='-')
    {
        resul = n1 - n2;
        
    } else if (simbolo=='*')
    {
        resul = n1 * n2;
        
    } else if (simbolo=='/')
    {
        resul = n1 / n2;
       
    }
    
    impare = resul % 2;
    if (impare == 0)
    {
        printf("O resultado é: %d. Par.", impare);
    }
    else
    {
        printf("O resultado é: %d. Impar.", impare);
    } if (resul > 0)
    {
        printf(" É um número positivo.");
    }
    else
    {
        printf(" É um número negativo.");
    }

    return 0;
}*/
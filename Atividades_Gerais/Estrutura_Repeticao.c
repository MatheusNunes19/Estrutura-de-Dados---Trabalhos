// Estruturas de repetição:
#include <stdio.h>
#include <string.h>

/*1) Faça um programa que peça uma nota, entre zero e dez. Mostre uma mensagem caso o valor seja inválido e continue pedindo até que o 
usuário informe um valor válido.

int main()
{
    int numero;
    while (1) {
        printf("Um numero entre 0 a 5: ");
        scanf("%d", &numero);
        
        if (numero <= 5) {
            printf("Numero valido: %d", numero);
        break;
        } else {
            printf("%d e um numero invalido.\n", numero);
        }
    }

    return 0; 
}*/

/*2) Faça um programa que leia um nome de usuário e a sua senha e não aceite a senha igual ao nome do usuário, mostrando
uma mensagem de erro e voltando a pedir as informações.*/

int main()
{
    char usuario[50], senha[50];
    while (1) {
        printf("Nome de usuario: \n");
        scanf("%49s", usuario);
        printf("Senha: \n");
        scanf("%49s", senha);
        if (strcmp(usuario, senha) == 0) {
            printf("Usuario e senha nao podem ser iguais.\n");
        } else {
            printf("Dados cadastrados.");
            break;
        }
    }

    return 0;
} 
// atraves de #include <string.h>, strcmp compara strings

/*3) Faça um programa que leia e valide as seguintes informações:

a. Nome: maior que 3 caracteres;
b. Idade: entre 0 e 150;
c. Salário: maior que zero;
d. Sexo: 'f' ou 'm';
e. Estado Civil: 's', 'c', 'v', 'd';

int main()
{
    char nome[3], sexo, status;
    int idade;
    float salario;
    
    while (1) {
        printf("Nome: ");
        fgets(nome, sizeof(nome), stdin);
        
        if (strlen(nome) <= 4) {
            printf("Inválido.\n");
        } else {
            printf("Válido.\n");
            
        }
    }

    return 0;
}*/

/*4) Supondo que a população de um país A seja da ordem de 80.000 habitantes com uma taxa anual de crescimento de 3% e que a
população de B seja 200.000 habitantes com uma taxa de crescimento de 1.5%. Faça um programa que calcule e escreva o número
 de anos necessários para que a população do país A ultrapasse ou iguale a população do país B, mantidas as taxas de 
crescimento.

int main()
{
    int anos = 0, populacao_a = 80000, populacao_b = 200000;
    float taxa_a = 3.0, taxa_b = 1.5;
    
    while (populacao_a <= populacao_b) {
        populacao_a += (int)(populacao_a * (taxa_a / 100));
        populacao_b += (int)(populacao_b * (taxa_b / 100));
        anos += 1;
        
        if (anos > 100) {
            printf("Mais de um século.\n");
            return 0;
        }
    }
    
    printf("Número de anos: %d\n.", anos);
    return 0;
}*/

/*6) Faça um programa que imprima na tela os números de 1 a 20, um abaixo do outro. Depois modifique o programa para que ele
mostre os números um ao lado do outro.
int main()
{
    int escolhe;
    int i = 1;
    
    printf("Linha por linha [1]\nMesma linha [2]: ");
    scanf("%d", &escolhe);
    
    if (escolhe == 1) {
        while (i <= 20) {
        printf("%d\n", i);
        i++;
    }
    } else {
        while (i <= 20) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    }
    
    return 0;
}*/

/*7) Faça um programa que leia 5 números e informe o maior número.
int main()
{
    int maiorNum = 0;
    int num;
    
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &num);
        
        if (num > maiorNum) {
            maiorNum = num;
        }
    }
    
    printf("O maior número é: %d\n", maiorNum);

    return 0;
}*/

/*8) Faça um programa que leia 5 números e informe a soma e a média dos números.
int main()
{
    int maiorNum = 0;
    int num, soma = 0;
    float media;
    
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &num);
        
        soma += num;
        
        if (num > maiorNum) {
            maiorNum = num;
        
        media = soma / 5.0;
        
        }
    }
    
    printf("Media de tudo isso é: %.2f\n", media);
    printf("A soma de todos os número é: %d\n", soma);
    printf("O maior número é: %d\n", maiorNum);
}*/

/*9) Faça um programa que imprima na tela apenas os números ímpares entre 1 e 50.

int main()
{
	int i = 1;
	
	while (i <= 50) {
	    if (i % 2 == 1) {
	        printf("%d-", i);
	    }
	    i++;
	}
	
	return 0;
}*/

/*10) Faça um programa que receba dois números inteiros e gere os números inteiros que estão no intervalo compreendido
por eles.

int main()
{
	int n1, n2;
	int maior, menor;
	
	scanf("%d %d", &n1, &n2);
	if (n1 > n2) {
	    maior = n1;
	    menor = n2;
	} else {
	    maior = n2;
	    menor = n1;
	}
	
	for (int i = menor; i <= maior; i++) {
	    printf("%d ", i); 
	}
	printf("\n");
	
	return 0;
}*/

/*11) Altere o programa anterior para mostrar no final a soma dos números.

int main()
{
	int n1, n2;
	int maior, menor;
	int soma = 0;
	
	scanf("%d %d", &n1, &n2);
	if (n1 > n2) {
	    maior = n1;
	    menor = n2;
	} else {
	    maior = n2;
	    menor = n1;
	}
	
	for (int i = menor; i <= maior; i++) {
	    printf("%d ", i);
	    soma += i; 
	    // o erro estava onde eu calculava o 'i', tinha que iniciar o contador
	    // com zero e ir fazendo a soma conforme novos numero apareciam.
	    // estava fazendo a soma dentro do loop com a ultima iteração feita.
	}
	
	printf("\n");
	printf("Soma de tudo: %d", soma);
	
	return 0;
}*/

/*12) Desenvolva um gerador de tabuada, capaz de gerar a tabuada de qualquer número inteiro entre 1 a 10. O usuário deve
informar de qual numero ele deseja ver a tabuada. A saída deve ser conforme o exemplo abaixo:
-Tabuada de 5:
-5 X 1 = 5
-5 X 2 = 10
-...
-5 X 10 = 50
int main()
{
    int numero;
    
    printf("Número para ver sua tabuada: ");
    scanf("%d", &numero);
    
    if (numero >= 1 && numero <= 10) {
        printf("Tabuada de %d:\n", numero);
        for (int i = 1; i <= 10; i++) {
            printf("%d * %d = %d\n", numero, i, numero * i);
        }
    } else {
        printf("Número inválido.");
    }
	
	return 0;
}*/

/*13) Faça um programa que peça dois números, base e expoente, calcule e mostre o primeiro número elevado ao segundo
número. Não utilize a função de potência da linguagem.

int main()
{
    int base, expo;
    long long resultado = 1;
// long long é para números caralhamente grandes, ocupa 8 bytes de memoria
    
    printf("Base: ");
    scanf("%d", &base);
    
    printf("Expoente: ");
    scanf("%d", &expo);
    
    if (expo < 0)
    {
        printf("Expoente negativo não é permitido.\n");
        return 1;
    }
    
    for (int i = 0; i < expo; i++)
    {
        resultado *= base;
    }
    
    printf("%d^%d = %lld\n", base, expo, resultado);

    return 0;
}*/

/*14) Faça um programa que peça 10 números inteiros, calcule e mostre a quantidade de números pares e a quantidade 
de números impares.
int main()
{
    int num, soma = 0, par = 0, impar = 0;
    
    for (int i = 0; i < 10; i++)
    {
        printf("Número %d: ", i + 1);
        scanf("%d", &num);
        soma += num;
        
        if (num % 2 == 0)
        {
            par += 1;
        }
        else
        {
            impar += 1;
        }
    }
    
    printf("__--__--__--__--__--__--__--__\n");
    printf("Resultado da soma disso tudo: %d\n", soma);
    printf("Quantidades de números pares: %d\n", par);
    printf("Quantidades de números impares: %d\n", impar);

    return 0;
}*/

/*15) A série de Fibonacci é formada pela seqüência 1,1,2,3,5,8,13,21,34,55,... 
Faça um programa capaz de gerar a série até o n−ésimo termo.

int main(){
    int i, n;
    long long int pri = 1, seg = 1, prox;
    
    printf("N-esimo termo de Fibonacci: \n");
    scanf("%d", &n);

    if(n <= 0){
        printf("Serie de Fibonacci: 0");
    }else if(n == 1){
        printf("Serie de Fibonacci: 1\n");
    }else{
        printf("Serie de Fibonacci: 1 1 ");
        for (i = 3; i <= n; i++) {
            prox = pri + seg;
            printf("%lld ", prox);
            pri = seg;
            seg = prox;
        }
        printf("\n");
    }
    
    return 0;
}*/

/*16) A série de Fibonacci é formada pela seqüência 0,1,1,2,3,5,8,13,21,34,55,... 
Faça um programa que gere a série até que o valor seja maior que 500.

int main(){
    int i, n;
    long long int pri = 1, seg = 1, prox;
    
    printf("N-esimo termo de Fibonacci: \n");
    scanf("%d", &n);

    if(n <= 0){
        printf("Serie de Fibonacci: 0");
    }else if(n == 1){
        printf("Serie de Fibonacci: 1\n");
    }else{
        printf("Serie de Fibonacci: 1 1 ");
        for (i = 3; i <= n; i++) {
            prox = pri + seg;

            if(prox > 500){
                break;
            }

            printf("%lld ", prox);
            pri = seg;
            seg = prox;
            
        }
        printf("\n");
    }
    
    return 0;
    //literalmente so um if
}*/

/*Faça um programa que calcule o fatorial de um número inteiro fornecido pelo usuário. Ex.: 5!=5.4.3.2.1=120
*/

/*int main(){
    int n, fat;

    printf("Digite um numero para saber o fatorial: ");
    scanf("%d", &n);

    printf("%d! = ", n);

    for(fat = 1; n > 1; n --){
        printf("%d.", n);
        fat *= n;
    }
    printf("1 = %d\n", fat);

    return 0;
}*/

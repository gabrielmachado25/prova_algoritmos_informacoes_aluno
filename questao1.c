#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

struct Estudante
{
    char nomeEstudante[50];
    char endereco[60];
    float numeroMatricula;
};

// ATÉ FIZ MAIS DUAS FUNÇÕES: A DE INICIALIZAR E A DE FINALIZAR :)

int main(void) {

setlocale(LC_ALL,"Portuguese");

//DECLARANDO STRUCT
struct Estudante alunos[10];
int count;

int inicializarPrograma(){
printf("----- BEM-VINDO AO PROGRAMA PARA CADASTRO DE ESTUDANTES -----\n");
printf("------------------------- VAMOS LÁ --------------------------\n");
}

inicializarPrograma();

int lerDadosEstudantes(){
    printf("\nNome do estudante %d: ", count+1);
    gets(alunos[count].nomeEstudante); //LER E SALVAR O NOME APRESENTADO
    printf("Endereço do estudante: ");
    gets(alunos[count].endereco); //LER E SALVAR O ENDEREÇO APRESENTADO
    printf("Número de matrícula do estudante: ");
    scanf("%f", &alunos[count].numeroMatricula); //LER E SALVAR O NUMERO DE MATRÍCULA APRESENTADO
}

for(count = 0 ; count < 10 ; count++) {
    fflush(stdin);
    lerDadosEstudantes();
}

system("cls");

printf("DADOS ARMAZENADOS\n");

int imprimirDadosArmazenados(){
    printf("\nALUNO %d\n", count+1);
    printf("Nome: %s\n",alunos[count].nomeEstudante);
    printf("Endereço: %s\n",alunos[count].endereco);
    printf("Número de matrícula: %.f\n", alunos[count].numeroMatricula);
}

//IMPRIMINDO OS DADOS ARMAZENADOS
    for(count = 0 ; count < 10 ; count++) {
    imprimirDadosArmazenados();
}

int finalizarPrograma(){
printf("\n");
printf("----- PROGRAMA ELABORADO POR GABRIEL MACHADO -----");
printf("\n");
}

finalizarPrograma();

return 0;
}


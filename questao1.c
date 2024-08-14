#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

struct Estudante
{
    char nomeEstudante[50];
    char endereco[60];
    float numeroMatricula;
};

// AT� FIZ MAIS DUAS FUN��ES: A DE INICIALIZAR E A DE FINALIZAR :)

int main(void) {

setlocale(LC_ALL,"Portuguese");

//DECLARANDO STRUCT
struct Estudante alunos[10];
int count;

int inicializarPrograma(){
printf("----- BEM-VINDO AO PROGRAMA PARA CADASTRO DE ESTUDANTES -----\n");
printf("------------------------- VAMOS L� --------------------------\n");
}

inicializarPrograma();

int lerDadosEstudantes(){
    printf("\nNome do estudante %d: ", count+1);
    gets(alunos[count].nomeEstudante); //LER E SALVAR O NOME APRESENTADO
    printf("Endere�o do estudante: ");
    gets(alunos[count].endereco); //LER E SALVAR O ENDERE�O APRESENTADO
    printf("N�mero de matr�cula do estudante: ");
    scanf("%f", &alunos[count].numeroMatricula); //LER E SALVAR O NUMERO DE MATR�CULA APRESENTADO
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
    printf("Endere�o: %s\n",alunos[count].endereco);
    printf("N�mero de matr�cula: %.f\n", alunos[count].numeroMatricula);
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


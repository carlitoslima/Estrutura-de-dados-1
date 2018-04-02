# Estrutura-de-dados-1
listas e exercicios
#include <stdio.h>
#include <stdlib.h>


QUESTÃO 1:

typedef struct{
	int dia;
	int mes;
	int ano;
}nascimento;

int questao1(nascimento *pessoa){
if (pessoa==NULL){
    return 0;
}else{

printf("Informe o dia =");
scanf("%d",&(pessoa->dia));
printf("Informe o mes =");
scanf("%d",&(pessoa->mes));
printf("Informe o ano =");
scanf("%d",&(pessoa->ano));
return 1;
}
}
QUESTÃO 2:

int* questao2(nascimento *structPessoa){

structPessoa= (nascimento*) malloc(sizeof(nascimento));
structPessoa->dia=0;
structPessoa->mes=0;
structPessoa->ano=0;
return structPessoa;
}

QUESTÃO 3:

nascimento* questao3(nascimento *pessoa) {

	pessoa=questao2(&pessoa);
	questao1(pessoa);
	return pessoa;
}
QUESTÃO 4:


nascimento *questao4(int tamanho){
int i;
nascimento *structPessoa = (nascimento*) malloc(tamanho*sizeof(nascimento));
for(i=0;i<tamanho;i++){
structPessoa->dia=0;
structPessoa->mes=0;
structPessoa->ano=0;
return structPessoa;
}

}


int main()
{

    nascimento carlos;

    questao1(&carlos);
    questao2(&carlos);
    questao3(&carlos);

    return 0;
}

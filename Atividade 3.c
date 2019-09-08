#include <stdlib.h>
#include <stdio.h>

void preencherV1();
void preencherV2();
void preencherV3();
void imprimirV1();
void imprimirV2();
void imprimirV3();
int buscaSequencialV1();
void ordenacaoPorTrocasV1();
int selMin();
void ordenacaoPorSelecaoV2();
void ordenacaoPorInsercaoV3();
int buscaBinariaV3();

int main(void){

int opc;

do{ system("cls");
    printf("\n\n=== ATIVIDADE 3 ===\n");
    printf("\n(1)-Preencher aleatoriamente o primeiro vetor");
    printf("\n(2)-Preencher aleatoriamente o segundo vetor");
    printf("\n(3)-Preencher aleatoriamente o terceiro vetor");
    printf("\n(4)-Imprimir Vetor 1");
    printf("\n(5)-Imprimir Vetor 2");
    printf("\n(6)-Imprimir Vetor 3");
    printf("\n(7)-Busca Sequencial (Vetor 1)");
    printf("\n(8)-Ordenacao por trocas (Vetor 1)");
    printf("\n(9)-Ordenacao por selecao (Vetor 2)");
    printf("\n(10)-Ordenacao por insercao (Vetor 3)");
    printf("\n(11)-Busca Binaria (Vetor 3)");
    printf("\n(12)-Sair");
    printf("\n");
    printf("\nOpcao ==>  ");



    scanf("%d",&opc);

    int v1[150000],v2[150000],v3[150000],item;

    switch(opc){
    	case 1:
        preencherV1(v1);
    break;
    	case 2:
        preencherV2(v2);
    break;
    	case 3:
        preencherV3(v3);
    break;
    	case 4:
        imprimirV1(v1);
    break;
    	case 5:
        imprimirV2(v2);
    break;
    	case 6:
        imprimirV3(v3);
    break;
    	case 7:
        printf("Digite o numero a ser procurado\n");
        scanf("%d", &item);
        buscaSequencialV1(item, v1, 150000);
    break;
    	case 8:
        ordenacaoPorTrocasV1(v1, 150000);
    break;
    	case 9:
        ordenacaoPorSelecaoV2(v2, 150000);
    break;
    	case 10:
        ordenacaoPorInsercaoV3(v3, 150000);
    break;
    	case 11:
        printf("Digite o numero a ser procurado\n");
        scanf("%d", &item);
        buscaBinariaV3(item, v3, 150000);
    break;
    	case 12:
		exit(0);
    break;
    }

}while(opc!=12);

}
void preencherV1(int v1[150000]){

int c1;

for(c1=0; c1<150000; c1++){
   v1[c1] = 1+(rand() % 20);}
}

void preencherV2(int v2[150000]){

int c2;

for(c2=0; c2<150000; c2++){
   v2[c2] = 1+(rand() % 15);}
}

void preencherV3(int v3[150000]){

int c3;

for(c3=0; c3<150000; c3++){
   v3[c3] = 1+(rand() % 30);}
}

void imprimirV1(int v1[150000]){

int c4;

for(c4=0;c4<150000;c4++){
printf("%d\n", v1[c4]);}
system("pause");
}

void imprimirV2(int v2[150000]){

int c5;

for(c5=0;c5<150000;c5++){
printf("%d\n", v2[c5]);}
system("pause");
}

void imprimirV3(int v3[150000]){

int c6;

for(c6=0;c6<150000;c6++){
printf("%d\n", v3[c6]);}
system("pause");
}

int buscaSequencialV1(int item, int v1[150000], int tamanho){

int c7;

for(c7=0;c7<tamanho;c7++){
    if(item==v1[c7]){
            printf("Numero presente\n");
            system("pause");
            return (0);}}
    printf("Numero nao encontrado\n");
    system("pause");
    return (1);
}

void ordenacaoPorTrocasV1(int v1[150000], int tamanho) {

int i,j;

 for(i=1; i<tamanho; i++){
  for(j=0; j<tamanho-i; j++){
   if(v1[j]>v1[j+1]) {
    int x=v1[j];
    v1[j]=v1[j+1];
    v1[j+1]=x;
   }
  }
 }
}

int selMin(int v2[150000], int c8, int tamanho){

int j, k=c8;

for(j=c8+1; j<tamanho; j++){
if(v2[k]>v2[j]){
k=j;}
return (k);
}
}

void ordenacaoPorSelecaoV2(int v2[150000], int tamanho) {

int c9, k, x;

for(c9=0; c9<tamanho-1; c9++) {
k=selMin(v2,c9,150000);
x=v2[c9];
v2[c9]=v2[k];
v2[k]=x;
}
}

void ordenacaoPorInsercaoV3(int v3[150000], int tamanho){

int c10,d,atual;

for(c10=1; c10<tamanho; c10++){
    atual = v3[c10];
    for(d=c10-1;(d>=0)&&(atual<v3[d]);d--){
    v3[d+1]=v3[d];
    }
    v3[d+1]=atual;
  }
}

int buscaBinariaV3(int item, int v3[150000], int tamanho){
int i2,f,m;
i2=0;
f=tamanho-1;
 while(i2<=f){
    m=(i2+f)/2;
    if(item==v3[m]){
        printf("Numero presente\n");
        system("pause");
        return 1;
    }
    if(item<v3[m]){
    f=m-1;}else{
    i2=m+1;}
}
printf("Numero nao encontrado\n");
system("pause");
return 0;
}

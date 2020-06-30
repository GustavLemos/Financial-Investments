#include<stdio.h>
#include<stdlib.h>
// na versão atual a análise é feita no período de 5dias a 6 meses tirando de
// referencia os gráficos fornecidos pelo google
//Código desenvolvido por Gustavo Lemos dos Santos
int main(void){
    
    /* escopo de variaveis*/
    float piso = 0; // piso mais baixo do gráfico da cotação 
    float teto = 0;// teto mais alto do gráfico da cotação 
    float atual = 0;// valor atual do ativo   
    /* Inputs:*/
    printf("\t\t\t BEM VINDO AO ANALISADOR DE ATIVOS TIPO:COMPRA V1.0\n\n\n");
    printf("Insira a maior baixa no periodo de 6 meses:\n");
    scanf("piso=%f",piso);
    printf("Insira a maior alta no periodo de 6 meses:\n");
    scanf("Teto=%f",teto);
    printf("Insira o valor atual do ativo:\n");
    scanf("Atual=%f",atual);
    /* Processamento:*/
    /* 1-Compra:*/
    float piso1= piso + (piso/2);
    float piso2= piso + (piso/4);
    float block= piso+piso;
    if (atual > piso && (atual<piso1 || atual<piso2))
    {
        printf("Está um bom dia pra investir neste ativo!!");
    }
    if (atual > block || atual > teto)
    {
        printf("Não é um bom dia para investir nesta ação!");
    }
    system("pause");
    return 0;
}
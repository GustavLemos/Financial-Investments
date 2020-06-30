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
    float cota = 0;//valor da cota de quando vc adquiriu   
    /* Inputs:*/
    printf("\t\t\t BEM VINDO AO ANALISADOR DE ATIVOS TIPO:VENDA V1.0\n\n\n");
    printf("Insira a maior baixa no periodo de 6 meses:\n");
    scanf("piso=%f",piso);
    printf("Insira a maior alta no periodo de 6 meses:\n");
    scanf("Teto=%f",teto);
    printf("Insira o valor atual do ativo:\n");
    scanf("Atual=%f",atual);
    printf("Insira o valor da cota que voce adquiriu do ativo:\n");
    scanf("Atual=%f",cota);
    /* Processamento:*/
    /* 1-Venda:*/
    float lucro1=cota + (cota/4);//25% a 50% de lucro
    float lucro2=cota + (cota/2);//50% a 100% de lucro
    float lucro3=cota + cota;//100% ou superior  
    if(atual >= lucro1 && atual < lucro2){
        printf("Seu lucro atual está acima 25 a 50 por cento nesta ação!!");
    }
    if(atual >= lucro2 && atual < lucro3){
        printf("Seu lucro atual está acima 50 a 100 por cento nesta ação!!");
    }
    if(atual > lucro3){
        printf("Seu lucro atual ultrapassar 100 por cento nesta ação!!!");
    }
    float preju1=cota - (cota/4);//25% a 50% de prejuizo 
    float preju2=cota - (cota/2);//50% a 100% de prejuizo 
    if(atual <= preju1 && atual > preju2){
        printf("Seu prejuizo já soma mais de 25 a 50 por cento nesta ação!");
    }    
    if(atual <= preju2){
        printf("ATENÇÃO/n/t O valor atual está mais de 50 por cento menor do que o valor comprado, reconsidere vender/n para que o prejuizo não seja tão alto!!");
    }
    system("pause");
    return 0;

}
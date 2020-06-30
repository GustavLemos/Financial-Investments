#código desenvolvido por Gustavo Lemos dos Santos Desenvolvedor Full Stack
#Home Broker é um sistema oferecido por diversas companhias para conectar 
# seus usuários ao pregão eletrônico no mercado de capitais e no mercado de 
# private equity.Está é uma simulação de um sistema home broker com as funções
# de venda, compra e aumento ou baixa randomica nas ações

import sys
from random import uniform

print("BEM VINDO AO HOME BROKER\n\t\t\t\t") 
op=0



print('Escolha uma das opções a baixo:\n 1-Loguin; \n 2-Sair.')
loop=0
op=input('Opção:\n')
str(op)

if  op=='1':
    user=input('User:\n')
    password=input('Senha:\n')
    str(password)
    str(user)   
    info1='gusta4'
    info2='gtx4' 
    loop=1 
    if user!=info1 and password !=info2:
        nd=input('Loguin ou senha errada')
        exit()
else:
    exit()                
while 1==1:
    acao=input('Escolha uma das opções a baixo:\n 1-Compra;\n 2-Venda.\n 3-Sair.\n')
    str(acao)
    if acao is '1':    
        papel=input('Escreva o papel:\n')
        valor=input('Coloque o valor cotação:\n')
        lote=input('Coloque a quabtidade de lotes desejados..cotaçãox100:\n')
        valor=float(valor)
        lote=float(lote)
        cotademo=valor*(100*lote)
        confirma=input('Deseja comprar:{cotademo} reais\n 1-Sim;\n 2-Não.\n\n'.format(cotademo=cotademo))
        str(confirma)
        if confirma is '1':
            cotafinal=cotademo
            print('Compra realizada com sucesso!\nValor:{cotafinal} da empresa {papel}\n\n'.format(cotafinal=cotafinal,papel=papel))                
        elif confirma is '2':
            pass
    elif acao is '2':
        print('Venda:\n,{papel}\t,{cotafinal} reais'.format(papel=papel,cotafinal=cotafinal))
        atualvariation=uniform(-9, 9)
        spannumber=cotafinal*(atualvariation/100)
        print('Variação da cotação da empresa papel:\t{spannumberpercent}%'.format(spannumberpercent=spannumber/100))
        confirma2=input('Deseja vender:{spannumbertotal} reais\n 1-Sim;\n 2-Não.\n'.format(spannumbertotal=spannumber+cotafinal))
        str(confirma2)
        if confirma2 is '1':
            float(venda)
            cotafinal=cotademo
            print('Venda realizada com sucesso!\n Valor:'.format(spannumber=spannumber))
            nd=input('Clique enter para sair!') 
        elif confirma2 is '2':
            pass    
    elif acao is '3':
        nd=input('Clique enter para sair!')   
        exit()         







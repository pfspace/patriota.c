/****************************************************************
* Title: PATRIOTA.C
* Description: Reinicia contagem regressiva de 72 horas 
*              infinitamente para manter a 
*              "militância patriótica" alienada 
*              e mobilizada
* Author: Paulo Freire Silva
* (Minha singela contribuição para com a pátria!)
* Created at: thu 1st dec 2022 19:26:51 -03 
* Computer: UNKNOWN
* System: Linux xx.xx.xx-CUSTOM on x86_64
*
* Copyright (CC0) 2022 Paulo Freire Silva. No rights reserved.
* Under CC0 license. This code is in Public Domain.
*****************************************************************/

#include     <stdio.h>
#include    <unistd.h>
#include    <stdlib.h>

int hora, minuto, segundo;

int renova_animo_dos_patriotas()
{

    // Renova ânimo da militância patriótica!!    
    printf("\
    \n\nCalma, patriotas!!! Agora é pra valer!!! \n\
Tudo será resolvido nas próximas 72 horas!! \nNão desistam!!\
Não percam as esperanças! \n\
É pelo Brasil!! SELVA!!! \n\n\
Pressione alguma tecla para continuar lutando pelo Brasil!\n\n");
    
    fflush(stdout);
    getc(stdin);

    hora=71;
    minuto=59;
    segundo=59;
    
    return 0;
    
}
    
int main()
{

    hora   = 71;
    minuto = 59;
    segundo = 59;
 
    while(1)
    {
        //limpa tela
        system("clear");
         
        //exibe o timer no formato HH : MM : SS 
        printf("Atenção, Patriotas! Trago novidades! \
Tudo será resolvido nas próximas 72 horas! \n\
Faltam apenas %02d : %02d : %02d! \n\
Não desistam! SELVA!\n\
",hora,minuto,segundo);
         
         //limpa o buffer de saída no gcc
        fflush(stdout);
         
         //decrementa 1 segundo
        segundo--;
 
        //atualiza contador
        if(segundo==0 && minuto != 0)
        {
            minuto-=1;
            segundo=59;
        }
        if(minuto==0 && hora !=0)
        {
            hora-=1;
            minuto=59;
        }
        if(hora==0 && minuto==0 && segundo==0)
        {
            // Renova o ânimo dos patriotas com mentiras
            // e frases de efeito
            // e reinicia a contagem regressiva
            renova_animo_dos_patriotas();        
        }
        
        sleep(1);   //aguarda 1 segundo
    }    
 
    return 0;
    
}

#include <stdio.h>
#include "struct.h"
#include <string.h>

Data newData(){
    Data data = {
        .dia = getDia(),
        .mes = getMes(),
        .ano = getAno()
    };

    return data;
}

void showData(Data data){
    printf("%i/%i/%i \n", data.dia, data.mes, data.ano);
}


int getDia(){
    int dia;

    printf("Informe o dia: ");
    scanf("%i",  &dia);

    while (dia <= 0 || dia > 31){
        printf("Insira um dia válido, entre 1 e 31: ");
        scanf("%i", &dia);
    }

    return dia;
}

void showDia(Data data){
    printf("%i \n", data.dia);
}

int getMes(){
    int mes;

    printf("Informe o mes: ");
    scanf("%i",  &mes);

    while (mes <= 0 || mes > 12){
        printf("Insira um mes valido, entre 1 e 12: ");
        scanf("%i", &mes);
    }

    return mes;
}

void showMes(Data data){
    printf("%i \n", data.mes);
}

int getAno(){
    int ano;

    printf("Informe o ano: ");
    scanf("%i",  &ano);

    while (ano <= 0){
        printf("Insira um ano valido: ");
        scanf("%i", &ano);
    }

    return ano;
}

void showAno(Data data){
    printf("%i \n", data.ano);
}
#include <stdio.h>

int main(){

        char estado1, estado2;
        char codigo1[4], codigo2[4];
        char nome_cidade1[45], nome_cidade2[45];
       unsigned long int populacao1, populacao2;
        float  area1, area2;
        float pib, pib2;
        int num_ponto_turistico1, num_ponto_turistico2,poder,poder4,poder2,poder3;
        float divisao1, divisao2, divi3, divi4;
        float total1, totaL2;
        float superpoder1, superpoder2;
       
         printf("---- CADASTRO CARTA 1 ----\n\n");
                
            printf("--Digite o estado (Uma letra de 'A' a 'b'): \n");
            scanf(" %c", &estado1);
                
            printf("--Digite o código da cidade (A letra do estado e um número de 01 a 04): \n");
            scanf("%s", codigo1);
            printf("--Digite o nome da cidade: \n");
            scanf(" %s[^\n]", nome_cidade1);
    
            printf("--Digite a população da cidade: \n");
            scanf("%lu", &populacao1);
    
            printf("--Digite a area da cidade em KM2: \n");
            scanf("%f", &area1);
    
            printf("--Digite o PIB da cidade em bilhões: \n");
            scanf("%f", &pib);
    
            printf("--Digite o número de pontos turísticos: \n");
            scanf("%d", &num_ponto_turistico1);

           divisao1  = (populacao1 + area1) / 2;

           divi3 = (pib+populacao1) / 2;

            printf("\n--Carta 1--\n\n");
            printf("-Estado: %c\n", estado1);
            printf("-Código da cidade: %s\n", codigo1);
            printf("-Nome da Cidade: %s\n", nome_cidade1);
            printf("-População da cidade: %lu\n", populacao1);
            printf("-Área da cidade em km²: %.2f KM²\n", area1);
            printf("-PIB da cidade em bilhões de reais: %.2f bilhões de reais\n", pib);
            printf("-Número de pontos turísticos: %d\n", num_ponto_turistico1);
            printf("-Densidade populacional: %.2f hab/km²\n", divisao1);
            printf("-PIB per capita: %.2f reais\n", divi3);
            superpoder1= area1+ populacao1 + pib + num_ponto_turistico1 + (populacao1/area1) + (populacao1/pib);
           printf("super força: %.2f\n\n", superpoder1);

           printf("---- CADASTRO CARTA 2 ----\n\n");
                
            printf("--Digite o estado (Uma letra de 'A' a 'b'): \n");
            scanf(" %c", &estado2);
                
            printf("--Digite o código da cidade (A letra do estado e um número de 01 a 04): \n");
            scanf("%s", codigo2);
          
            printf("--Digite o nome da cidade: \n");
            scanf(" %s[^\n]", nome_cidade2);
    
            printf("--Digite a população da cidade: \n");
            scanf("%lu", &populacao2);
    
            printf("--Digite a area da cidade em KM2: \n");
            scanf("%f", &area2);
    
            printf("--Digite o PIB da cidade em bilhões: \n");
            scanf("%f", &pib2);
    
            printf("--Digite o número de pontos turísticos: \n");
            scanf("%d", &num_ponto_turistico2);

            divisao2  = (populacao2 + area2) / 2;

            divi4 = (pib2+populacao2) / 2;
           
           
        printf("\n--Carta 2--\n\n");
            printf("-Estado: %c\n", estado2);
            printf("-Código da cidade: %s\n", codigo2);
            printf("-Nome da Cidade: %s\n", nome_cidade2);
            printf("-População da cidade: %lu\n", populacao2);
            printf("-Área da cidade em km²: %.2f KM²\n", area2);
            printf("-PIB da cidade em bilhões de reais: %.2f bilhões de reais\n", pib2);
            printf("-Número de pontos turísticos: %d\n", num_ponto_turistico2);
            printf("-Densidade populacional: %.2f hab/km²\n", divisao2);
            printf("-PIB per capita: %.2f reais\n", divi4);
            superpoder2= area2+ populacao2 + pib2 + num_ponto_turistico2 + (populacao2/area2) + (populacao2/pib2);
            printf("força total: %.2f\n\n\n", superpoder2);

            printf("---- resultado ----\n\n");
           
           poder = pib>pib2;

          poder2= populacao1>populacao2;
           printf("populacao 1: %lu, populacao2: %lu, populacao 1 ganhou: %d\n",populacao1, populacao2, poder2);
           printf("PIB1: %.2f, pib2: %.2f , pib 1 venceu?: %d\n",pib, pib2, poder);
           poder3 = area1>area2;
           printf("area1: %.2f area 2: %.2f, area1 venceu?: %d\n", area1, area2,poder3);
           poder4 = num_ponto_turistico1>num_ponto_turistico2;
           printf("nummpontos turisticos1: %d, numpontos turisticos 2: %d , numpontos turisticos1 venceu?: %d\n",num_ponto_turistico1, num_ponto_turistico2, poder4);


}
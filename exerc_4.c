#include <stdio.h>
#include <string.h>
#define TAM 5

struct personagens{

    char nome[71], tipo[31];
    int forca, agilidade, inteligencia, armadura, vida, mana;

};

int main(){

    struct personagens dados[TAM];
    int i;

    for(i = 0; i < TAM; i++){

        dados[i].forca = 1;
        dados[i].agilidade = 1;
        dados[i].inteligencia = 1;

        printf("Digite o nome do personagem %d:\n", i+1);
        gets(dados[i].nome);
        setbuf(stdin, NULL);

        do{

            if ((dados[i].forca+dados[i].agilidade+dados[i].inteligencia)>= 80 || (dados[i].forca <= 0) || (dados[i].agilidade <= 0) || (dados[i].inteligencia <= 0)){
            
                printf("A soma da forca, agilidade e inteligencia nao e menor que 80 ou algum dos atributos e menor ou igual a 0, preencha os valores do personagem %s novamente\n\n", dados[i].nome);

            }

            printf("Digite os valores de forca, agilidade e inteligencia respectivamente, sendo todos maiores do que 0 e sua soma menor que 80:\n");
            setbuf(stdin, NULL);
            scanf("%d", &dados[i].forca);
            setbuf(stdin, NULL);
            scanf("%d", &dados[i].agilidade);
            setbuf(stdin, NULL);
            scanf("%d", &dados[i].inteligencia);
            setbuf(stdin, NULL);

        } while ((dados[i].forca+dados[i].agilidade+dados[i].inteligencia)>= 80 || (dados[i].forca <= 0) || (dados[i].agilidade <= 0) || (dados[i].inteligencia <= 0));
        
        dados[i].armadura = dados[i].agilidade/2;
        dados[i].vida = 20*dados[i].forca;
        dados[i].mana = 40*dados[i].inteligencia;

        if (dados[i].forca > dados[i].agilidade && dados[i].forca > dados[i].inteligencia){

            strcpy(dados[i].tipo, "Forca");

        }else if(dados[i].forca > dados[i].agilidade && dados[i].forca == dados[i].inteligencia){

            strcpy(dados[i].tipo, "Forca e inteligencia");

        }else if(dados[i].forca == dados[i].agilidade && dados[i].forca > dados[i].inteligencia){

            strcpy(dados[i].tipo, "Forca e agilidade");

        }else if(dados[i].agilidade > dados[i].forca && dados[i].agilidade > dados[i].inteligencia){

            strcpy(dados[i].tipo, "Agilidade");

        }else if(dados[i].agilidade > dados[i].forca && dados[i].agilidade == dados[i].inteligencia){

            strcpy(dados[i].tipo, "Agilidade e inteligencia");

        }else if(dados[i].inteligencia > dados[i].forca && dados[i].inteligencia > dados[i].agilidade){

            strcpy(dados[i].tipo, "Inteligencia");

        }else if(dados[i].inteligencia == dados[i].forca && dados[i].inteligencia == dados[i].agilidade){

            strcpy(dados[i].tipo, "Forca, agilidade e inteligencia");

        }
        
    }

    for (i = 0; i < TAM; i++){
        
        printf("\n");
        printf("Personagem %d: %s\n", i+1, dados[i].nome);
        printf("Tipo: %s\n", dados[i].tipo);
        printf("Forca: %d\n", dados[i].forca);
        printf("Agilidade: %d\n", dados[i].agilidade);
        printf("Inteligencia: %d\n", dados[i].inteligencia);
        printf("Armadura: %d\n", dados[i].armadura);
        printf("Pontos de vida: %d\n", dados[i].vida);
        printf("Pontos de mana: %d\n", dados[i].mana);
        printf("\n");

    }
    
}
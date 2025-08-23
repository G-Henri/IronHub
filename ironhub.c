#include <stdio.h>
#include <stdlib.h>

void StrengthCalculator () {
    int oneRM, peso, reps;
    int RM95, RM90, RM85, RM80, RM75;

    system("clear");
    printf("╔══════════════════════════════════════════════╗\n");
    printf("║          MENU_CALCULADORA DE FORÇA           ║\n");
    printf("╚══════════════════════════════════════════════╝\n");
    printf("➤ Carga (kg): ");
    scanf("%d", &peso);
    printf("➤ Repetições: ");
    scanf("%d", &reps);

    oneRM = peso*(1+(reps/30.0));
    
    if (reps == 1) {
        printf("\n➤ 2RM: %d kg", peso);
        printf("\n➤ 3RM: %d kg", peso);
        printf("\n➤ 4RM: %d kg", peso);
        printf("\n➤ 5RM: %d kg", peso);
        printf("\n➤ 6RM: %d kg", peso);
        printf("\n➤ 7RM: %d kg", peso);
        printf("\n➤ 8RM: %d kg", peso);
        printf("\n➤ 9RM: %d kg", peso);
        printf("\n➤ 10RM: %d kg\n", peso);
    } else {
        printf("\n➤ 1RM: %d kg", oneRM);
        
        RM95 = (95.0/100.0) * oneRM;
        RM90 = (90.0/100.0) * oneRM;
        RM85 = (85.0/100.0) * oneRM;
        RM80 = (80.0/100.0) * oneRM;
        RM75 = (75.0/100.0) * oneRM;
    

        printf("\n➤ 2RM: %d kg", RM95);
        printf("\n➤ 4RM: %d kg", RM90);
        printf("\n➤ 6RM: %d kg", RM85);
        printf("\n➤ 8RM: %d kg", RM80);
        printf("\n➤ 10RM: %d kg\n", RM75);
    }
}

int main(){ //Função principal - Tela inicial
    int opcao;
    
    system("clear"); //Comando - Limpar tela inicial
    printf("╔══════════════════════════════════════════════════════════════════════════╗\n");
    printf("║  ██╗  ██████╗    ██████╗   ███╗   ██╗     ██╗  ██╗  ██╗   ██╗  ██████╗   ║\n");
    printf("║  ██║  ██╔══██╗  ██╔═══██╗  ███╗   ██║     ██║  ██║  ██║   ██║  ██╔══██╗  ║\n");
    printf("║  ██║  ██████╔╝  ██║   ██║  ██╔██╗ ██║     ███████║  ██║   ██║  ██████╔╝  ║\n");
    printf("║  ██║  ██╔══██╗  ██║   ██║  ██║╚██╗██║     ██╔══██║  ██║   ██║  ██╔══██╗  ║\n");
    printf("║  ██║  ██║  ██║  ╚██████╔╝  ██║ ╚████║     ██║  ██║  ╚██████╔╝  ██████╔╝  ║\n");
    printf("║  ╚═╝  ╚═╝  ╚═╝   ╚═════╝   ╚═╝  ╚═══╝     ╚═╝  ╚═╝   ╚═════╝   ╚═════╝   ║\n");
    printf("╚══════════════════════════════════════════════════════════════════════════╝\n");
    printf("                       1 . CALCULADORA DE FORÇA                             \n");
    printf("════════════════════════════════════════════════════════════════════════════\n");
    printf("➤ Escolha uma opção: ");
    scanf("%d", &opcao);

    if(opcao == 1) {
        StrengthCalculator(); //Modulo StregthCalculator
    }

    return 0;
}

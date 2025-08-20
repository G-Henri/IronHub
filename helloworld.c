#include <stdio.h>

void StrengthCalculator () { //Função 1 - Calculadora de Força
    int peso;
    int reps;

    system("clear");
    printf("╔══════════════════════════════════════════════╗\n");
    printf("║          MENU_CALCULADORA DE FORÇA           ║\n");
    printf("╚══════════════════════════════════════════════╝\n");
    printf("➤ Carga: \n");
    scanf("%d", &peso);
    printf("➤ Repetições: \n");
    scanf("%d", &reps);
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
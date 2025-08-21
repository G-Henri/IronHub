#include <stdio.h>

// Aproximação de e^x usando série de Taylor
float my_exp(float x) {
    float sum = 1.0f;   // termo inicial (n=0)
    float term = 1.0f;  // cada termo da série
    for (int n = 1; n < 20; n++) {  // 20 termos → boa precisão
        term *= x / n;
        sum += term;
    }
    return sum;
}

void StrengthCalculator () { //Função 1 - Calculadora de Força
    int reps, rm, peso;

    system("clear");
    printf("╔══════════════════════════════════════════════╗\n");
    printf("║          MENU_CALCULADORA DE FORÇA           ║\n");
    printf("╚══════════════════════════════════════════════╝\n");
    printf("➤ Carga (kg): ");
    scanf("%d", &peso);
    printf("➤ Repetições: ");
    scanf("%d", &reps);

    // Fórmula de Wathen (1994)
    float exp_val = my_exp(-0.075f * reps);
    rm = (100.0f * peso) / (48.8f + 53.8f * exp_val);

    if(reps == 1) {
        printf("\n➤ 100%_1RM: %d kg\n\n", peso);
    }

    else {
        printf("\n➤ 1RM: %d kg\n\n", rm);
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

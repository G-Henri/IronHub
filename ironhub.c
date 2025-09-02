#include <stdio.h>
#include <stdlib.h>

void strengthcalculator(){ // FUNÇÃO - CALCULADORA DE FORÇA 
    int oneRM, peso, reps;
    int RM95, RM90, RM85, RM80, RM75;

    system("clear");
    printf("┏━━━━━━━━━━━━━━━┓\n");
    printf("┃┏━━━━━━━━━━━━━┓┃\n");
    printf("┃┃  |||---|||  ┃┃\n");
    printf("┃┗━━━━━━━━━━━━━┛┃\n");
    printf("┃[7] [8] [9] [+]┃\n");
    printf("┃[4] [5] [6] [-]┃\n");
    printf("┃[1] [2] [3] [x]┃\n");
    printf("┃[.] [0] [=] [÷]┃\n");
    printf("┗━━━━━━━━━━━━━━━┛\n");

    printf("[+] Carga (kg): ");
    scanf("%d", &peso);
    printf("[+] Repetições: ");
    scanf("%d", &reps);

    oneRM = peso*(1+(reps/30.0));
    RM95 = (95.0/100.0) * oneRM;
    RM90 = (90.0/100.0) * oneRM;
    RM85 = (85.0/100.0) * oneRM;
    RM80 = (80.0/100.0) * oneRM;
    RM75 = (75.0/100.0) * oneRM;

    system("clear");
    printf("╔═════════════════════════╗\n");
    printf("║    T A B E L A _ R M    ║\n");
    printf("╠══════╦════════╦═════════╣\n");
    printf("║ %%RM  ║  REPS  ║  CARGA  ║\n");
    printf("╠══════╬════════╬═════════╣\n");
    printf("║ 100%% ║   1RM  ║ %4d kg ║\n", oneRM);
    printf("║  95%% ║   2RM  ║ %4d kg ║\n", RM95);
    printf("║  90%% ║   4RM  ║ %4d kg ║\n", RM90);
    printf("║  85%% ║   6RM  ║ %4d kg ║\n", RM85);
    printf("║  80%% ║   8RM  ║ %4d kg ║\n", RM80);
    printf("║  75%% ║  10RM  ║ %4d kg ║\n", RM75);
    printf("╚══════╩════════╩═════════╝\n");

    printf("[<]- Voltar... ");
    getchar(); getchar();
}

void diet(){

    system("clear");                  
    printf("                _______               \n");
    printf("             .-' _____ '-.       /|   \n");
    printf("   ||||    .' .-'.  ':'-. '.    | |   \n");
    printf("   ||||   / .''::: .:    '. \   | |   \n");
    printf("   \__/  / /   :::::'      \ \  | |   \n");
    printf("    ||  | ;.    ':' `       ; | \ |   \n");
    printf("    ||  | |       '..       | |  ||   \n");
    printf("    ##  | ; '      ::::.    ; |  ##   \n");
    printf("    ##   \ \       '::::   / /   ##   \n");
    printf("    ##    \ '.      :::  .' /    ##   \n");
    printf("    ##     '. '-.___'_.-' .'     ##   \n");
    printf("    ##       '-._______.-'       ##   \n");

    printf("[<]- Voltar... ");
    getchar(); getchar();

}

int main(){ // FUNÇÃO - MENU_INICIAL
    char op_menu;
    int loop = 1;
    
    while (loop) {
        system("clear"); //Comando - Limpar tela inicial
        printf("╔══════════════════════════════════════════════════════════════════════════╗\n");
        printf("║  ██╗  ██████╗    ██████╗   ███╗   ██╗     ██╗  ██╗  ██╗   ██╗  ██████╗   ║\n");
        printf("║  ██║  ██╔══██╗  ██╔═══██╗  ███╗   ██║     ██║  ██║  ██║   ██║  ██╔══██╗  ║\n");
        printf("║  ██║  ██████╔╝  ██║   ██║  ██╔██╗ ██║     ███████║  ██║   ██║  ██████╔╝  ║\n");
        printf("║  ██║  ██╔══██╗  ██║   ██║  ██║╚██╗██║     ██╔══██║  ██║   ██║  ██╔══██╗  ║\n");
        printf("║  ██║  ██║  ██║  ╚██████╔╝  ██║ ╚████║     ██║  ██║  ╚██████╔╝  ██████╔╝  ║\n");
        printf("║  ╚═╝  ╚═╝  ╚═╝   ╚═════╝   ╚═╝  ╚═══╝     ╚═╝  ╚═╝   ╚═════╝   ╚═════╝   ║\n");
        printf("╚══════════════════════════════════════════════════════════════════════════╝\n");
        printf("                       1 . CALCULADORA_RM                                   \n");
        printf("                       2 . DIETA                                            \n");
        printf("════════════════════════════════════════════════════════════════════════════\n");
        printf("➤ Escolha uma opção: ");

        scanf(" %c", &op_menu);

        op_menu = getchar();

        switch (op_menu)
        {
        case '1':
            strengthcalculator();
            break;
        case '2':
            diet();
            break;
        case '0':
            loop = 0;
            break;
        default:
            printf("Error");
            getchar();
            break;
        }
    }

    return 0;
}

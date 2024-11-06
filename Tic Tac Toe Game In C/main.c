#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int play, playx, playo, choice, control, p1;
    char playerx[10], playero[10], matrix[3][3];
    play = 0;
    matrix[1][1] = '1';
    matrix[1][2] = '2';
    matrix[1][3] = '3';
    matrix[2][1] = '4';
    matrix[2][2] = '5';
    matrix[2][3] = '6';
    matrix[3][1] = '7';
    matrix[3][2] = '8';
    matrix[3][3] = '9';

    printf("\n\n");

    while (play == 0) {
        printf("############################################\n");
        printf("#                                          #\n");
        printf("#                 tic                      #\n");
        printf("#                 tac                      #\n");
        printf("#                 toe                      #\n");
        printf("#                                          #\n");
        printf("#               2 - rules                  #\n");
        printf("#              1 - credits                 #\n");
        printf("#                                          #\n");
        printf("#                                          #\n");
        printf("############################################\n");
        scanf("%d", &choice);
        //choice == 1 is to rules, == 2 is to play the game
        if (choice == 2) {
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            printf("############################################\n");
            printf("#                |RULES|                   #\n");
            printf("#              make a line                 #\n");
            printf("#                  and                     #\n");
            printf("#                you win                   #\n");
            printf("#                 |OBS|                    #\n");
            printf("#               TRY TO USE                 #\n");
            printf("#                 NUMPAD                   #\n");
            printf("#            *press 1 to play              #\n");
            printf("#            *press 0 to return            #\n");
            printf("############################################\n");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            scanf("%d", &play);
        }
        if (choice == 1) {
            printf("############################################\n");
            printf("#                                          #\n");
            printf("#                                          #\n");
            printf("#                                          #\n");
            printf("#                                          #\n");
            printf("#             game dev: CDud               #\n");
            printf("#                                          #\n");
            printf("#                                          #\n");
            printf("#            *press 0 to return            #\n");
            printf("#            *press 1 to play              #\n");
            printf("############################################\n");
            scanf("%d", &play);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        }
    }
    while (play == 1) {
        printf("############################################\n");
        printf("#                                          #\n");
        printf("#            name of X player:             #\n");
        printf("#                                          #\n");
        printf("#                                          #\n");
        printf("#                                          #\n");
        printf("#                                          #\n");
        printf("#                                          #\n");
        printf("#                                          #\n");
        printf("#                                          #\n");
        printf("############################################\n");
        scanf("%s", &playerx);
        play = 2;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    }
    while (play == 2) {
        printf("############################################\n");
        printf("#                                          #\n");
        printf("#            name of X player: %s           \n", playerx);
        printf("#                                          #\n");
        printf("#                                          #\n");
        printf("#            name of O player:              \n");
        printf("#                                          #\n");
        printf("#                                          #\n");
        printf("#                                          #\n");
        printf("#                                          #\n");
        printf("############################################\n");
        scanf("%s", &playero);
        play = 3;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    }
    while (play == 3) {
        printf("############################################\n");
        printf("#                                          #\n");
        printf("#            name of X player: %s           \n", playerx);
        printf("#                                          #\n");
        printf("#                                          #\n");
        printf("#            name of O player: %s           \n", playero);
        printf("#                                          #\n");
        printf("#                                          #\n");
        printf("#            press 1 to start              #\n");
        printf("#                                          #\n");
        printf("############################################\n");
        scanf("%d", &play);
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    }
    //here is the game, i think this is chaotic, but i will use a for to repeat an while
    for (int k = 0; k < 9; k++) {
        play = 1;
        while (play == 1) {
            printf("     #     #    \n");
            printf("  %c  #  %c  #  %c   \n", matrix[1][1], matrix[1][2],matrix[1][3]);
            printf("     #     #    \n");
            printf("#################\n");
            printf("     #     #    \n");
            printf("  %c  #  %c  #  %c   \n", matrix[2][1], matrix[2][2],matrix[2][3]);
            printf("     #     #    \n");
            printf("#################\n");
            printf("     #     #    \n");
            printf("  %c  #  %c  #  %c   \n", matrix[3][1], matrix[3][2],matrix[3][3]);
            printf("     #     #    \n");
            printf("player X, which position your want: ");
            scanf("%d", &p1);
                for (int i = 0; i < 1; i++) {
                    if (p1 == 1) {
                    if ((matrix[1][1] == 'O') || (matrix[1][1] == 'X')) {
                        printf("this slot is ocuped");
                    } else if (p1 == 1) {
                    matrix[1][1] = 'X';
                    }
                }
                if (p1 == 2) {
                    if ((matrix[1][2] == 'O') || (matrix[1][2] == 'X')) {
                        printf("this slot is ocuped");
                    } else if (p1 == 2) {
                    matrix[1][2] = 'X';
                    }
                }
                if (p1 == 3) {
                    if ((matrix[1][3] == 'X') || (matrix[1][3] == 'X')) {
                        printf("this slot is ocuped");
                    } else if (p1 == 3) {
                    matrix[1][3] = 'X';
                    }
                }
                if (p1 == 4) {
                    if ((matrix[2][1] == 'O') || (matrix[2][1] == 'X')) {
                        printf("this slot is ocuped");
                    } else if (p1 == 4) {
                    matrix[2][1] = 'X';
                    }
                }
                if (p1 == 5) {
                    if ((matrix[2][2] == 'X') || (matrix[2][2] == 'X')) {
                        printf("this slot is ocuped");
                    } else if (p1 == 5) {
                    matrix[2][2] = 'X';
                    }
                }
                if (p1 == 6) {
                    if ((matrix[2][3] == 'O') || (matrix[2][3] == 'X')) {
                        printf("this slot is ocuped");
                    } else if (p1 == 6) {
                    matrix[2][3] = 'X';
                    }
                }
                if (p1 == 7) {
                    if ((matrix[3][1] == 'O') || (matrix[3][1] == 'X')) {
                        printf("this slot is ocuped");
                    } else if (p1 == 7) {
                    matrix[3][1] = 'X';
                    }
                }
                if (p1 == 8) {
                    if ((matrix[3][2] == 'O') || (matrix[3][2] == 'X')) {
                        printf("this slot is ocuped");
                    } else if (p1 == 8) {
                    matrix[3][2] = 'X';
                    }
                }
                if (p1 == 9) {
                    if ((matrix[3][3] == 'O') || (matrix[3][3] == 'X')) {
                        printf("this slot is ocuped");
                    } else if (p1 == 9) {
                    matrix[3][3] = 'X';
                    }

                }
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            printf("     #     #    \n");
            printf("  %c  #  %c  #  %c   \n", matrix[1][1], matrix[1][2],matrix[1][3]);
            printf("     #     #    \n");
            printf("#################\n");
            printf("     #     #    \n");
            printf("  %c  #  %c  #  %c   \n", matrix[2][1], matrix[2][2],matrix[2][3]);
            printf("     #     #    \n");
            printf("#################\n");
            printf("     #     #    \n");
            printf("  %c  #  %c  #  %c   \n", matrix[3][1], matrix[3][2],matrix[3][3]);
            printf("     #     #    \n");
            for (int f = 0; f < 1; f++) {
                printf("player O, which position your want: ");
                scanf("%d", &p1);
                if (p1 == 1) {
                    if ((matrix[1][1] == 'X') || (matrix[1][1] == '0')) {
                        printf("this slot is ocuped");
                    } else if (p1 == 1) {
                    matrix[1][1] = 'O';
                    }
                }
                if (p1 == 2) {
                    if ((matrix[1][2] == 'X') || (matrix[1][2] == '0')) {
                        printf("this slot is ocuped");
                    } else if (p1 == 2) {
                    matrix[1][2] = 'O';
                    }
                }
                if (p1 == 3) {
                    if ((matrix[1][3] == 'X') || (matrix[1][3] == '0')) {
                        printf("this slot is ocuped");
                    } else if (p1 == 3) {
                    matrix[1][3] = 'O';
                    }
                }
                if (p1 == 4) {
                    if ((matrix[2][1] == 'X') || (matrix[2][1] == '0')) {
                        printf("this slot is ocuped");
                    } else if (p1 == 4) {
                    matrix[2][1] = 'O';
                    }
                }
                if (p1 == 5) {
                    if ((matrix[2][2] == 'X') || (matrix[2][2] == '0')) {
                        printf("this slot is ocuped");
                    } else if (p1 == 5) {
                    matrix[2][2] = 'O';
                    }
                }
                if (p1 == 6) {
                    if ((matrix[2][3] == 'X') || (matrix[2][3] == '0')) {
                        printf("this slot is ocuped");
                    } else if (p1 == 6) {
                    matrix[2][3] = 'O';
                    }
                }
                if (p1 == 7) {
                    if ((matrix[3][1] == 'X') || (matrix[3][1] == '0')) {
                        printf("this slot is ocuped");
                    } else if (p1 == 7) {
                    matrix[3][1] = 'O';
                    }
                }
                if (p1 == 8) {
                    if ((matrix[3][2] == 'X') || (matrix[3][2] == '0')) {
                        printf("this slot is ocuped");
                    } else if (p1 == 8) {
                    matrix[3][2] = 'O';
                    }
                }
                if (p1 == 9) {
                    if ((matrix[3][3] == 'X') || (matrix[3][3] == '0')) {
                        printf("this slot is ocuped");
                    } else if (p1 == 9) {
                    matrix[3][3] = 'O';
                    }
                }
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            }
        }
        if (matrix[1][1] == matrix[1][2] && matrix[1][2] == matrix[1][3]) {
        if (matrix[1][1] = 'X') {
            printf("%s win", playerx);
        } else {
        printf("%s win", playero);
        }
        }
        if (matrix[1][1] == matrix[2][1] && matrix[1][2] == matrix[3][1]) {
        if (matrix[1][1] = 'X') {
            printf("%s win", playerx);
        } else {
        printf("%s win", playero);
        }
        }
        if (matrix[1][1] == matrix[2][2] && matrix[2][2] == matrix[3][3]) {
        if (matrix[1][1] = 'X') {
            printf("%s win", playerx);
        } else {
        printf("%s win", playero);
        }
        }
        if (matrix[1][3] == matrix[2][3] && matrix[2][3] == matrix[3][3]) {
        if (matrix[1][3] = 'X') {
            printf("%s win", playerx);
        } else {
        printf("%s win", playero);
        }
        }
        if (matrix[3][1] == matrix[3][2] && matrix[3][2] == matrix[3][3]) {
        if (matrix[3][1] = 'X') {
            printf("%s win", playerx);
        } else {
        printf("%s win", playero);
        }
        }
        if (matrix[3][1] == matrix[2][2] && matrix[2][2] == matrix[1][3]) {
        if (matrix[3][1] = 'X') {
            printf("%s win", playerx);
        } else {
        printf("%s win", playero);
        }
        }
        if (matrix[2][1] == matrix[2][2] && matrix[2][2] == matrix[2][3]) {
        if (matrix[2][1] = 'X') {
            printf("%s win", playerx);
        } else {
        printf("%s win", playero);
        }
        }
        if (matrix[1][2] == matrix[2][2] && matrix[2][2] == matrix[3][2]) {
        if (matrix[1][2] = 'X') {
            printf("%s win", playerx);
        } else {
        printf("%s win", playero);
        }
        }
        play = 2;
        play = 2;
    }
    }
    //this code is a complete chaos, some day a remake this
    return 0;
}

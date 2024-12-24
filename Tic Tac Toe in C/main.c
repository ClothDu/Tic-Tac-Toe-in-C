#include <stdio.h>
#include <stdlib.h>
#define l 5
#define c 5

int main()
{
    int control, controlM, op, p1, round, room;
    char p[8], p2[8];
    controlM = 0;
    room = 0;
    char matriz[l][c] = {
        {'1', '#', '2', '#', '3'},
        {'#', '#', '#', '#', '#'},
        {'4', '#', '5', '#', '6'},
        {'#', '#', '#', '#', '#'},
        {'7', '#', '8', '#', '9'},
    };

    for (int i = 0; i <= control;) {
        while (room == 0) {
            printf("OPTION(1)\nSTART(2)\nRULES(3)\nDEV(4)\nyour choice: ");
            scanf("%d", &room);
        }

        while (room == 1) {
            printf("OPTIONS\n");
            printf("return(0)");
            scanf("%d", &room);
        }
        while (room == 2) {
            printf("Nome do player 1: ");
            scanf("%s", p);
            printf("Nome do player 2: ");
            scanf("%s", p2);
            room = 101;
        }
        while (room == 101) {
            printf("player 1: %s\n", p);
            printf("player 2: %s\n", p2);
            printf("esses nomes estao corretos?\nSIM(1) ou NAO(2): ");
            scanf("%d", &op);
            if (op == 1) {
                controlM = 3;
                break;
            } else {
                room = 2;
            }
        }
        while (room == 3) {
            printf("MARK A LINE OF X OR O\nIF PLAYER CHOICE A MARKED PLACE IN THE BOARD, HER LOSE THE TURN\n");
            printf("RETUNR(0)\n");
            scanf("%d", &room);
        }
        while (room == 4) {
            printf("DEV: ChDud\n");
            printf("RETURN(0)\n");
            scanf("%d", &room);
        }
        while (controlM == 3) {
            //game board
            for (int q = 0; q < l; q++) {
                for (int i = 0; i < l; i++) {
                    for (int j = 0; j < c; j++) {
                        printf("%c", matriz[i][j]);
                    }
                    printf("\n");
                }
                if (q % 2 == 0) {
                    printf("player 1 act: ");
                    scanf("%d", &p1);
                    if (matriz[1][1] == 'O' || matriz[1][1] == 'X') {
                        printf("this slot is ocuped");
                    }
                    else if (p1 == 1) {
                        (matriz[0][0] = 'X');
                    }
                    else if (p1 == 2) {
                        (matriz[0][2] = 'X');
                    }
                    else if (p1 == 3) {
                        (matriz[0][4] = 'X');
                    }
                    else if (p1 == 4) {
                        (matriz[2][0] = 'X');
                    }
                    else if (p1 == 5) {
                        (matriz[2][2] = 'X');
                    }
                    else if (p1 == 6) {
                        (matriz[2][4] = 'X');
                    }
                    else if (p1 == 7) {
                        (matriz[4][0] = 'X');
                    }
                    else if (p1 == 8) {
                        (matriz[4][2] = 'X');
                    }
                    else if (p1 == 9) {
                        (matriz[4][4] = 'X');
                    }
                }
                if (q % 2 != 0) {
                    printf("player 1 act: ");
                    scanf("%d", &p1);
                    if (matriz[1][1] == 'O' || matriz[1][1] == 'X') {
                        printf("this slot is ocuped");
                    }
                    else if (p1 == 1) {
                        (matriz[0][0] = 'O');
                    }
                    else if (p1 == 2) {
                        (matriz[0][2] = 'O');
                    }
                    else if (p1 == 3) {
                        (matriz[0][4] = 'O');
                    }
                    else if (p1 == 4) {
                        (matriz[2][0] = 'O');
                    }
                    else if (p1 == 5) {
                        (matriz[2][2] = 'O');
                    }
                    else if (p1 == 6) {
                        (matriz[2][4] = 'O');
                    }
                    else if (p1 == 7) {
                        (matriz[4][0] = 'O');
                    }
                    else if (p1 == 8) {
                        (matriz[4][2] = 'O');
                    }
                    else if (p1 == 9) {
                        (matriz[4][4] = 'O');
                    }
                }
                if (matriz[0][0] == matriz[0][2] && matriz[0][2] == matriz[0][4]) {
                    if (matriz[0][0] == 'X') {
                        printf("player X win");
                        controlM = 4;
                    }
                    else {
                        printf("player O win");
                        controlM = 4;
                    }
                }
                else if (matriz[2][0] == matriz[2][2] && matriz[2][2] == matriz[2][4]) {
                        if (matriz[2][0] == 'X') {
                            printf("player X win");
                            controlM = 4;
                        }
                        else {
                            printf("player O win");
                            controlM = 4;
                        }
                }
                else if (matriz[4][0] == matriz[4][2] && matriz[4][2] == matriz[4][4]) {
                        if (matriz[4][0] == 'X') {
                            printf("player X win");
                            controlM = 4;
                        }
                        else {
                            printf("player O win");
                            controlM = 4;
                        }
                }
                else if (matriz[0][0] == matriz[2][0] && matriz[2][0] == matriz[4][0]) {
                        if (matriz[0][0] == 'X') {
                            printf("player X win");
                            controlM = 4;
                        }
                        else {
                            printf("player O win");
                            controlM = 4;
                        }
                }
                else if (matriz[0][2] == matriz[2][2] && matriz[2][2] == matriz[4][2]) {
                        if (matriz[0][2] == 'X') {
                            printf("player X win");
                            controlM = 4;
                        }
                        else {
                            printf("player O win");
                            controlM = 4;
                        }
                }
                else if (matriz[0][4] == matriz[2][4] && matriz[2][4] == matriz[4][4]) {
                        if (matriz[0][4] == 'X') {
                            printf("player X win");
                            controlM = 4;
                        }
                        else {
                            printf("player O win");
                            controlM = 4;
                        }
                }
                else if (matriz[0][0] == matriz[2][2] && matriz[2][2] == matriz[4][4]) {
                        if (matriz[0][0] == 'X') {
                            printf("player X win");
                            controlM = 4;
                        }
                        else {
                            printf("player O win");
                            controlM = 4;
                        }
                }
                else if (matriz[0][4] == matriz[2][2] && matriz[2][2] == matriz[4][0]) {
                        if (matriz[0][4] == 'X') {
                            printf("player X win");
                            controlM = 4;
                        }
                        else {
                            printf("player O win");
                            controlM = 4;
                        }
                }
                else {
                    round++;
                    if (round == 9) {
                        printf("drawn\n");
                        controlM = 4;
                    }
                }
            }
        }
        matriz[0][0] = '1';
        matriz[0][2] = '2';
        matriz[0][4] = '3';
        matriz[2][0] = '4';
        matriz[2][2] = '5';
        matriz[2][4] = '6';
        matriz[4][0] = '7';
        matriz[4][2] = '8';
        matriz[4][4] = '9';
        while (controlM == 4) {
            printf("play again?\n YES(1) or NO(2)\n");
            scanf("%d", &op);
            if (op == 1) {
                controlM = 3;
            }
            else {
                controlM = 0;
            }
        }
    }

    return 0;
}

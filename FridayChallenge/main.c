/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: isiwi
 *
 * Created on 3. November 2021, 08:40
 */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>


int main() {
    int choose;
    printf("                                            --------------------------------\n");
    printf("                                            |    Von Mischa Ismael Joao    |\n");
    printf("                                            |                              |\n");
    printf("                                            |    Game 1                    |\n");
    printf("                                            |    Game 2                    |\n");
    printf("                                            |    Game 3                    |\n");
    printf("                                            |    Random Game 4             |\n");
    printf("                                            |                              |\n");
    printf("                                            --------------------------------\n");
               
    printf("                                            Choose a game: ");
    scanf("%d", &choose);
    if (choose >4 || choose < 1) {
        printf("                                            NUMBER BETWEEN 1 AND 4: ");
        scanf("%d", &choose);
    }
}

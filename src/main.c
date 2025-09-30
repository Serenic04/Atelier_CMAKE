#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calculator.h"

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage : %s <operation> <nombres>\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], "add") == 0) {
        if (argc < 4) {
            printf("Usage : %s add <a> <b>\n", argv[0]);
            return 1;
        }
        int a = atoi(argv[2]);
        int b = atoi(argv[3]);
        printf("%d\n", add(a, b));
    }
    else if (strcmp(argv[1], "sub") == 0) {
        if (argc < 4) {
            printf("Usage : %s sub <a> <b>\n", argv[0]);
            return 1;
        }
        int a = atoi(argv[2]);
        int b = atoi(argv[3]);
        printf("%d\n", sub(a, b));
    }
    else if (strcmp(argv[1], "mul") == 0) {
        if (argc < 4) {
            printf("Usage : %s mul <a> <b>\n", argv[0]);
            return 1;
        }
        int a = atoi(argv[2]);
        int b = atoi(argv[3]);
        printf("%d\n", mul(a, b));
    }
    else if (strcmp(argv[1], "div") == 0) {
        if (argc < 4) {
            printf("Usage : %s div <a> <b>\n", argv[0]);
            return 1;
        }
        int a = atoi(argv[2]);
        int b = atoi(argv[3]);
        if (b == 0) {
            printf("Erreur : division par zéro !\n");
            return 1;
        }
        printf("%d\n", divide(a, b));
    }
    // ✅ Nouvelle commande "car"
    else if (strcmp(argv[1], "car") == 0) {
        int val = atoi(argv[2]);
        printf("%d\n", car(val));
    }
    else {
        printf("Commande inconnue : %s\n", argv[1]);
        return 1;
    }

    return 0;
}

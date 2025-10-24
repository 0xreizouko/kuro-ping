/* kping.c */
#include "kping.h"

void show_banner() {
    printf("\n");
    printf("┌────────────────────────────────────────────┐\n");
    printf("│                 kping                      │\n");
    printf("│           kuro ping • v1.0                 │\n");
    printf("│                                            │\n");
    printf("│  Ping but cooler because it's Kuro.        │\n");
    printf("│  for the modern command line.              │\n");
    printf("└────────────────────────────────────────────┘\n");
    printf("usage: kping <IP>");
    printf("\n");
}


int main(int argc, char *argv[]) {
    show_banner();
    return 0;
}

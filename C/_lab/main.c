#include <stdio.h>

enum Command { START, STOP, PAUSE };

void control(enum Command cmd) {
    switch(cmd) {
        case START: printf("시스템 가동\n"); break;
        case STOP:  printf("시스템 중단\n"); break;
    }
}
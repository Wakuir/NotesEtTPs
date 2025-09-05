#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ON '*'
#define OFF '.'
#define LIGHTS 32
#define DELAY_MILLISECONDS 100

#if LIGHTS <= 8
typedef unsigned char t_switch;
#elif LIGHTS <= 16
typedef unsigned short int t_switch;
#elif LIGHTS <= 32
typedef unsigned int t_switch;
#elif LIGHTS <= 64
typedef unsigned long int t_switch;
#endif

#define OCCLUDED_LIGHTS sizeof(t_switch) * 8 - LIGHTS


static void ms_sleep(const unsigned long long int ms) {
    const struct timespec delay = {
        .tv_sec = ms / 1000,
        .tv_nsec = ms % 1000 * 1000000,
    };
    nanosleep(&delay, NULL);
}

t_switch invert(const t_switch state) {
    return state ^ (t_switch) -1;
}

t_switch increment(const t_switch state) {
    return state + 1;
}

t_switch rotateLeft(const t_switch state) {
    const t_switch leftLight = state << (OCCLUDED_LIGHTS) & (t_switch) -1 / 2 + 1;
    return state << 1 | leftLight >> (sizeof(t_switch) * 8 - 1);
}

t_switch rotateRight(const t_switch state) {
    const t_switch rightLight = state & 1 << (OCCLUDED_LIGHTS);
    return rightLight << (sizeof(t_switch) * 8 - (OCCLUDED_LIGHTS + 1)) | state >> 1;
}

void printState(const t_switch state) {
    for (unsigned char i = LIGHTS; i > 0; i--) {
        putchar(state >> (i - 1) & 1 ?  ON : OFF);
    }
    printf("\r");
}

int main() {
    t_switch state = 1;

    for (t_switch i = 0; i < (t_switch) -1; i++) {
        fflush(stdout);
        state = increment(state);
        printState(state);
        ms_sleep(DELAY_MILLISECONDS);
    }

    printf("\n");

    return EXIT_SUCCESS;
}

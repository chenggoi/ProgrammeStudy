/* This is not a good demo. I will use pthread to complete it. */

#include <stdio.h>

typedef void (*way)(int times);

static void shake(int times) {
    int i = 0;
    for (i = 0; i < times; i++)
        printf("Hey! wake up!\n");
}

static void electric(int times) {
    int i = 0;
    for (i = 0; i < times; i++)
        printf("zizi..zizi..\n");
}

static void water(int times) {
    int i = 0;
    for (i = 0; i < times; i++)
        printf("Hey! my little plant!\n");
}

static void sleep() {
    printf("heheh~\n");
}

void wake_me_up(way away, int times) {
    away(times);
}

int receiveletter() {
    return 1;
}

int main() {
    printf("I will go to sleep! If receive a letter, wake me up.\n");
    printf("Use electric shock!!\n");
    sleep();
    if (receiveletter()) {
        wake_me_up(electric, 5);
    }
    return 0;
}

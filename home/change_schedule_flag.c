#include <linux/change_schedule_flag.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <flag>\n", argv[0]);
        return 1;
    }    
    
    int flag = atoi(argv[1]);
    change_schedule_flag(flag);

    return 0;
}

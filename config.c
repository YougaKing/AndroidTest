//
// Created by YougaKing on 2018/3/20.
//

#include "config.h"
#include <stdio.h>
#include <direct.h>
#include <stdlib.h>

char adbPath() {

    FILE *fp;
    fp = fopen("/config.txt", "w+");


    char *buffer;
    //也可以将buffer作为输出参数
    if ((buffer = getcwd(NULL, 0)) == NULL) {
        perror("getcwd error");
    } else {
        printf("%s\n", buffer);
        free(buffer);
    }

    return 'A';
}

char apkDir() {

    return 'B';
}
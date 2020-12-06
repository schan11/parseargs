// Serena Chan
// Systems Level Programming
// 12/03/2020
// Work 14: Get Argumentative

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args(char * line){
    char *str = line;
    char **args;
    int i = 0;
    while (str == NULL){
        args[i] = strsep(&str, " "); // space between each argument
        i++;
    }
    return args;
}


int main(){
    char line[] = "ls -a -l"; // string with command line invocation
    char ** args = parse_args(line);
    execvp(args[0], args);
    return 0;
}

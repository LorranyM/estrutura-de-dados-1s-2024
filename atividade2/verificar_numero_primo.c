#include <stdio.h>
#include <stdlib.h>

int is_prime(int num){
    if (num <= 1){

        return 0;
    }

    for (int i = 2; i * i <= num; i++){
        if(num % i == 0){

            return 0;
        }
    }
    return 1;
}


int main (int argc, char* argv[]){

    if (argc != 2){
        printf("aplicar:%s <num>\n", argv[0]);

        return 1;
    }

    int num = atoi(argv[1]);

    if(is_prime(num)) {
        printf("true\n");

    } else {
        printf("false\n");
    }

    return 0;
}
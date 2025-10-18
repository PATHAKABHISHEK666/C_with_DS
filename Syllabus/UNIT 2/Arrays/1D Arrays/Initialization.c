#include<stdio.h>
#define MAX 10


void main(){

int i, e[MAX] = {12,23,9,17,16,49};

char word[MAX] = {'S','m','i','l','e','\0'};

char mesg[] = "Message of the day is: ";


printf("*** Array Declarations with Initailizers ***");

printf("%s%s",mesg,word);

printf("Initialized Array:\n");

for(i=0;i<MAX;i++){
    printf("%d\n",e[i]);
}


}
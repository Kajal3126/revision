#include<stdio.h>
void printhello();
void printhello(){
    printf("hello word");
    return;
}
int main(){
    printhello();
    printuniverse();
    return 0;
}
void printuniverse();
void printuniverse(){
    printf("hello universe");
    return;
}
void printcall();
void printcall(){
printf("universe call");
return;
}

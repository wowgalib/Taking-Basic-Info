#include<stdio.h>
int main() {
    char Name;
    int ID;
    printf("Hello ICS! I'm taking your basic info.\n");
    printf("Write your name:");
    scanf("%s", Name);
    printf("Write your ID:");
    scanf("%d", &ID);
    printf("Hey dear %s your ID is %d", Name, ID);
    return 0;
}

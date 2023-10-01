/* #include<stdio.h>
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
} */

#include<stdio.h>

int main() {
    char Name[50]; // Declare Name as a character array to store a name
    int ID;

    printf("Hello ICS! I'm taking your basic info.\n");
    printf("Write your name:");
    scanf("%s", Name); // Use a character array to store the name, no & needed
    printf("Write your ID:");
    scanf("%d", &ID); // Use & to read an integer

    printf("Hey dear %s, your ID is %d\n", Name, ID); // Add a newline character

    return 0;
}


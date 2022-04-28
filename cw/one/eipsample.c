#include <stdio.h>
#include <string.h>

int authenticateUser();
void userMenu();
void adminMenu();

int main() {
    int id = authenticateUser();

    if(id > -1) {
        if(id == 0) {
                adminMenu();
        } else {
                userMenu();
        }

        return 0;
    } else {
        printf("Authentication Failed\n");
        return 1;
    }
}

int authenticateUser() {
    char username[16];
    char password[16];

    printf("Username: ");
    scanf("%s", username);

    printf("Password: ");
    scanf("%s", password);

    if(strcmp(username, "user1") == 0 && strcmp(password, "password") == 0) {
        return 1;
    } else if(strcmp(username, "admin") == 0 && strcmp(password, "@dm1n") == 0) {
        return 0;
    }

    return -1;
}

void userMenu() {
    printf("Opening the user menu...\n");
}

void adminMenu() {
    printf("Opening the admin menu...This is a super secret message!!!1!\n");
}

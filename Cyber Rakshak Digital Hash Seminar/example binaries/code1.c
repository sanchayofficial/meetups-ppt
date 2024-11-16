#include <stdio.h>
#include <string.h>

// Simulating device check
void checkDevice() {
    printf("Device check successful.\n");
}

// Simple user authentication
int authenticateUser(const char* username, const char* password) {
    const char* validUsername = "admin";
    const char* validPassword = "password123";

    if (strcmp(username, validUsername) == 0 && strcmp(password, validPassword) == 0) {
        return 1; // Authentication successful
    } else {
        return 0; // Authentication failed
    }
}

int main() {
    checkDevice();

    char username[20];
    char password[20];

    printf("Enter username: ");
    scanf("%19s", username);
    printf("Enter password: ");
    scanf("%19s", password);

    if (authenticateUser(username, password)) {
        printf("Access granted.\n");
    } else {
        printf("Access denied.\n");
    }

    return 0;
}

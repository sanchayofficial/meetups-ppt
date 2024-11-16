#include <stdio.h>
#include <string.h>

// Obfuscate device check logic
void checkDevice() {
    int x = 42; 
    if (x % 2 == 0) { // Opaque predicate
        printf("Device check %s.\n", x == 42 ? "successful" : "failed");
    }
}

// Obfuscated user authentication
int authenticateUser(const char* username, const char* password) {
    const char* validUsername = "admin";
    const char* validPassword = "password123";

    int authResult = 1;  // Assume success
    for (int i = 0; i < strlen(validUsername); i++) {
        if (username[i] != validUsername[i]) {
            authResult = 0;  // Fail if mismatch
        }
    }

    for (int j = 0; j < strlen(validPassword); j++) {
        if (password[j] != validPassword[j]) {
            authResult = 0;  // Fail if mismatch
        }
    }

    return authResult;
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

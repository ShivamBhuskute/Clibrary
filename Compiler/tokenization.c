#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Token types
typedef enum {
    TOKEN_IDENTIFIER,
    TOKEN_NUMBER,
    TOKEN_OPERATOR,
    TOKEN_KEYWORD,
    TOKEN_UNKNOWN
} TokenType;

// Function to classify tokens
TokenType classify_token(const char* token) {
    // Check for keywords
    if (strcmp(token, "if") == 0 || strcmp(token, "else") == 0 ||
        strcmp(token, "while") == 0 || strcmp(token, "return") == 0) {
        return TOKEN_KEYWORD;
    }
    // Check if token is a number
    if (isdigit(token[0])) return TOKEN_NUMBER;
    // Check for identifiers
    if (isalpha(token[0]) || token[0] == '_') return TOKEN_IDENTIFIER;
    // Check for operators
    if (strchr("+-*/=<>", token[0]) != NULL) return TOKEN_OPERATOR;
    return TOKEN_UNKNOWN;
}

int main() {
    const char* source_code = "if (x < 10) return x + 1;";
    char token[32];
    int i = 0, j = 0;

    printf("Tokenizing source code: %s\n", source_code);

    while (source_code[i] != '\0') {
        if (isspace(source_code[i])) {
            i++; // Skip whitespace
            continue;
        }
        if (strchr("()+-*/=<>;", source_code[i]) != NULL) {
            // Single-character tokens
            token[0] = source_code[i];
            token[1] = '\0';
            printf("Token: %s, Type: %d\n", token, classify_token(token));
            i++;
        } else {
            // Multi-character tokens
            j = 0;
            while (isalnum(source_code[i]) || source_code[i] == '_') {
                token[j++] = source_code[i++];
            }
            token[j] = '\0';
            printf("Token: %s, Type: %d\n", token, classify_token(token));
        }
    }

    return 0;
}

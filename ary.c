#include <stdio.h>
#include <string.h>

int main(void) {
    
        int a, i, b, c;
        scanf("%d", &a);
        char x[a][10];
        b = c = 0;
        
        for (i = 0; i < a; i++) {
            scanf("%s", x[i]);
            
            if (strcmp(x[i], "START38") == 0)
                b++;
            else if (strcmp(x[i], "LTIME108") == 0)
                c++;
        }
        
        printf("%d %d\n", b, c);
    
    
    return 0;
    }

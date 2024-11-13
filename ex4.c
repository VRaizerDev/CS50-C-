#include <stdio.h>
#include <string.h>
#include <Windows.h>

#include "./bibliotecaslocais/criptograf.h"


int encrypt(char ch) {
    switch (ch) 
    {
        case 'A': return A;
        case 'B': return B;
        case 'C': return C;
        case 'D': return D;
        case 'E': return E;
        case 'G': return G;
        case 'H': return H;
        case 'I': return I;
        case 'J': return J;
        case 'K': return K;
        case 'L': return L;
        case 'M': return M;
        case 'N': return N;
        case 'O': return O;
        case 'P': return P;
        case 'Q': return Q;
        case 'R': return R;
        case 'S': return S;
        case 'T': return T;
        case 'U': return U;
        case 'V': return V;
        case 'W': return W;
        case 'X': return X;
        case 'Y': return Y;
        case 'Z': return Z;
        default: return -1; 
    }
}

int main() {
    char input[100];
    
    printf("Digite uma palavra (apenas letras maiusculas): ");
    fgets(input, sizeof(input), stdin);
    
    input[strcspn(input, "\n")] = 0;
    printf("Texto criptografado: ");
    for (size_t i = 0; i < strlen(input); i++) {
        int encryptedValue = encrypt(input[i]);
        if (encryptedValue != -1) {
            printf("%03d ", encryptedValue);
        } else {
            printf("?? "); 
        }
    }
    system("pause");    
    printf("\n");
    return 0;
}

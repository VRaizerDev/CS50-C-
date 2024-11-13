// Relogio em C 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#include "./bibliotecaslocais/colors.h"

int main() {


    //Pega o tempo 
    time_t agora; 
    

    for (int i = 0; i < agora; i++)
    {
        system("cls");
        
        struct tm *local_time;

        time(&agora); // Obtém o tempo atual // Converte para o horário local
        local_time = localtime(&agora); 
        // Imprime a data e a hora no formato "DD-MM-AAAA HH:MM:SS"
        printf("\r"); 
        set_color(COLOR_GREEN);
        printf("%02d-%02d-%04d %02d:%02d:%02d\n", 
            local_time->tm_mday, 
            local_time->tm_mon + 1, // Os meses começam em 0
            local_time->tm_year + 1900, // O ano começa em 1900
            local_time->tm_hour, 
            local_time->tm_min, 
            local_time->tm_sec);
        fflush(stdout); 
        Sleep(1000); 
    }
    return 0;
}
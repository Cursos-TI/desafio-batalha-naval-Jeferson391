#include <stdio.h>

int main() {

    int index;

    char *nomesAlunos[3][3] = {
        {"Aluno 0", "Pt: 30", "Mat: 90"},
        {"Aluno 1", "Pt: 60", "Mat: 60"},
        {"Aluno 2", "Pt: 90", "Mat: 30"}
    };

    printf("Digite o numero do aluni que queira ver as notas... \n");
    printf("Para aluno 0, digite 0\n");
    printf("Para aluno 1, digite 1\n");
    printf("Para aluno 2, digite 2\n");

    scanf("%d", &index);

    printf("A nota do %s são: %s, %s... \n", nomesAlunos[index][0], 
                                             nomesAlunos[index][1], 
                                             nomesAlunos[index][2]
            );

    printf("\n");

return 0;
}
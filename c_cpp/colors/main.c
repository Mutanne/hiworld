#include <stdio.h>
#include <coransi.h>

int main(){
    system("color 30");
    printf(bc"  1 -"bg" inserir item\n");
    printf(bc"  2 -"bg" remover item\n");
    printf(bc"  3 -"bg" listar\n");
    printf(bc"  4 -"bg" fechar\n\n"br);
    return 0;
}

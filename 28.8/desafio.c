#include<stdio.h>
#include<math.h>

main(){

    float nota, min= 7.0;

    printf("Digite sua media:");
    scanf("%f", &nota);

    if( nota >= min){
    printf("Voce foi aprovado!!");
    } else if(nota < 4.0){
        printf("\nVoce foi reprovado!! (Burrao KKKKKK)");
    } else{
        printf("Voce esta de recuperacao!!");
    }
    printf("\nSegue a vida ne...");

}

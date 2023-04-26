#include <stdio.h>

int main(void)
{
        float a, b;
        char oper;

          	printf("digite um numero: ");
			scanf("%f", &a);
		
			printf("digite um operador: +, -, *, /: ");
			scanf("%s", &oper);
		
			printf("digite um numero: ");
			scanf("%f", &b);

         

            printf("Calculando: %.2f %c %.2f = ", a, oper, b);


            switch(oper)
            {
                case '+':
                        printf("%.2f\n", a + b);
                        break;

                case '-':
                        printf("%.2f\n", a - b);
                        break;

                case '*':
                        printf("%.2f\n", a * b);
                        break;

                 case '/':
                        if(b != 0)
                            printf("%.2f\n\n", a / b);
                        else
                            printf("Nao existe divisao por 0\n\n");
                        break;

                case '%':
                        printf("%d\n", (int)a % (int)b);
                        break; 
            }               
    
}
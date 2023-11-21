// A C code to generate a receipt.
// Name: Evans Jephunneh
// Matric No.: AUL/PYE/23/002
// Department: Physics
// Prog.: Physics and Electronics

#include <stdio.h>

int main()
{
    char item1[20], item2[20], item3[20];

    int price1, price2, price3, total;
    
    printf("---ANCHOR UNIVERSITY SUPERMARKET---\n\n");
    
    printf("Input the name of the first item: ");
    fgets(item1, 20, stdin);
    printf("Input the name of the second item: ");
    fgets(item2, 20, stdin);
    printf("Input the name of the third item: ");
    fgets(item3, 20, stdin);
    
	printf("What is the price of %sN ", item1);
	scanf("%d", &price1);
	printf("What is the price of %sN ", item2);
	scanf("%d", &price2);
	printf("What is the price of %sN ", item3);
	scanf("%d", &price3);
	
	total = price1 + price2 + price3;
	
    printf("\nThe total price to pay is N%d.", total);

    return 0;
}

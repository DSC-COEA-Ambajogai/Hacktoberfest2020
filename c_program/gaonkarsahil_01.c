/*       
          Name: Sahil Gaonkar
          Program Name : Find ASCII Value of Character                          
*/

/*###########################Program Start################################## */

#include <stdio.h>

int main()
{
    int choice = 1;
    char character;

    while(choice == 1)
    {
    	printf("Input a character whose ASCII value needs to determined: ");
        scanf(" %c", &character);  
        printf("ASCII value of character %c is %d\n", character, character);
    
        printf("1.To CONTINUE.\n2.To EXIT.\n");
        printf("ENTER YOUR CHOICE :\t");
        scanf("%d",&choice);
    }
    
    return 0;
}

/*###########################Program End################################## */
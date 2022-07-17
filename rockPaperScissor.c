#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int randomNumber()
{
    srand(time(NULL));
    return rand() % 3;
}
int main()
{
    printf("Welcome To Rock,Paper and Scissor\n");
    char rps[3] = {'R', 'P', 'S'};
    int point = randomNumber();
    char show1;
    char show2;
    int player = 0, computer = 0;
    char name[30];
    printf("Enter your Name\n");
    scanf("%s", name);
    for (int i = 0; i < 3; i++)
    {

        printf("\nEnter\n 0  for  Rock\n 1 for Paper\n 2 for Scissor\n");
        int num;
        printf("%s's Turn--->", name);
        scanf("%d", &num);
        show1 = rps[num];
        printf("You chose %c\n", show1);
        getchar();
        printf("Computer's Turn--->");
        printf("%d\n", point);
        show2 = rps[point];
        printf("Computer chose %c\n", show2);
        if ((num == 0 && point == 2) || (num == 2 && point == 1) || (num == 1 && point == 0))
        {
            player += 1;
        }
        else if ((num == 2 && point == 0) || (num == 1 && point == 2) || (num == 0 && point == 1))
        {
            computer += 1;
        }
        else
        {
            player += 0;
            computer += 0;
        }

        printf("\nScoreboard   %s:%d    Computer:%d\n", name, player, computer);
    }
    if (player > computer)
    {
        printf("YOU WON!\n");
    }
    else if (player == computer)
    {
        printf("DRAW!\n");
    }
    else
    {
        printf("YOU LOST!\n");
    }
    return 0;
}
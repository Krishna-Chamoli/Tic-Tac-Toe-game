#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char a[]={'1','2','3','4','5','6','7','8','9'};

void layout()
{
    printf("\t\t\t___|___|___\n");
    printf("\t\t\t %c | %c | %c \n",a[0],a[1],a[2]);
    printf("\t\t\t___|___|___\n");
    printf("\t\t\t %c | %c | %c \n",a[3],a[4],a[5]);
    printf("\t\t\t___|___|___\n");
    printf("\t\t\t %c | %c | %c \n",a[6],a[7],a[8]);
    printf("\t\t\t___|___|___\n");
    printf("\t\t\t   |   |\n");
}

void playgame(char name1[],char name2[])
{
    int position;
    char symbol;
start:    printf("Player 1 please select your symbol.Press 1 for X or press 2 for O\n");
    scanf(" %c",&symbol);
    system("cls");
    layout();
    if(symbol=='1')
    {
        int count=0;
        printf("%s's symbol is X and %s's symbol is O\n",name1,name2);
        printf("Player will enter the position number in which he want to place his symbol\n");
        for(int i=0;i<9;i++)
        {   
            again: printf("%s's turn.. : ",name1);
            scanf("%d",&position);
            if(position>9||position<1||a[position-1]=='X'||a[position-1]=='O')
            {
                printf("Please enter a valid position number\n");
                goto again;
            }
            else
            {
                a[position-1]='X';
            }

            if((a[0]=='X'&&a[1]=='X'&&a[2]=='X')||(a[3]=='X'&&a[4]=='X'&&a[5]=='X')||(a[6]=='X'&&a[7]=='X'&&a[8]=='X'))
            {
                printf("%s won the game\n",name1);
                layout();
                goto exit;
            }
            
            else if((a[0]=='X'&&a[3]=='X'&&a[6]=='X')||(a[1]=='X'&&a[4]=='X'&&a[7]=='X')||(a[2]=='X'&&a[5]=='X'&&a[8]=='X'))
            {
                printf("%s won the game\n",name1);
                layout();
                goto exit;
            }
            else if((a[0]=='X'&&a[4]=='X'&&a[8]=='X')||(a[2]=='X'&&a[4]=='X'&&a[6]=='X'))
            {
                printf("%s won the game\n",name1);
                layout();
                goto exit;
            }
            count++;
            if(count==9)
            {
                goto draw;
            }
            system("cls");
            layout();

            again2: printf("%s's turn.. : ",name2);
            scanf("%d",&position);
            if(position>9||position<1||a[position-1]=='X'||a[position-1]=='O')
            {
                printf("Please enter a valid position number\n");
                goto again2;
            }
            else
            {
                a[position-1]='O';
            }
          
            if((a[0]=='O'&&a[1]=='O'&&a[2]=='O')||(a[3]=='O'&&a[4]=='O'&&a[5]=='O')||(a[6]=='O'&&a[7]=='O'&&a[8]=='O'))
            {
                printf("%s won the game\n",name2);
                layout();
                goto exit;
            }
            
            else if((a[0]=='O'&&a[3]=='O'&&a[6]=='O')||(a[1]=='O'&&a[4]=='O'&&a[7]=='O')||(a[2]=='O'&&a[5]=='O'&&a[8]=='O'))
            {
                printf("%s won the game\n",name2);
                layout();
                goto exit;
            }
            else if((a[0]=='O'&&a[4]=='O'&&a[8]=='O')||(a[2]=='O'&&a[4]=='O'&&a[6]=='O'))
            {
                printf("%s won the game\n",name2);
                layout();
                goto exit;
            }
            count++;
            system("cls");
            layout();
         
        }
draw:        printf("The game has tied.......\n");       
    }

    else if(symbol=='2')
    {
        int count=0;
        printf("%s's symbol is O and %s's symbol is X\n",name1,name2);
        printf("Player will enter the position number in which he want to place his symbol\n");
        for(int i=0;i<9;i++)
        {   
            again3: printf("%s's turn.. : ",name1);
            scanf("%d",&position);
            if(position>9||position<1||a[position-1]=='X'||a[position-1]=='O')
            {
                printf("Please enter a valid position number\n");
                goto again3;
            }
            else
            {
                a[position-1]='O';
            }

            if((a[0]=='O'&&a[1]=='O'&&a[2]=='O')||(a[3]=='O'&&a[4]=='O'&&a[5]=='O')||(a[6]=='O'&&a[7]=='O'&&a[8]=='O'))
            {
                printf("%s won the game\n",name1);
                layout();
                goto exit;
            }
            
            else if((a[0]=='O'&&a[3]=='O'&&a[6]=='O')||(a[1]=='O'&&a[4]=='O'&&a[7]=='O')||(a[2]=='O'&&a[5]=='O'&&a[8]=='O'))
            {
                printf("%s won the game\n",name1);
                layout();
                goto exit;
            }
            else if((a[0]=='O'&&a[4]=='O'&&a[8]=='O')||(a[2]=='O'&&a[4]=='O'&&a[6]=='O'))
            {
                printf("%s won the game\n",name1);
                layout();
                goto exit;
            }
            count++;
            if(count==9)
            {
                goto draw2;
            }
            system("cls");
            layout();

            again4: printf("%s's turn.. : ",name2);
            scanf("%d",&position);
            if(position>9||position<1||a[position-1]=='X'||a[position-1]=='O')
            {
                printf("Please enter a valid position number\n");
                goto again4;
            }
            else
            {
                a[position-1]='X';
            }
          
            if((a[0]=='X'&&a[1]=='X'&&a[2]=='X')||(a[3]=='X'&&a[4]=='X'&&a[5]=='X')||(a[6]=='X'&&a[7]=='X'&&a[8]=='X'))
            {
                printf("%s won the game\n",name2);
                layout();
                goto exit;
            }
            
            else if((a[0]=='X'&&a[3]=='X'&&a[6]=='X')||(a[1]=='X'&&a[4]=='X'&&a[7]=='X')||(a[2]=='X'&&a[5]=='X'&&a[8]=='X'))
            {
                printf("%s won the game\n",name2);
                layout();
                goto exit;
            }
            else if((a[0]=='X'&&a[4]=='X'&&a[8]=='X')||(a[2]=='X'&&a[4]=='X'&&a[6]=='X'))
            {
                printf("%s won the game\n",name2);
                layout();
                goto exit;
            }
            count++;
            system("cls");
            layout();
         
        }
draw2:        printf("The game has tied.......\n");       
    }
    
    else
    {
        printf("Please choose a valid symbol\n");
        goto start;
    }
    
    exit: return;
}

int main()
{
    int ch;
    char name1[20],name2[20];
    printf("\t\t\tTic_Toc_Toe\n\n");  
    layout(); 
    printf("Press 1 to play or press 0 to quit\n");
    scanf(" %d",&ch);
    system("cls");
    layout();
    switch(ch)
    {
        case 1:
        {
            char choice;
            printf("Enter player 1's name : ");
            scanf("%s",&name1);
            printf("Enter player 2's name : ");
            scanf("%s",&name2);
gameagain:  playgame(name1,name2);
            getchar();
            printf("Do you want to play again select Y for yes and N for no : ");
            scanf("%c",&choice);
            if(choice=='Y')
            {   
                a[0]='1';  a[1]='2';  a[2]='3';  a[3]='4';
                a[4]='5';  a[5]='6';  a[6]='7';  a[7]='8';
                a[8]='9';
                system("cls");
                layout();
                goto gameagain;
            }
            else if(choice=='N')
            {
                printf("The game is quitting........\n");
                goto end;
            }
        }
        break;
        case 0:
        {
            goto end;
        }
        break;
        default :
        {
            printf("You have entered a wrong key\n");
        }
    }
end:    return 0;
}
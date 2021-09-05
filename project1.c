#include<stdlib.h>
#include<conio.h>
#include<time.h>

int swg(char you , char comp){
    if(you == comp){
        return 0;
    }
    else if(you == 's' && comp == 'g'){
        return -1;
    }
    else if(you == 'g' && comp == 's'){
        return 1;
    }
    else if(you == 's' && comp == 'w'){
        return 1;
    }
    else if(you == 'w' && comp == 's'){
        return -1;
    }
    else if(you == 'g' && comp == 'w'){
        return -1;
    }
    else if(you == 'w' && comp == 'g'){
        return 1;
    }
    else{
        printf("Enter a valid letter");
    }
}

int main(){
    char you, comp;
    srand(time(0));
    int number = rand()%9 + 1;
    if(number<3){
        comp = 's';
    }
    else if(number>3 && number>=6){
        comp = 'w';
    }
    else{
        comp = 'g';
    }
    printf("Enter 's' for snake, 'w' for water, 'g' for gun\n");
    scanf("%c",&you);
    int result = swg(you, comp);
    printf("You Chose %c and computer chose %c \n", you, comp);
    if(result==0){
        printf("game draw");
    }
    else if(result==1){
        printf("You win");
    }
    else{
        printf("You Lose");
    }
    return 0;

}

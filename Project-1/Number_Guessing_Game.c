#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    int my_num, guess_count = 0;
    srand(time(0));
    int random_number = (rand() % 100) + 1; // This Takes Random Integers from 1 to 100
    do{
        printf("Enter Your Number: ");
        scanf("%d",&my_num);
        if (my_num<1 || my_num>100){
            printf("Please Enter Numbers from 1 to 100\n");
        }
        else{
            guess_count ++;
            if(my_num>random_number){
                printf("Little Lower Please !\n");
            }
            else if(my_num<random_number){
                printf("Little Higher Please !\n");
            }
        }   
    }
    while(my_num != random_number);
    printf("🎉 You Have Guessed The Number");
    printf("Number of Guesses Taken: %d",guess_count);
    return 0;
}
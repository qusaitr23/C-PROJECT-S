#include <stdio.h>

void question2();
void question1();

int main()
{
    question2();
    question1();
}

void question1(){
    int num;
    int count=0;  
    printf("Welcome, please enter the weights of each ingredient:\n");
    float sum = 0.0,avg;
    scanf ("%d", &num);
    while (num >= 0) {
       count++;
       sum += num;
       scanf ("%d", &num);
    }
    if(count<=3){
      printf("Not enough ingredients.\n");
      exit(0);
    }
    if(count>11){
      printf("Too many ingredients.\n");
      exit(1);
    }
    avg=sum/count;
    printf("The final product weighs %G pounds and is %d percent pure\n", avg, count*10);
}

void question2(){
    int max = 1;
    int sum = 0;
    char c[max];
    char *array = malloc(sizeof(100));
    printf("Enter char to count: ");
    //Reads character input from the user
    gets(c);
    if(c[0] != 'M' && c[0] != 'm' && c[0] != 'S' && c[0] != 's'){
        return;
    }
    else{
        printf("Enter the char ‫‪sequence:‬‬ ");
        gets(array);
        char *array_pointer = &*array;
        while(*array_pointer != '$'){
            if(*array_pointer == c[0]){
                sum++;
            }
            if(*array_pointer == 0){
                scanf("%s", &*array);
                array_pointer = array;
            }
            else{
                *array_pointer++;
            }
        }
        if(sum > 0){
            printf("‫‪The char with ASCII code %d appeared %d times\n", c[0], sum);
        } 
    }
}
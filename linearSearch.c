#include <stdio.h>
#define N 20

void linearSearch(int numbers[N], int number);

int main()
{
  int menuSelection = -1;
  int numbers[N];
  do{
    printf("L i n e a r  S e a r c h \n");
    printf("==========================\n");
    printf("            MENU          \n");
    printf("==========================\n");
    printf("1. Enter %d numbers\n", N);
    printf("2. Search from %d numbers\n", N);
    printf("3. Quit\n");
    printf("==========================\n");

    if(menuSelection == -1){
      printf("Auto-selected option 1\n");
      menuSelection = 1;
    } else {
      printf("Your selection: ");
      scanf(" %d", &menuSelection);
    }

    if(menuSelection == 1){
      printf("Enter %d numbers below: \n", N);
      for(int i = 0; i < N; i++){
        printf("[%2d] ", i + 1);
        scanf(" %d", &numbers[i]);
      }
    } else if(menuSelection == 2){
      int number;
      printf("Enter a number to be found: ");
      scanf(" %d", &number);
      linearSearch(numbers, number);
    } else if(menuSelection == 3){
      return 0;
    } else {
      printf("%d is not in the menu\n", menuSelection);
    }

  } while (menuSelection !=3);

  return 0;
}

void linearSearch(int numbers[N], int number) 
{
  for(int i = 0; i < N; i++){
    if(numbers[i] == number){
      printf("Number %d found on index %d\n", number, i);
      return;
    }
  }
  printf("Number %d not found\n", number);
}

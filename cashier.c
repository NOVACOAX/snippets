#include <stdio.h>
#include <string.h>

int main(void)
{
  //* Declaring and initializing the variables. 
  int age = 0;
  int milk = 0;
  int total_price = 0;

  // * Get age.
  printf("Age: \n");
  scanf("%i", &age);

  // * Get number of items.
  printf("number of items: \n");
  int total_items = 0;
  scanf("%i", &total_items);
  int prices[total_items];

  // * Getting the name and price of each item.
  for (int i = 0; i < total_items; i++)
    {
      char item[20];
      int price = 0;
      int num = i + 1;

      printf("Item %i : \n", num);
      printf("Item name : \n");
      scanf("%s", &item);

      //* Checking if the item is milk. If it is, it will increment the milk variable.
      int is_milk = strcmp(item,"milk");
      if(is_milk == 0){
        milk++;
      }
      
      printf("Item price : \n");
      scanf("%i", &price);
      prices[i] = price;
    }

  // * Calculate  total price.
  for (int i = 0; i < total_items; i++)
    {
      total_price += prices[i];
    }

  // * Checking if the customer has qualified for a 5% discount.
  if(age >= 70 && total_items>= 3 && total_price >= 1000 && milk)
  {
    int discount = total_price * 0.95;
    printf("Discount: 5%%\n");
    printf("Total: %i\n",discount);
  }else{
    printf("Total: %i\n",total_price);  
  }

}
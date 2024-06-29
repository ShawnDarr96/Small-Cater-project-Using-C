#include<stdio.h>/// Shawn Darr Dec 12
int main() {

    float adultMeals[4] = {10, 10, 15, 7.5};
    float childMeals[3] = {7.5, 7.5, 8.5};
    float total_adultmeal = 0, total_childmeal = 0, total_cost, charity;
        int i;
        
        printf("Welcome to the Family Dinner Catering Service\n\n");
        printf("Meal Sales for Adults:\n");
        for(i = 0; i < sizeof(adultMeals)/sizeof(adultMeals[0]); i++){
                printf("Adult Catered Meal Prices: $%0.1f\n", adultMeals[i]);

                total_adultmeal += adultMeals[i];
        }
        printf("\nTotal Adult Catered Meal Prices are $%0.1f\n\n", total_adultmeal);
        
        printf("Meal Sales for Children:\n");
        for(i = 0; i < sizeof(childMeals)/sizeof(childMeals[0]); i++){
                printf("Child Catered Meal Prices: $%0.1f\n", childMeals[i]);
                total_childmeal += childMeals[i];
        }
        printf("\nTotal Child Ticket sales are $%0.1f\n\n", total_childmeal);
        
        total_cost = total_adultmeal + total_childmeal;
        printf("Total Cost for Catered Meals are $%0.1f\n", total_cost);
        
        charity = total_cost * 0.45;
        printf("The total donation for the Charity is $%0.1f\n", charity);
        
    return 0;
}
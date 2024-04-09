#include<stdio.h>
#include<string.h>
typedef struct {
char make[50];
char model [50];
int year;
float price
}
ModelCar;

void promptInput(ModelCar cars[], int size) 
{
for (int i = 0; i<size; i++) 
{
printf("Enter information for car %d\n", i + 1);  
printf ("Make: ");
scanf("%s",cars[i].make);
printf("Model: ");
scanf("%s", cars[i].model);
printf("Year: ");
scanf("%d", &cars[i].year);
printf("Price: ");
scanf("%f",&cars[i].price);
printf("\n");
}
}void printCars (ModelCar cars [], int size) {
printf("Model Car Information:\n");
for (int i = 0; i < size; i++) 
{
printf("Car %d\n", i + 1);
printf("Make: %s\n", cars[i].make);
printf("Model: %s\n", cars[i].model);
printf("Year: %d\n", cars[i].year);
printf("Price: $%.2f\n", cars[i].price);
printf("\n");
}
}
int main() {

ModelCar cars[10];
promptInput(cars, 10);
printCars(cars, 10);
printf("Done.\n");
return 0;
}

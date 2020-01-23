//Bucky Bernard
//w0055097
//Jan 21 2020
#include<stdio.h>


int main(){

    int hoursworked = 0;
    float hourlywage = 0.00f;
//    float grosspay = 0.00;  // hoursworked * hourlywage
//    float vacation = 0.04; // grosspay * vacation
//    float totalincome = 0.00; // grosspay + vacation
//    int payperyear = 26;  // Pays per year
//    float annualincome = 0.00; // totalincome * payperyear



    printf("Enter hours worked: ");
    scanf("%i", &hoursworked);
    printf("Enter hourly wage: ");
    scanf("%f", &hourlywage);

    printf("Hours Worked = %i \n", hoursworked);


    return 0;
}
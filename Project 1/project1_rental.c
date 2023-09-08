// Name: Long Do
// UID: U16884284
// Description: This program will prompt the options and calculate the price for each option

#include <stdio.h>
#include <math.h>

int main(){
    // Declare all the necessary variables, and declare arrays of many prices inside
    int charge = 0;
    int hourlyRate[4] = {7, 27, 61, 59};
    int dailyRate[4] = {10, 39, 87, 84};
    int weeklyRate[4] = {40, 156, 348, 336};
    int equip, hours, days;

    printf("Please select from four equipment: 1, 2, 3, and 4 \n");

    printf("Enter equipment selection: ");
    scanf("%d", &equip);
    
    // Validate equipment options
    if (equip < 1 || equip > 4 ){
        printf("Invalid selection. Select from 1 to 4.");
        return 0;
    };

    printf("Enter days: ");
    scanf("%d", &days);

    printf("Enter hours: ");
    scanf("%d", &hours);

    // Validate hours 
    if(hours < 0 || hours > 24){
        printf("Invalid hours.");
        return 0;
    }

    // This if else calculates all the logic for the final charge
    if (days%7 < 4){
        charge += (days/7) * weeklyRate[equip - 1] + (days%7) * dailyRate[equip - 1];
        if (hours < 4){
            charge += hourlyRate[equip - 1];
        } else if (hours > 4){
            charge += dailyRate[equip - 1];
        }
    } else if (days%7 >= 4){
        charge += (days/7) * weeklyRate[equip - 1] + weeklyRate[equip - 1];
    }

    printf("Charge($): %d", charge);

    return 0;
}
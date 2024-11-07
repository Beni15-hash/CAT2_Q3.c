

#include <stdio.h>

int main() {
    float hours, hourlyWage, grossPay, taxes, netPay;
    
    // Get user input
    printf("Enter the hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter the hourly wage: ");
    scanf("%f", &hourlyWage);

    // Calculate gross pay
    if (hours <= 40) {
        grossPay = hours * hourlyWage;
    } else {
        grossPay = (40 * hourlyWage) + ((hours - 40) * hourlyWage * 1.5);
    }

    // Calculate taxes
    if (grossPay <= 600) {
        taxes = grossPay * 0.15;
    } else {
        taxes = (600 * 0.15) + ((grossPay - 600) * 0.20);
    }

    // Calculate net pay
    netPay = grossPay - taxes;

    // Display results
    printf("Gross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", netPay);

    return 0;
}



#include <stdio.h>

int main() {
    int n, i, id, hours;
    float rate, gross, net, overtime, tax;
    float totalPayroll = 0, averagePay;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\nEnter Employee %d ID: ", i);
        scanf("%d", &id);

        printf("Enter hourly wage rate: ");
        scanf("%f", &rate);

        printf("Enter hours worked: ");
        scanf("%d", &hours);

        // Calculate gross salary
        if (hours > 40) {
            overtime = (hours - 40) * rate * 1.5;
            gross = (40 * rate) + overtime;
        } else {
            gross = hours * rate;
        }

        // Tax deduction
        tax = 0.03625 * gross;
        net = gross - tax;

        printf("Employee ID: %d, Net Pay: %.2f\n", id, net);

        totalPayroll += net;
    }

    averagePay = totalPayroll / n;

    printf("\nTotal Payroll: %.2f\n", totalPayroll);
    printf("Average Pay: %.2f\n", averagePay);

    return 0;
}

#include <stdio.h>

double calcIncTax(int taxableInc);

int main(void){

    int taxableInc = 0;
    printf("Enter taxable income: ");
    scanf("%d", &taxableInc);

    double tax = calcIncTax(taxableInc);
    printf("Tax on %d: %lf", taxableInc, tax);

    return 0;


}

double calcIncTax(int taxableInc){
   double tax;

   if(taxableInc < 750){
        tax = 0.01 * taxableInc;
   }else if(taxableInc >= 750 && taxableInc < 2250){
        tax = 7.50 + (0.02 * (taxableInc - 750));
   }else if(taxableInc >= 2250 && taxableInc < 3750){
        tax = 37.50 + (0.03 * (taxableInc - 2250));
   }else if(taxableInc >= 3750 && taxableInc < 5250){
        tax = 82.50 + (0.04 * (taxableInc - 3750));
   }else if(taxableInc >= 5250 && taxableInc < 7000){
        tax = 142.50 + (0.05 * (taxableInc - 5250));
   }else{
        tax = 230 + (0.06*(taxableInc - 7000));
   }

   return tax;

}
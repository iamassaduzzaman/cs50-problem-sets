// includes
#include <cs50.h>
#include <stdio.h>

// function declaration
float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}


float half(float bill, float tax, int tip)
{
  float  total_after_tax = (bill / 100.0) * tax + bill;
  float  total = (total_after_tax / 100.0) * tip + total_after_tax;
  float  each_owe = total / 2;
  return each_owe;
}

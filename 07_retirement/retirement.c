#include <stdlib.h>
#include <stdio.h>

struct _retire_info{
  int months;
  double contribution;
  double rate_of_return;
};

typedef struct _retire_info retire_info;

double compute_print_balance(retire_info status,double initial,int startAge){
  double balance=initial;
  int age=startAge;

  for (int i=1; i<=status.months; i++){
    printf("Age %3d month %2d you have $%.2f\n", age/12,age%12,balance);
    balance = balance*(1+status.rate_of_return/12);
    balance += status.contribution;
    age+=1;

  }
  return balance;
}

void retirement(int startAge, double initial, retire_info working, retire_info retired){
  double balance=compute_print_balance(working,initial,startAge);
  compute_print_balance(retired,balance,startAge+working.months);
}

int main(){
  retire_info working;
  retire_info retired;

  working.months=489;
  working.contribution=1000;
  working.rate_of_return=0.045;

  retired.months=384;
  retired.contribution=-4000;
  retired.rate_of_return=0.01;

  retirement(327,21345,working,retired);

  return 0;

}

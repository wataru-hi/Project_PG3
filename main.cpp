#include <stdio.h>

int calculate_salary(int month) {
  if (month <= 0) { 
    return 0; // �����Ȍ���0��Ԃ�
  }

  int salary = 100; // �����̋�����ݒ�

  for (int i = 2; i <= month; i++) {
    salary = salary * 2 - 50; 
  }

  return salary;
}

int main() 
{
    int month = 1;
    int normalSalary = 1072;
    int salaly = normalSalary, recursiveSalaly = 100;
    while (salaly > recursiveSalaly)
    {
        salaly = normalSalary * month;
        recursiveSalaly = calculate_salary(month);
        month ++;
    }

    printf("%d������ċA�I�Ȓ����̌n�̂ق����ׂ���", month);
}
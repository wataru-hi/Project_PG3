#include <stdio.h>

int calculate_salary(int month) {
  if (month <= 0) { 
    return 0; // 無効な月は0を返す
  }

  int salary = 100; // 初月の給料を設定

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

    printf("%d月から再帰的な賃金体系のほうが儲かる", month);
}
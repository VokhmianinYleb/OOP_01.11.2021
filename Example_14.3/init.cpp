#include "CYear.h"
// конструктор за замовчуванням
CYear::CYear(void)
{
	year = 2000; // початкова ініціалізація
}
// метод, що визначає чи високосний рік
bool CYear::IsLeapYear(void)
{
	if ((year % 4) == 0) return true;
	else return false;
}

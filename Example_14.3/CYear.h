// клас, що реалізує категорію "Рік"
class CYear
{
	int year; // внутрішня змінна
public:
	CYear(void); // конструктор за замовчуванням
	// конструктор з 1 параметром
	CYear(int year)
	{
		this->year = year;
	}
	// методи доступу
	int Get(void) { return year; }
	void Set(int year) { this->year = year; }
	// метод, що визначає чи високосний рік
	bool IsLeapYear(void);
};

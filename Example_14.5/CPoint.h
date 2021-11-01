// клас, що реалізує точку
class CPoint
{
	int x, y;
public:
	// конструктор за замовчуванням
	CPoint() { x = y = 0; }
	// методи доступу
	void GetXY(int* nx, int* ny)
	{
		*nx = x;
		*ny = y;
	}
	void SetXY(int nx, int ny)
	{
		x = nx;
		y = ny;
	}
};

// клас, що реалізує відрізок
class CLine
{
	// посилання на об'єкти типу CPoint
	CPoint& p1;
	CPoint& p2;
public:
	// конструктор за замовчуванням
	// динамічно ініціалізуються значення посилань p1 та p2
	CLine() :p1(*new CPoint), p2(*new CPoint)
	{
		p1.SetXY(0, 0);
		p2.SetXY(1, 1);
	}
	// методи доступу
	// повернути координати точок
	void GetPoints(CPoint* pt1, CPoint* pt2)
	{
		int x, y;
		p1.GetXY(&x, &y); // взяти значення x, y для точки p1
		pt1->SetXY(x, y); // встановити x,y в нову точку pt1
		p2.GetXY(&x, &y); // взяти x,y
		pt2->SetXY(x, y); // записати x,y в pt2
	}
	// встановити нові значення точок
	void SetPoints(CPoint* pt1, CPoint* pt2)
	{
		int x, y;
		// p1 => pt1
		p1.GetXY(&x, &y);
		pt1->SetXY(x, y);
		// p2 => pt2
		p2.GetXY(&x, &y);
		pt2->SetXY(x, y);
	}
};

#include <iostream>
using namespace std;

class Rectangle
{
protected:
	int width;
	int length;

public:
	Rectangle() : width(0), length(0){};
	Rectangle(int w, int h) : width(w), length(h) {}
	int getArea()
	{
		return width * length;
	}
	int perimeter()
	{
		return (2 * width + 2 * length);
	}
};

class Square : public Rectangle
{
public:
	Square() : Rectangle() {}
	Square(int w) : Rectangle(w, w) {}
};

class Cube : public Rectangle
{
private:
	int height;
	int volume;

public:
	Cube() : Rectangle(), height(0), volume(0) {}
	Cube(int w, int l, int h) : Rectangle(w, l), height(h)
	{
		volume = getArea() * h;
	}
	int getVolume() { return volume; }
	int getHeight() { return height; }
	int perimeter()
	{
		int pmeter = 4 * (width + height) + 4 * height;
		// return perimeter() * 4 * height;
	}
};

int main()
{
	Square s(10);
	cout << "The area of Square: " << s.getArea() << endl;
	cout << "The Perimeter of Square: " << s.perimeter() << endl;

	Cube c(10, 20, 30);
	cout << "The Volume of Cube: " << c.getArea() << endl;
	cout << "The Perimeter of Square: " << c.perimeter() << endl;
}

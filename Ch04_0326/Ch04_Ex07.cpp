/*
#include <iostream>
using namespace std;

class Circle {
	int radius; // ���� ������ ��
public:
	void setRadius(int r); // �������� �����Ѵ�
	double getArea(); // ������ �����Ѵ�
};

void Circle::setRadius(int radius) {
	this->radius = radius;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle circle[3];
	int radius;
	int count = 0;

	for (int i = 1; i <= 3; i++) {
		cout << "�� " << i << "�� ������ >> ";
		cin >> radius;
		circle[i].setRadius(radius);
	}

	for (int i = 0; i < 3; i++) {
		if (circle[i].getArea() > 100) {
			count++;
		}
	}

	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�." << endl;
}
*/
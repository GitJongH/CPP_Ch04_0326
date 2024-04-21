/*
#include <iostream>
using namespace std;

class Circle {
	int radius; // 원의 반지름 값
public:
	void setRadius(int r); // 반지름을 설정한다
	double getArea(); // 면적을 리턴한다
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
		cout << "원 " << i << "의 반지름 >> ";
		cin >> radius;
		circle[i].setRadius(radius);
	}

	for (int i = 0; i < 3; i++) {
		if (circle[i].getArea() > 100) {
			count++;
		}
	}

	cout << "면적이 100보다 큰 원은 " << count << "개 입니다." << endl;
}
*/
#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14;

class Calculator {
protected:
    Calculator() {}

public:
    virtual ~Calculator() {}
};

class Circle : public Calculator {
public:
    Circle() {
        cout << "*** 평면 원 계산기 접속 ***" << endl;
    }
    ~Circle() {
        cout << "평면 원 계산기 종료..." << endl << endl;
    }
    double area(double radius) {
        return PI * radius * radius;
    }
    double circumference(double radius) {
        return 2 * PI * radius;
    }
};

class Cylinder : public Calculator {
public:
    Cylinder() {
        cout << "*** 원기둥 계산기 접속 ***" << endl;
    }
    ~Cylinder() {
        cout << "원기둥 계산기 종료..." << endl << endl;
    }
    double volume(double radius, double height) {
        return PI * radius * radius * height;
    }
    double surfaceArea(double radius, double height) {
        return 2 * PI * radius * (radius + height);
    }
};

class Cone : public Calculator {
public:
    Cone() {
        cout << "*** 원뿔 계산기 접속 ***" << endl;
    }
    ~Cone() {
        cout << "원뿔 계산기 종료..." << endl << endl;
    }
    double volume(double radius, double height) {
        return PI * radius * radius * height / 3;
    }
};

class Sphere : public Calculator {
public:
    Sphere() {
        cout << "*** 구 계산기 접속 ***" << endl;
    }
    ~Sphere() {
        cout << "구 계산기 종료..." << endl << endl;
    }
    double volume(double radius) {
        return 4.0 / 3.0 * PI * pow(radius, 3);
    }
    double surfaceArea(double radius) {
        return 4 * PI * radius * radius;
    }
};

class Calculator_ {
public:
    void run() {
        int choice;
        double radius, height;

        while (true) {
            cout << endl;
            cout << "원하는 계산을 선택하세요\n";
            cout << "1. 원의 넓이 계산\n";
            cout << "2. 원의 둘레 계산\n";
            cout << "3. 원기둥의 부피 계산\n";
            cout << "4. 원기둥의 겉넓이 계산\n";
            cout << "5. 원뿔의 부피 계산\n";
            cout << "6. 구의 부피 계산\n";
            cout << "7. 구의 겉넓이 계산\n";
            cout << "8. 종료\n";
            cout << "선택: ";
            cin >> choice;
            cout << endl;

            switch (choice) {

            case 1: {
                cout << "반지름 입력: ";
                cin >> radius;
                cout << endl; 
                Circle circle;
                cout << endl;
                cout << "평면원의 넓이: " << circle.area(radius) << endl;
                cout << endl;
                break;
            }

            case 2: {
                cout << "반지름 입력: ";
                cin >> radius;
                cout << endl;
                Circle circle;
                cout << endl;
                cout << "원의 둘레: " << circle.circumference(radius) << endl;
                cout << endl;
                break;
            }

            case 3: {
                cout << "반지름 입력: ";
                cin >> radius;
                cout << endl; 
                cout << "높이 입력: ";
                cin >> height;
                cout << endl; 
                Cylinder cylinder;
                cout << endl;
                cout << "원기둥의 부피: " << cylinder.volume(radius, height) << endl;
                cout << endl;
                break;
            }

            case 4: {
                cout << "반지름 입력: ";
                cin >> radius;
                cout << endl;
                cout << "높이 입력: ";
                cin >> height;
                cout << endl;
                Cylinder cylinder;
                cout << "원기둥의 겉넓이: " << cylinder.surfaceArea(radius, height) << endl;
                cout << endl;
                break;
            }

            case 5: {
                cout << "반지름 입력: ";
                cin >> radius;
                cout << endl;
                cout << "높이 입력: ";
                cin >> height;
                cout << endl;
                Cone cone;
                cout << endl;
                cout << "원뿔의 부피: " << cone.volume(radius, height) << endl;
                cout << endl;
                break;
            }

            case 6: {
                cout << "반지름 입력: ";
                cin >> radius;
                cout << endl;
                Sphere sphere;
                cout << endl;
                cout << "구의 부피: " << sphere.volume(radius) << endl;
                cout << endl;
                break;
            }

            case 7: {
                cout << "반지름 입력: ";
                cin >> radius;
                cout << endl;
                Sphere sphere;
                cout << endl;
                cout << "구의 겉넓이: " << sphere.surfaceArea(radius) << endl;
                cout << endl;
                break;
            }

            case 8:
                cout << endl;
                cout << "프로그램을 종료합니다." << endl;
                return;

            default:
                cout << endl;
                cout << "잘못된 숫자입니다." << endl;

            }
        }
    }
};

int main() {
    Calculator_ calculator_;
    calculator_.run();
}

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
        cout << "*** ��� �� ���� ���� ***" << endl;
    }
    ~Circle() {
        cout << "��� �� ���� ����..." << endl << endl;
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
        cout << "*** ����� ���� ���� ***" << endl;
    }
    ~Cylinder() {
        cout << "����� ���� ����..." << endl << endl;
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
        cout << "*** ���� ���� ���� ***" << endl;
    }
    ~Cone() {
        cout << "���� ���� ����..." << endl << endl;
    }
    double volume(double radius, double height) {
        return PI * radius * radius * height / 3;
    }
};

class Sphere : public Calculator {
public:
    Sphere() {
        cout << "*** �� ���� ���� ***" << endl;
    }
    ~Sphere() {
        cout << "�� ���� ����..." << endl << endl;
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
            cout << "���ϴ� ����� �����ϼ���\n";
            cout << "1. ���� ���� ���\n";
            cout << "2. ���� �ѷ� ���\n";
            cout << "3. ������� ���� ���\n";
            cout << "4. ������� �ѳ��� ���\n";
            cout << "5. ������ ���� ���\n";
            cout << "6. ���� ���� ���\n";
            cout << "7. ���� �ѳ��� ���\n";
            cout << "8. ����\n";
            cout << "����: ";
            cin >> choice;
            cout << endl;

            switch (choice) {

            case 1: {
                cout << "������ �Է�: ";
                cin >> radius;
                cout << endl; 
                Circle circle;
                cout << endl;
                cout << "������ ����: " << circle.area(radius) << endl;
                cout << endl;
                break;
            }

            case 2: {
                cout << "������ �Է�: ";
                cin >> radius;
                cout << endl;
                Circle circle;
                cout << endl;
                cout << "���� �ѷ�: " << circle.circumference(radius) << endl;
                cout << endl;
                break;
            }

            case 3: {
                cout << "������ �Է�: ";
                cin >> radius;
                cout << endl; 
                cout << "���� �Է�: ";
                cin >> height;
                cout << endl; 
                Cylinder cylinder;
                cout << endl;
                cout << "������� ����: " << cylinder.volume(radius, height) << endl;
                cout << endl;
                break;
            }

            case 4: {
                cout << "������ �Է�: ";
                cin >> radius;
                cout << endl;
                cout << "���� �Է�: ";
                cin >> height;
                cout << endl;
                Cylinder cylinder;
                cout << "������� �ѳ���: " << cylinder.surfaceArea(radius, height) << endl;
                cout << endl;
                break;
            }

            case 5: {
                cout << "������ �Է�: ";
                cin >> radius;
                cout << endl;
                cout << "���� �Է�: ";
                cin >> height;
                cout << endl;
                Cone cone;
                cout << endl;
                cout << "������ ����: " << cone.volume(radius, height) << endl;
                cout << endl;
                break;
            }

            case 6: {
                cout << "������ �Է�: ";
                cin >> radius;
                cout << endl;
                Sphere sphere;
                cout << endl;
                cout << "���� ����: " << sphere.volume(radius) << endl;
                cout << endl;
                break;
            }

            case 7: {
                cout << "������ �Է�: ";
                cin >> radius;
                cout << endl;
                Sphere sphere;
                cout << endl;
                cout << "���� �ѳ���: " << sphere.surfaceArea(radius) << endl;
                cout << endl;
                break;
            }

            case 8:
                cout << endl;
                cout << "���α׷��� �����մϴ�." << endl;
                return;

            default:
                cout << endl;
                cout << "�߸��� �����Դϴ�." << endl;

            }
        }
    }
};

int main() {
    Calculator_ calculator_;
    calculator_.run();
}

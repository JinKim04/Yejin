#include<iostream>
using namespace std;

void totalprice(int price, int quantity, int* total) {
    *total += price * quantity;
}

void printintro() {
    cout << "***** ������ ��鰡�Կ� ���� ���� ȯ���մϴ� *****" << endl;
}

int main() {
    string menu[] = { "�Ϲ� ���", "��ġ ���", "ġ�� ���", "�� ���", "�� ���� ���" };
    int price[] = { 3500, 4000, 4200, 4300, 4500 };
    int total = 0;

    while (true) { // ���� ���� ����
        cout << endl;
        printintro();
        cout << endl;
        for (int i = 0; i < 5; ++i) {
            cout << i + 1 << ". " << menu[i] << " (" << price[i] << "��)" << endl;
        }

        cout << endl << "�����Ͻ� ��� ��ȣ�� �Է����ּ���(����� 0) : ";
        int num;
        cin >> num;

        if (num == 0) {// 0�� �Է��ϸ� ���α׷� ���� �� ���� ���� ���
            cout << "�� ������" << total << "�� �Դϴ�. ";
            break;
        } // if �Լ� ����

        if (num < 1 || num > 5) {
            cout << "����� �� ���ڸ� �Է��� �ּ���." << endl;
            continue; // �߸��� �Է� ó�� �� �ٽ� �޴� ��������
        }

        cout << endl << menu[num - 1] << "��(��) �����Ͻðڽ��ϱ�? (Y/N): ";
        char response;
        cin >> response;

        if (response == 'Y' || response == 'y') {
            cout << "�����Ͻ� ��� ������ �Է����ּ���: ";
            int nramen;
            cin >> nramen;

            if (nramen < 1 || nramen > 5) {
                cout << "����� �� ���ڸ� �Է����ּ���." << endl;
                continue; // �߸��� �Է� ó�� �� �ٽ� �޴� ��������
            }

            int currentprice = price[num - 1] * nramen;
            cout << endl;
            cout << menu[num - 1] << "��(��) " << nramen << "�� �����ϼ̽��ϴ�." << endl;
            cout << "�� ������ " << currentprice << "�� �Դϴ�." << endl;
            total += currentprice;
        }
        else if (response == 'N') {
            cout << endl;
            continue; // 'N'�� �Է��ϸ� �ٽ� �޴� ��������
        }
        else {
            cout << "Y �Ǵ� N�� �Է����ּ���." << endl;
            continue; // �߸��� �Է� ó�� �� �ٽ� �޴� ��������
        }
    }
    return 0;
}

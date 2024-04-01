#include<iostream>
using namespace std;

void totalprice(int price, int quantity, int* total) {
    *total += price * quantity;
}

void printintro() {
    cout << "***** 슈니의 라면가게에 오신 것을 환영합니다 *****" << endl;
}

int main() {
    string menu[] = { "일반 라면", "김치 라면", "치즈 라면", "떡 라면", "떡 만두 라면" };
    int price[] = { 3500, 4000, 4200, 4300, 4500 };
    int total = 0;

    while (true) { // 무한 루프 시작
        cout << endl;
        printintro();
        cout << endl;
        for (int i = 0; i < 5; ++i) {
            cout << i + 1 << ". " << menu[i] << " (" << price[i] << "원)" << endl;
        }

        cout << endl << "구매하실 라면 번호를 입력해주세요(종료는 0) : ";
        int num;
        cin >> num;

        if (num == 0) {// 0을 입력하면 프로그램 종료 후 누적 가격 출력
            cout << "총 가격은" << total << "원 입니다. ";
            break;
        } // if 함수 종료

        if (num < 1 || num > 5) {
            cout << "제대로 된 숫자를 입력해 주세요." << endl;
            continue; // 잘못된 입력 처리 후 다시 메뉴 선택으로
        }

        cout << endl << menu[num - 1] << "을(를) 구입하시겠습니까? (Y/N): ";
        char response;
        cin >> response;

        if (response == 'Y' || response == 'y') {
            cout << "구매하실 라면 개수를 입력해주세요: ";
            int nramen;
            cin >> nramen;

            if (nramen < 1 || nramen > 5) {
                cout << "제대로 된 숫자를 입력해주세요." << endl;
                continue; // 잘못된 입력 처리 후 다시 메뉴 선택으로
            }

            int currentprice = price[num - 1] * nramen;
            cout << endl;
            cout << menu[num - 1] << "을(를) " << nramen << "개 구매하셨습니다." << endl;
            cout << "총 가격은 " << currentprice << "원 입니다." << endl;
            total += currentprice;
        }
        else if (response == 'N') {
            cout << endl;
            continue; // 'N'을 입력하면 다시 메뉴 선택으로
        }
        else {
            cout << "Y 또는 N을 입력해주세요." << endl;
            continue; // 잘못된 입력 처리 후 다시 메뉴 선택으로
        }
    }
    return 0;
}

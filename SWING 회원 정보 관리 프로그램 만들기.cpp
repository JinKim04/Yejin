#include <iostream>
#include <vector>
#include <string>
using namespace std;

class information {
public:
	string name;
	string phonenumber;

	information(string name, string phonenumber) {
		this->name = name;
		this->phonenumber = phonenumber;
	}
};

bool isMatch(vector<information>& members, string name, string phonenumber) {
	for (auto& member : members) {
		if (member.name == name && member.phonenumber == phonenumber) {
			return true;
		}
	}
	return false;
}

int main() {
	vector<information> members;
	int choice;

	while (true) {
		cout << "***** SWING 회원 정보 관리 프로그램 *****" << endl << endl;
		cout << "1. 회원가입" << endl;
		cout << "2. 로그인" << endl;
		cout << "3. 회원 정보 수정" << endl;
		cout << "4. 종료" << endl << endl;
		cout << "번호를 입력하세요 : ";
		cin >> choice;
		cout << endl;


		if (choice == 1){
		    cout << "***** 회원가입을 진행합니다 *****" << endl << endl;
	    	string name, phonenumber;
			cout << "이름을 입력하세요 : ";
		    cin >> name;
			cout << "전화번호를 입력하세요 : ";
	    	cin >> phonenumber;
			cout << endl;

        	if (isMatch(members, name, phonenumber)) {
		    	cout << "이미 등록된 정보입니다" << endl << endl;
		    	continue;
	    	}

	    	members.push_back(information(name, phonenumber));
	    	cout << "회원가입이 완료되었습니다" << endl << endl;

		}
		else if (choice == 2) {
			cout << "***** 로그인을 진행합니다 *****" << endl << endl;
			string name, phonenumber;
			cout << "이름을 입력하세요 : ";
			cin >> name;
			cout << "전화번호를 입력하세요 : ";
			cin >> phonenumber;
			cout << endl;

			if (isMatch(members, name, phonenumber)) {
				cout << "로그인이 완료되었습니다." << endl << endl;
				cout << "***** SWING " << name << "님을 응원합니다 *****" << endl << endl;
			}
			else {
				cout << "회원 정보가 일치하지 않습니다." << endl << endl;
			}
		}
		else if (choice == 3) {
			cout << "***** 회원 정보 수정을 진행합니다 *****" << endl << endl;
			string name, phonenumber, newname, newphonenumber;
			cout << "현재 회원 정보" << endl;
			cout << "이름 : ";
			cin >> name; 
			cout << "전화번호 : ";
			cin >> phonenumber;
			cout << endl;

			if (!isMatch(members, name, phonenumber)) {
				cout << "회원 정보가 일치하지 않습니다." << endl << endl;
				continue;
			}

			cout << "새로운 회원 정보" << endl;
			cout << "이름 : ";
			cin >> newname;
			cout << "전화번호 : ";
			cin >> newphonenumber; 
			cout << endl;

			for (auto& member : members) {
				if (member.name == name && member.phonenumber == phonenumber) {
					member.name = newname;
					member.phonenumber = newphonenumber;
					cout << "회원 정보 수정이 완료되었습니다." << endl << endl;
					break;
				}
			}
		}
		else if (choice == 4) {
			cout << "프로그램을 종료합니다." << endl;
			break;
		}
		else {
			cout << "정확한 번호를 입력해주세요." << endl;
		}
	}
	return 0;
}

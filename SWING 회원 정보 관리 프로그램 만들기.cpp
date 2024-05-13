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
		cout << "***** SWING ȸ�� ���� ���� ���α׷� *****" << endl << endl;
		cout << "1. ȸ������" << endl;
		cout << "2. �α���" << endl;
		cout << "3. ȸ�� ���� ����" << endl;
		cout << "4. ����" << endl << endl;
		cout << "��ȣ�� �Է��ϼ��� : ";
		cin >> choice;
		cout << endl;


		if (choice == 1){
		    cout << "***** ȸ�������� �����մϴ� *****" << endl << endl;
	    	string name, phonenumber;
			cout << "�̸��� �Է��ϼ��� : ";
		    cin >> name;
			cout << "��ȭ��ȣ�� �Է��ϼ��� : ";
	    	cin >> phonenumber;
			cout << endl;

        	if (isMatch(members, name, phonenumber)) {
		    	cout << "�̹� ��ϵ� �����Դϴ�" << endl << endl;
		    	continue;
	    	}

	    	members.push_back(information(name, phonenumber));
	    	cout << "ȸ�������� �Ϸ�Ǿ����ϴ�" << endl << endl;

		}
		else if (choice == 2) {
			cout << "***** �α����� �����մϴ� *****" << endl << endl;
			string name, phonenumber;
			cout << "�̸��� �Է��ϼ��� : ";
			cin >> name;
			cout << "��ȭ��ȣ�� �Է��ϼ��� : ";
			cin >> phonenumber;
			cout << endl;

			if (isMatch(members, name, phonenumber)) {
				cout << "�α����� �Ϸ�Ǿ����ϴ�." << endl << endl;
				cout << "***** SWING " << name << "���� �����մϴ� *****" << endl << endl;
			}
			else {
				cout << "ȸ�� ������ ��ġ���� �ʽ��ϴ�." << endl << endl;
			}
		}
		else if (choice == 3) {
			cout << "***** ȸ�� ���� ������ �����մϴ� *****" << endl << endl;
			string name, phonenumber, newname, newphonenumber;
			cout << "���� ȸ�� ����" << endl;
			cout << "�̸� : ";
			cin >> name; 
			cout << "��ȭ��ȣ : ";
			cin >> phonenumber;
			cout << endl;

			if (!isMatch(members, name, phonenumber)) {
				cout << "ȸ�� ������ ��ġ���� �ʽ��ϴ�." << endl << endl;
				continue;
			}

			cout << "���ο� ȸ�� ����" << endl;
			cout << "�̸� : ";
			cin >> newname;
			cout << "��ȭ��ȣ : ";
			cin >> newphonenumber; 
			cout << endl;

			for (auto& member : members) {
				if (member.name == name && member.phonenumber == phonenumber) {
					member.name = newname;
					member.phonenumber = newphonenumber;
					cout << "ȸ�� ���� ������ �Ϸ�Ǿ����ϴ�." << endl << endl;
					break;
				}
			}
		}
		else if (choice == 4) {
			cout << "���α׷��� �����մϴ�." << endl;
			break;
		}
		else {
			cout << "��Ȯ�� ��ȣ�� �Է����ּ���." << endl;
		}
	}
	return 0;
}

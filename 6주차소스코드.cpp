#include <iostream>
using namespace std;

// Node Ŭ���� ���ø� ����
template <typename T>
class Node {
public:
	T data; // Node�� ������ ������
	Node* next; // ���� Node�� ����Ű�� ������

	// ������ (������ �ʱ�ȭ �� next�� nullptr�� ����)
	Node(T data) : data(data), next(nullptr) {}
};

// SingleLinkedList Ŭ���� ���ø� ����
template <typename T>
class SingleLinkedList{
private:
	Node<T>* head; // ����Ʈ�� ù ��° ��带 ����Ű�� ������
	Node<T>* tail; // ����Ʈ�� ������ ��带 ����Ű�� ������

public:
	// ������ (head�� tail�� nullptr�� �ʱ�ȭ)
	SingleLinkedList() : head(nullptr), tail(nullptr) {} 
	
	// ���ο� �����͸� ����Ʈ�� ���� �߰�
	void push(T value) {
		// �� ��� ����
		Node<T>* newNode = new Node<T>(value);
		// ����Ʈ�� ��� ������ head�� tail ��� �� ��带 ����Ŵ
		if (head == nullptr) {
			head = newNode;
			tail = newNode;
		}
		// ����Ʈ�� ��� ���� ���� ��� tail�� next�� �� ���� ����, tail ������Ʈ
		else {
			tail->next = newNode;
			tail = newNode;
		}
	}

	// ����Ʈ�� ��� ��� ���
	void show() {
		// ���� ��尡 ����Ű�� �����͸� head�� �ʱ�ȭ
		Node<T>* current = head;
		// ���� ��尡 nullptr�� �ƴ� ������ �ݺ�
		while (current != nullptr) {
			cout << current->data;
			// ���� ��尡 nullptr�� �ƴ� ��� -> ���
			if (current->next != nullptr) {
				cout << " -> ";
			}
			// ���� ���� �̵�
			current = current->next;
		}
		cout << " ->" << endl;
	}
};

int main() { // int Ÿ���� �����ϴ� ���� ���� ����Ʈ ����
	SingleLinkedList<int>* idx = new SingleLinkedList<int>;
	idx->push(1); // ����Ʈ 1�� �߰�
	idx->push(2); // ����Ʈ 2�� �߰�
	idx->push(3); // ����Ʈ 3�� �߰�
	idx->push(4); // ����Ʈ 4�� �߰�
	idx->push(5); // ����Ʈ 5�� �߰�
	idx->show();  // ����Ʈ�� ��� ��� ���
}

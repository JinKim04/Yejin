#include <iostream>
using namespace std;

// Node 클래스 템플릿 선언
template <typename T>
class Node {
public:
	T data; // Node가 저장할 데이터
	Node* next; // 다음 Node를 가리키는 포인터

	// 생성자 (데이터 초기화 및 next를 nullptr로 변경)
	Node(T data) : data(data), next(nullptr) {}
};

// SingleLinkedList 클래스 탬플릿 선언
template <typename T>
class SingleLinkedList{
private:
	Node<T>* head; // 리스트의 첫 번째 노드를 가리키는 포인터
	Node<T>* tail; // 리스트의 마지막 노드를 가리키는 포인터

public:
	// 생성자 (head와 tail을 nullptr로 초기화)
	SingleLinkedList() : head(nullptr), tail(nullptr) {} 
	
	// 새로운 데이터를 리스트의 끝에 추가
	void push(T value) {
		// 새 노드 생성
		Node<T>* newNode = new Node<T>(value);
		// 리스트가 비어 있으면 head와 tail 모두 새 노드를 가리킴
		if (head == nullptr) {
			head = newNode;
			tail = newNode;
		}
		// 리스트가 비어 있지 않을 경우 tail의 next를 새 노드로 설정, tail 업데이트
		else {
			tail->next = newNode;
			tail = newNode;
		}
	}

	// 리스트의 모든 요소 출력
	void show() {
		// 현재 노드가 가리키는 포인터를 head로 초기화
		Node<T>* current = head;
		// 현재 노드가 nullptr이 아닐 경우까지 반복
		while (current != nullptr) {
			cout << current->data;
			// 현재 노드가 nullptr이 아닐 경우 -> 출력
			if (current->next != nullptr) {
				cout << " -> ";
			}
			// 다음 노드로 이동
			current = current->next;
		}
		cout << " ->" << endl;
	}
};

int main() { // int 타입을 저장하는 단일 연결 리스트 생성
	SingleLinkedList<int>* idx = new SingleLinkedList<int>;
	idx->push(1); // 리스트 1에 추가
	idx->push(2); // 리스트 2에 추가
	idx->push(3); // 리스트 3에 추가
	idx->push(4); // 리스트 4에 추가
	idx->push(5); // 리스트 5에 추가
	idx->show();  // 리스트의 모든 요소 출력
}

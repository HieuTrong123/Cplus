struct Node
{
	char daTa;
	Node* pNext;
};
struct Stack
{
	Node* pHead;
	Node* ptail;
	void KhoiTao() {
		this->pHead = this->ptail = NULL;
	}
	Node* KhoiTaoNode(char x) {
		Node* newNODE = new Node;
		newNODE->daTa = x;
		newNODE->pNext = NULL;
		return newNODE;
	}
	void push(char x) {
		Node* t = KhoiTaoNode(x);
		if (this->pHead == NULL) {
			this->pHead = t;
			this->ptail = this->pHead;
		}
		else {
			t->pNext = this->pHead;
			this->pHead = t;
		}
	}
	char pop() {

	}
};

int Tao_Cac_So(Stack& a,Stack& b) {
	ifstream in("a.txt");
	if (!in)
		return 0;
	
}
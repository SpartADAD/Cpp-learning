#include <iostream>
#include <vector>
using namespace std;
using std::vector;
class HAHA {
public:
	void PH() {
		cout << "HELLO World" << endl;
	}
};
class SB :public HAHA {
public:
	virtual void PH() {
		cout << "HELLO " << endl;
	}
};
class SC :public HAHA {
public:
	virtual void PH() {
		cout << "HELLO 2 " << endl;
	}
};
int main() {

	SC *scp = new SC;
	HAHA *hap = scp;

	hap->PH();
	scp->PH();



	vector<HAHA *> v;
	v.push_back(new SB);
	v.push_back(new SC);
	for (auto f : v) {
		f->PH();
	}
	for (auto f : v) {
		f->PH();
	}
	getchar();
}
//class Base
//{
//public:
//	void print1() { printf("Hello from Base::print1!\n"); }
//	virtual void print2() { printf("Hello from Base::print2!\n"); }
//};
//
//class Derived : public Base
//{
//public:
//	void print1() { printf("Hello from Derived::print1!\n"); }
//	virtual void print2() { printf("Hello from Derived::print2!\n"); }
//};
//
//int main()
//{
//	Derived *pd = new Derived();
//	Base *pb = pd;
//
//	pd->print1();
//	pb->print1();
//
//	pd->print2();
//	pb->print2();
//
//	getchar();
//	return 0;
//}


#include <iostream>
#include <vector>
#include <string>
using namespace std;
using std::vector;
int main() {
	int cinTime = 0;
	string word;
	vector<string>text;
	cout << "!" << endl;
	while (cin >> word) {
		cinTime++;
		text.push_back(word);
		cout << word << endl;
		cout << "?" << endl;
		if (cinTime % 2 == 0) {
			for (vector<string>::size_type i = 0; i < text.size(); ++i) {
				cout << "这是列表内的数" << text[i] << endl;
			}
		}
	}
	getchar();
}


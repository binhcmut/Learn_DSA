#include <iostream>

using namespace std;

void print_str(string s) {
	cout << s << endl;
}

int main() {
	// bai 1
	cout << "hello world" << endl;
	
	// bai 2
	string str = "hello world";
	cout << str << endl;
	
	//bai 3
	string s1 = "hello", s2 = "world";
	string s3 = s1 + " " + s2;
	cout << s3 << endl;
	
	//bai 4
	print_str(s3);
	
	return 0;
}

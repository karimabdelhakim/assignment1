#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	static const int LIMIT = 25;
	string lname; // Person’s last name
	char fname[LIMIT]={}; // Person’s first name
public:
	Person() { // #0
		lname = ""; fname[0] = '\0'; 
	} 
	Person(const char * fn) {  // #1
		for (int i = 0; i < *fn != 0; i++) {
			fname[i] = *fn;
			fn++;
		}
	}
	Person(const string & ln, const char * fn) { // #2
		lname = ln;
		for (int i = 0; i < *fn!=0; i++) {
			fname[i] = *fn;
			fn++;
		}
	}
	// the following methods display lname and fname
	void Show() const { // firstname lastname format
		for (const char *i = fname; *i != 0; i++) {
			cout << *i;
		}
		cout << " " << lname << endl;
	}
	void FormalShow() const { // lastname, firstname format
		if(lname!="") cout << lname<<" ";
		for (const char *i = fname; *i != 0; i++) {
			cout << *i;
		}
		cout << endl;
	}
};

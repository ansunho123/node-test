#include <iostream>
#include <queue>


using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	cin >> num;

	

	for (int i = 0; i < num; i++) {

		priority_queue<char, vector<char>, greater<char>> a1;
		priority_queue<char, vector<char>, greater<char>> a2;


		string str;
		string str2;
		
		cin >> str;
		cin >> str2;

		int strsize = str.length();

		if (str.length() != str2.length()) {
			cout << "F" << '\n';
			continue;
		}

		for (int j = 0; j < strsize; j++) {
			char a = str[j];
			a1.push(a);
		}

		for (int k = 0; k < strsize; k++) {
			char b = str2[k];
			a2.push(b);
		}

		for (int z = 0; z < strsize; z++) {
			
			char one1 = a1.top();
			char one2 = a2.top();
			

			if (one1 != one2) {
				cout << "F" << '\n';
				break;
			}

			a1.pop();
			a2.pop();
			
		}
		if (a1.empty()) {
			cout << "T" << '\n';
		}
	}


	

	
	return 0;

}
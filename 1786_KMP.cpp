#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

vector<int> numbers;
int mycount = 0;

vector<int> GetPi(string pattern) { 
	int pattern_size = pattern.size();
	vector<int> pi(pattern_size, 0);
	int j = 0;
	for (int i = 1; i < pattern_size; i++) { 
		while (j > 0 && pattern[i] != pattern[j]) { 
			j = pi[j - 1];
		}
		if (pattern[i] == pattern[j]) { 
			pi[i] = ++j;
		}
	}
	return pi;
}

void KMP(string parent, string pattern) { 
	int parent_size = parent.size();
	int pattern_size = pattern.size();
	vector<int> pi = GetPi(pattern); 
	int j = 0;
	for (int i = 0; i < parent_size; i++) { 
		while (j > 0 && parent[i] != pattern[j]) { 
			j = pi[j - 1];
		}
		if (parent[i] == pattern[j]) {
			if (j == pattern_size - 1) {
                                mycount++;
				
                                numbers.push_back(i - pattern_size + 2);
				j = pi[j];
			}
			else j++;
		}
	}
}

int main(){
string text;
string pattern;
getline(cin, text);
getline(cin, pattern);


KMP(text, pattern);



cout << mycount << endl;
for(int i = 0; i<numbers.size(); i++)
        cout << numbers[i] << " ";


return 0;
}
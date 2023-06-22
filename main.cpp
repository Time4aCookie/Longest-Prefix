// Created by Rohan Tatikonda on 6/13/23.
#include "LongestCommonPrefix.h"
#include "iostream"

using namespace std;

int main(int argc, char* argv[]){
//	solution test;
//	vector<string> parameter = {"need", "needle", "needy", "n"};
//	string ans_holder = test.longestCommonPrefix(parameter);
//	cout << ans_holder << endl;
//	cout << "n" << endl;
vector<string> test = {"ffffffa", "ff", "ffffg"};
	sort(test.begin(), test.end());
	for(int i = 0; i < test.size(); ++i){
		cout << test[i] << " ,";
	}
}
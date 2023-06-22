// Created by Rohan Tatikonda on 6/13/23.
#include "LongestCommonPrefix.h"
#pragma once

using namespace std;

string solution::longestCommonPrefix(std::vector<std::string> & strs) {
	if (strs.size() ==1){
		return strs[0];
	}
	int length = 0;
	for(int i = 0; i < strs.size(); ++i){
		if (min(strs[0].size(), strs[i].size()) == 0){
			return "";
		}
		for(int j = 0; j < min(strs[0].size(), strs[i].size()); ++j){
			length = min(strs[0].size(), strs[i].size());
			if(strs[0][j] != strs[i][j]){
				strs[0] = strs[0].substr(0, j);
				break;
			}
		}

		if(length < strs[0].size()){
			strs[0] = strs[0].substr(0, length);
		}
	}
	return strs[0];
}
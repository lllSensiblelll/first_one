// Например, для пустого вектора функция должна вернуть пустую строку, 
// а для вектора из строк "apple", "apricot" и "application" — строку "ap".

#include <bits/stdc++.h>
using namespace std;

string CommonPrefix(vector<string>& words) {
    if (words.empty()) return "";
    sort(words.begin(),words.end());
    string res = words[0];
    for (const string& word : words) {
        if (word.length()<res.length()) res = word;
    }
    string result = "";
    for (size_t i = 0; i<res.length();i++) {
        if (words[0][i] == words[words.size()-1][i]) {
            result += words[0][i];
        }
        else break;
    }
    return result;
}

//та же логика, только без изменения вектора
string CommonPrefix(const vector<string>& words) {
    if (words.empty()) return "";
    
    string result = words[0];
    for (size_t i = 1; i < words.size(); ++i) {
        size_t j = 0;
        while (j < result.size() && j < words[i].size() && result[j] == words[i][j]) {
            ++j;
        }
        result = result.substr(0, j);
        if (result.empty()) break;
    }
    return result;
}
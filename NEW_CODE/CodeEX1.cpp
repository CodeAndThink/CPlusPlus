//Exercise 1: Enter each array

#include <iostream>
#include <vector>
using namespace std;

void generateCombinations(vector<vector<string>> & result, vector<string> & currentCombo, vector<vector<string>> & data, int dataIndex) {
    if (dataIndex == data.size()) {   	
        result.push_back(currentCombo);
        return;
    }
    for (const string & item : data[dataIndex]) {
        currentCombo.push_back(item);
        generateCombinations(result, currentCombo, data, dataIndex + 1);
        currentCombo.pop_back();
    }
}
vector<vector<string>> generateCombinations(vector<vector<string>> & data) {
    vector<vector<string>> result;
    vector<string> currentCombo;
    generateCombinations(result, currentCombo, data, 0);
    return result;
}
int main() {
    vector<vector<string>> data;
    int numArrays;
    cout << "Enter number of array: ";
    cin >> numArrays;
    for (int i = 0; i < numArrays; ++i) {
        int numElements;
        cout << "Enter nummber in array " << i + 1 << ": ";
        cin >> numElements;

        vector<string> array;
        for (int j = 0; j < numElements; ++j) {
            string element;
            cout << "Enter member " << j + 1 << ": ";
            cin >> element;
            array.push_back(element);
        }

        data.push_back(array);
    }
    vector<vector<string>> combinations = generateCombinations(data);
    for (const auto & combo : combinations) {
        for (const auto & item : combo) {
            cout << item << " ";
        }
        cout << endl;
    }
    return 0;
}


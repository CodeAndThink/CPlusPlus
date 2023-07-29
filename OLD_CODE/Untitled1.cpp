#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ofstream ofs("nums.txt");
    if(!ofs){
        cerr << "Error: file not opened." << endl;
        return 1;
    }

    int num[] = {10, 20, 44, 60, 82};

    for (int i = 1; i < 5; i++)
        ofs << num[i] << ' ';

    ofs.close();
    return 0;
}

Solution:

#include <iostream>
using namespace std;
int main() {
int num, sum = 0, maxNum, minNum;
cout << "Enter 10 numbers:\n";
cin >> num;
um = num:
maxNum = num;
minNum = num;
}
for (int i = 1; i <10; i++) {
cin >> num;
sum += num;
if (num > maxNum)
maxNum = num;
if (num < minNum)
minNum = num;
cout << "Sum = "<< sum << endl;
cout << "Maximum = " << maxNum << endl;
cout << "Minimum = " <<minNum << endl;
return 0;
}

# include <iostream>
using namespace std;

int main(){
    int userNum;
    char userGrade;

    cout << "Enter a number 0-100" << endl;
    cin >> userNum;

    if (userNum < 70){
        userGrade = 'F';
    }
    else if (userNum < 80){
        userGrade = 'C';
    }
    else if (userNum < 90){
        userGrade = 'B';
    }
    else {
        userGrade = 'A';
    }

    cout << "Your grade: " << userGrade << endl;

    return 0;
}

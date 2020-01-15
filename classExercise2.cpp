# include <iostream>
using namespace std;

int main(){
    int quizGrade[5];
    int quizTemp;
    double quizAverage;
    int sum = 0;

    for (int i = 0; i < 5; ++i){
        cout << "Enter a number 0-100" << endl;
        cin >> quizTemp;
        quizGrade[i] = quizTemp;
        sum += quizTemp;
    }

    quizAverage = sum / 5.0;

    cout << "Your average is: " << quizAverage << endl;


    return 0;
}

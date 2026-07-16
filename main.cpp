//
//  main.cpp
//  Lab_4
//
//  Created by Erik Petersen on 7/14/26.
//
#include <iostream>
#include <iomanip>// for std::fixed and std::setprecision
#include <iterator>// for std::size

using namespace std;


//function to calculate the sum of all scores

int calculateSum(const int(arr)[], int SIZE) {
    int sum=arr[0];
    for (int i = 1; i < SIZE; i++) {
        sum=sum+arr[i];
    }
    return sum;
}


//function to calculate the average

double getAverage(int sum, int SIZE) {
    double average=static_cast<double>(sum) / SIZE;
    return average;
    
}

void addBonus(int arr[], int SIZE, int bonus = 5) {
    for (int i = 0; i < SIZE; i++) {
        arr[i]=arr[i]+bonus;
    }
}
//function to calculate how many are passing

int findHighest(const int* arr, int SIZE) {
    int highestScore=arr[0];
    for (int i = 1; i < SIZE; i++) {
        if (highestScore<arr[i]) {
            highestScore=arr[i];
    }
        }
    return highestScore;
            }

int countPassed(const int arr[], int SIZE) {
    int peoplePassing=0;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i]>=70)
            peoplePassing=peoplePassing+1;
    }
    return peoplePassing;
}

int main() {
    int scores[]={65, 82, 90, 45, 78};
    const int SIZE=size(scores);
    int sum = calculateSum(scores, SIZE);
    
    // print out scores in original order
    cout <<"Scores in original order: " << std::endl;
    
    for (int score : scores) {
        cout << score << " ";
    }
    cout <<""<< endl;
    
    cout <<"sum: " << sum << endl;
    cout <<"Average: " << getAverage(sum, SIZE) << endl;
    
    
    // Add bonus points
    addBonus(scores, SIZE);

    // Show new scores
    cout << "Scores After Bonus: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << scores[i] << " ";
    }
    cout << endl;
    
    // Show highest score and number passed
      cout << "Highest Score: " << findHighest(scores, SIZE) << endl;
      cout << "Number Passed: " << countPassed(scores, SIZE) << endl;
    
    
    return 0;
}


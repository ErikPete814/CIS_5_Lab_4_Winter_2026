# CIS_5_Lab_4_Winter_2026

Functions & Passing Methods

Goal: Manage 5 student scores using different parameter passing
Array (hard-coded):  {65, 82, 90, 45, 78} -> use these numbers for the lab

**Create your own main.cpp**

Tasks:

1. int calculateSum(const int arr[], int size)           // const ref/pointer
2. double getAverage(int sum, int size)                  // by value
3. void addBonus(int arr[], int size, int bonus = 5)     // ref or pointer → modifies original
4. int findHighest(const int* arr, int size)             // pointer, return value
5. int countPassed(const int arr[], int size)            // const ref/pointer, ≥70

In main():
- Show original scores
- Show sum & average
- Add bonus → show new scores
- Show highest & number passed

Key Questions to Answer in Comments / Video:
- What stays unchanged when using pass by value?
  The original value stays unchanged because only a copy of the value is used in the function.
- How does pass by reference change the original array?
  pass by refrence or by pointer in the case of an array sends the original array to the function allowing the function to edit the contents of the original array.
- Why use const with pointers/references when reading only?
  So when looking back at your own code or when someone else is looking t your code they know that function is not supposed to change any original values only output new ones without actually having to understand what it is doing. Also to prevent errors if you accidentaly have something that isn't just reading the array

Deliverable:
- main.cpp
- 1–2 min video explaining logic + demo run
- Upload to GitHub (fork this repo first)

---

## Student Notes / Lab Demonstration

### Program Overview
This lab demonstrates different C++ parameter passing methods by managing five student scores with functions. The program calculates the total score, average score, adds bonus points, finds the highest score, and counts how many students passed.

### Features Implemented
- Calculates the sum of all student scores
- Calculates the average score using pass by value
- Adds bonus points while modifying the original array
- Finds the highest score using pointer parameters
- Counts students who scored 70 or higher
- Demonstrates the use of `const` with arrays and pointers

### Code Demonstration Video
YouTube Link: https://youtu.be/3yBlGpgFgVo

### Author
Erik Petersen

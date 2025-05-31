/*
    HackerLand University has the following grading policy:
    - Every student receives a grade in the inclusive range from 0 to 100.
    - Any grade less than 40 is a failing grade.
    
    Sam is a professor at the university and likes to round the grades according to these rules:
    - If the difference between the grade and the next multiple of 5 is less than 3, round the grade up to the next multiple of 5.
    - If the grade is less than 38, no rounding occurs as the result will still be a failing grade.
    
    Examples:
    - grade = 84 rounds to 85 (85 - 84 is less than 3)
    - grade = 29 stays 29 (less than 38)
    - grade = 57 stays 57 (60 - 57 is 3 or higher)
    
    Given the received grades for her class, write code to automate the rounding process.
*/

#include <iostream>
using namespace std;
#include <vector>

vector<int> gradingStudents(vector<int> grades)
{
    int temp;
    vector<int> newGrades;
    for (int grade : grades)
    {
        if (grade < 38)
        {
            newGrades.push_back(grade);
            continue;
        }
        else if (grade % 5 > 2)
        {
            temp = grade / 5;
            grade = temp * 5 + 5;
        }
        newGrades.push_back(grade);
    }
    return newGrades;
}

int main()
{
    int n;
    cout << "Enter the number of grades: ";
    cin >> n;
    vector<int> grades(n);
    cout << "Enter the grades: ";
    for (int i = 0; i < n; i++)
        cin >> grades[i];
    vector<int> result = gradingStudents(grades);
    cout << "Updated grades: ";
    for (int grade : result)
        cout << grade << " ";
    cout << endl;
    return 0;
}
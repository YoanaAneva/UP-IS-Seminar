#include <iostream>
using namespace std;

struct Student
{
    char name[21];
    double averageScore;
    int facultyNumber;
    bool hasPassed;

    void createStudent()
    {
        cout << "Name: ";
        cin.getline(name, 21);
        cout << "Average Score: "; cin >> averageScore;
        cout << "Faculty number: "; cin >> facultyNumber;
        cout << "Has passed: "; cin >> hasPassed;
        cin.ignore();
    }

    void printStudent()
    {
        cout << name << endl;
        cout << averageScore << endl;
        cout << facultyNumber << endl;
        cout << (hasPassed ? "Passed" : "Not passed") << endl;
        cout << endl;
    }
};

void compareScores(Student n1, Student n2)
{
    if(n1.averageScore > n2.averageScore)
    {
        cout << "Bigger score: " << n1.name << "'s: " << n1.averageScore << endl;
    }
    else
    {
        cout << "Bigger score: " << n2.name << "'s: " << n2.averageScore << endl;
    }
}

void compareFacNumbers(Student n1, Student n2)
{
    if(n1.facultyNumber > n2.facultyNumber)
    {
        cout << "Bigger faculty number: " << n1.name << "'s: " << n1.facultyNumber << endl;
    }
    else
    {
        cout << "Bigger faculty number: " << n2.name << "'s: " << n2.facultyNumber << endl;
    }
}

void whoHasPassed(Student n1, Student n2)
{
    if (n1.hasPassed)
    {
        cout << n1.name << " has passed" << endl;
    }
    if (n2.hasPassed)
    {
        cout << n2.name << " has passed" << endl;
    }
    else
    {
        cout << "No one has passed :(" << endl;
    }
}

struct SUSI
{
    Student students[30] = {{"Ivan", 75, 334422, 1}, {"Pesho", 64, 543288, 1},
                            {"Milko", 23, 8836563, 0}, {"Yoana", 96, 570473, 1},
                            {"Teda", 84, 757593, 1}, {"Dido", 21, 395630, 0},
                            {"Kalata", 53,759375, 1}, {"Gosho", 70, 857942, 1},
                            {"Misho", 39, 362854, 0}, {"Ivaila", 92, 758395, 1},
                            {"Dragan", 59, 994843, 1}, {"Joro", 68, 747471, 1}, 
                            {"Petio", 43, 484832, 1}, {"Natali", 83, 494940, 1}, 
                            {"Sofia", 65, 859493, 1}, {"Bobi", 4, 949323, 0}, 
                            {"Didka", 12, 149473, 0}, {"Kiro", 51, 837563, 0}, 
                            {"Ani", 23, 865638, 0}, {"Stoilcho", 39, 837563, 0}, 
                            {"Mitio", 32, 984657, 0}, {"Koceto", 86, 846573, 1}, 
                            {"Penka", 47, 864334, 1}, {"Stoilka", 29, 465622, 0}, 
                            {"Liolio", 65, 848574, 1}, {"Mitaka", 41, 748375, 0}, 
                            {"Lili", 32, 883832, 0}, {"Bonka", 62, 947432, 1}, 
                            {"Milka", 53, 847631, 1}, {"Pencho", 18, 846221, 0}};

    void createStudents()
    {
        for (int i = 0; i < 30; i++)
        {
            students[i].createStudent();
        }
    }

    void printStudents()
    {
        for (int i = 0; i < 30; i++)
        {
            students[i].printStudent();
        }
    }

    void sortByFN()
    {
        for (int i = 0; i < 30; i++)
        {
            for (int j = 0; j < 30; j++)
            {
                if (students[j].facultyNumber < students[j + 1].facultyNumber)
                {
                    Student temp = students[j];
                    students[j] = students[j + 1];
                    students[j + 1] = temp;
                }
            }
        }
    }

     void sortByScore()
    {
        for (int i = 0; i < 30; i++)
        {
            for (int j = 0; j < 30; j++)
            {
                if (students[j].averageScore < students[j + 1].averageScore)
                {
                    Student temp = students[j];
                    students[j] = students[j + 1];
                    students[j + 1] = temp;
                }
            }
        }
    }

    void printOnlyPassed()
    {
        for(int i = 0; i < 30; i++)
        {
            if(students[i].hasPassed)
                students[i].printStudent();
        }
    }
};

int main()
{
    SUSI students;

    // students.createStudents();
    // students.sortByFN();
    students.sortByScore();
    students.printOnlyPassed();
    // students.printStudents();

    

    // Student student[2];

    // for (int i = 0; i < 2; i++)
    // {
    //     student[i].createStudent();
    // }
    // cout << endl;

    // compareScores(student[0], student[1]);
    // compareFacNumbers(student[0], student[1]);
    // whoHasPassed(student[0], student[1]);

    // cout << endl;
    // for (int i = 0; i < 2; i++)
    // {
    //     student[i].printStudent();
    //     cout << endl;
    // }
}
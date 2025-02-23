#include <iostream>
#include <string>
#include <conio.h>   //for getch
#include <windows.h> //Screen Clear
#include <stdlib.h>  //Random function
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student
{
    string name, fname;
    int rollno;
    int marks;
    int random;
};
student st;

/*------------------ C++ Quiz -------------------*/
void cplusplus()
{
    char option;
    st.marks = 0;
    int i = 0, arr[5];
    while (i <= 5)
    {
    previous:
        st.random = rand() % 6;
        for (int j = 0; j <= 6; j++)
        {
            if (st.random == arr[j])
            {
                goto previous;
            }
        }
        arr[i] = st.random;
        switch (st.random)
        {
        case 0:
            cout << endl;
            cout << "1.C++ is a ?" << endl;
            cout << "A) Programming Language" << endl;
            cout << "B) English Language" << endl;
            cout << "C) Hindi Language" << endl;
            cout << "D) NO Language" << endl;
            option = getch();
            if (option == 'A' || option == 'a')
            {
                cout << endl
                     << "Correct Answer Congrats." << endl;
                st.marks++;
            }
            else
            {
                cout << endl
                     << "Incorrect Answer very bad." << endl;
            }
            cout << endl;
            break;
        case 1:
            cout << "2.C++ is used for ?" << endl;
            cout << "A) Programming " << endl;
            cout << "B) Dancing" << endl;
            cout << "C) Sleeping" << endl;
            cout << "D) None of these" << endl;
            option = getch();
            if (option == 'A' || option == 'a')
            {
                cout << endl
                     << "Correct Answer Congrats." << endl;
                st.marks++;
            }
            else
            {
                cout << endl
                     << "Incorrect Answer very bad." << endl;
            }
            cout << endl;
            break;

        case 2:
            cout << "3.OOP is used for C++ ?" << endl;
            cout << "A) No" << endl;
            cout << "B) Yes" << endl;
            cout << "C) Not at all" << endl;
            cout << "D) None of these" << endl;
            option = getch();
            if (option == 'B' || option == 'b')
            {
                cout << endl
                     << "Correct Answer Congrats." << endl;
                st.marks++;
            }
            else
            {
                cout << endl
                     << "Incorrect Answer very bad." << endl;
            }

            cout << endl;
            break;

        case 3:
            cout << "4.Who Created C++ ?" << endl;
            cout << "A) Dennis Ritchie" << endl;
            cout << "B) Andrew Tate" << endl;
            cout << "C) Bjarne Stroustrup" << endl;
            cout << "D) None of these" << endl;
            option = getch();
            if (option == 'C' || option == 'c')
            {
                cout << endl
                     << "Correct Answer Congrats." << endl;
                st.marks++;
            }
            else
            {
                cout << endl
                     << "Incorrect Answer very bad." << endl;
            }
            cout << endl;
            break;

        case 4:

            cout << "5.What is a correct syntax to output Hello World in C++ ?" << endl;
            cout << "A) cin>>Hello world" << endl;
            cout << "B) print(Hello World)" << endl;
            cout << "C) cout<<"
                    "Hello World"
                    ""
                 << endl;
            cout << "D) None of these" << endl;
            option = getch();
            if (option == 'C' || option == 'c')
            {
                cout << endl
                     << "Correct Answer Congrats." << endl;
                st.marks++;
            }
            else
            {
                cout << endl
                     << "Incorrect Answer very bad." << endl;
            }
            break;
        }
        i++;
    }
}

/*------------------ HTML Quiz -------------------*/

void html()
{
    char option;
    st.marks = 0;
    int i = 0, arr[5];
    while (i <= 5)
    {
    previous:
        st.random = rand() % 6;
        for (int j = 0; j <= 6; j++)
        {
            if (st.random == arr[j])
            {
                goto previous;
            }
        }
        arr[i] = st.random;
        switch (st.random)
        {
        case 0:
            cout << endl;
            cout << "1.HTML full form ?" << endl;
            cout << "A) Hyper Text Markup Language" << endl;
            cout << "B) Hyper Testing Makeup Language" << endl;
            cout << "C) Hyper Text Machine Language" << endl;
            cout << "D) None of these" << endl;
            option = getch();
            if (option == 'A' || option == 'a')
            {
                cout << endl
                     << "Correct Answer Congrats." << endl;
                st.marks++;
            }
            else
            {
                cout << endl
                     << "Incorrect Answer very bad." << endl;
            }
            cout << endl;
            break;
        case 1:
            cout << "2.HTML used for ?" << endl;
            cout << "A) Labelling" << endl;
            cout << "B) Animation" << endl;
            cout << "C) Web Page" << endl;
            cout << "D) None of these" << endl;
            option = getch();
            if (option == 'C' || option == 'c')
            {
                cout << endl
                     << "Correct Answer Congrats." << endl;
                st.marks++;
            }
            else
            {
                cout << endl
                     << "Incorrect Answer very bad." << endl;
            }
            cout << endl;
            break;
        case 2:

            cout << "3.HTML is easy language ?" << endl;
            cout << "A) No" << endl;
            cout << "B) Yes" << endl;
            cout << "C) Not at all" << endl;
            cout << "D) None of these" << endl;
            option = getch();
            if (option == 'B' || option == 'b')
            {
                cout << endl
                     << "Correct Answer Congrats." << endl;
                st.marks++;
            }
            else
            {
                cout << endl
                     << "Incorrect Answer very bad." << endl;
            }
            cout << endl;
            break;

        case 3:

            cout << "4.Who Created C++ ?" << endl;
            cout << "A) Dennis Ritchie" << endl;
            cout << "B) Andrew Tate" << endl;
            cout << "C) Tim Berners-Lee " << endl;
            cout << "D) None of these" << endl;
            option = getch();
            if (option == 'C' || option == 'c')
            {
                cout << endl
                     << "Correct Answer Congrats." << endl;
                st.marks++;
            }
            else
            {
                cout << endl
                     << "Incorrect Answer very bad." << endl;
            }
            cout << endl;
            break;

        case 4:

            cout << "5.How to view HTML Page ?" << endl;
            cout << "A) in Terminal" << endl;
            cout << "B) in Browser" << endl;
            cout << "C) Both A and B" << endl;
            cout << "D) None of these" << endl;
            option = getch();
            if (option == 'B' || option == 'b')
            {
                cout << endl
                     << "Correct Answer Congrats." << endl;
                st.marks++;
            }
            else
            {
                cout << endl
                     << "Incorrect Answer very bad." << endl;
            }
            break;
        }
        i++;
    }
}

void result()
{
    int percentage;
    cout << "Student Name: " << st.name << endl;
    cout << "Student Father Name: " << st.fname << endl;
    cout << "Student Roll_no: " << st.rollno << endl;
    cout << "Marks: " << st.marks << endl;
    percentage = 100 * st.marks / 5;
    cout << "Percentage: " << percentage << endl;
    if (percentage >= 35)
    {
        cout << "Great You Pass the Quiz." << endl
             << endl;
    }
    else
    {
        cout << "Sorry You not Pass the Quiz." << endl
             << endl;
    }
}

int main()
{
    char start, select;
    do
    {
        system("CLS");
        cout << "\n\n\n\n\n\n\t\t\t\t\t\t Random Quiz System \n\n\n";
        cout << "Enter your Name: ";
        cin >> st.name;
        cout << "Enter your Father Name: ";
        cin >> st.fname;
        cout << "Enter your Roll Number: ";
        cin >> st.rollno;
        cout << endl;
        cout << "Select the subject for your quiz: " << endl;
        cout << "1) C++ \n";
        cout << "2) HTML \n";
        select = getch();
        system("CLS");
        switch (select)
        {
        case '1':
            cout << "C++ Quiz Started." << endl;
            cout << endl;
            cplusplus();
            system("CLS");
            cout << "\n\n\n\n\t\t\t\t\tResult of your Quiz\n\n\n";
            result();
            break;
        case '2':
            cout << "HTML Quiz Started." << endl;
            cout << endl;
            html();
            system("CLS");
            cout << "\n\n\n\n\t\t\t\t\tResult of your Quiz\n\n\n";
            result();
            break;
        }
        cout << "Press S in order to start the Quiz OR any key for ending the Quiz ! \n";
        start = getch();
    } while (start == 'S' || start == 's');

    return 0;
}

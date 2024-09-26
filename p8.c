//wap to implement adamas uni semester marking system 

#include <stdio.h>
typedef struct sgpa
{
    int credit;
    int marks;

} gpa;
int marksystem(int subject, int credit, int marks);
int main()
{
    gpa var[5];
    var[0].credit = 2;
    var[0].marks = 90;

    var[1].credit = 3;
    var[1].marks = 80;

    var[2].credit = 4;
    var[2].marks = 75;

    var[3].credit = 3;
    var[3].marks = 75;

    var[4].credit = 2;
    var[4].marks = 85;
    int i;
    int ga = 0;
    int cradit = 0;
    for (i = 0; i < 5; i++)
    {

        ga += marksystem(i, var[i].credit, var[i].marks);
    }
    for (i = 0; i < 5; i++)
    {

        cradit += var[i].credit;
    }
    float sgpa = (float)ga / cradit;

    printf("Your SGPA is %.2f", sgpa);
    return 0;
}

int marksystem(int subject, int credit, int marks)

{
    int result;
    if (marks <= 100 && marks >= 91)
    {
        result = 10 * credit;
    }
    else if (marks <= 90 && marks >= 81)
    {
        result = 9 * credit;
    }
    else if (marks <= 80 && marks >= 71)
    {
        result = 8 * credit;
    }
    else if (marks <= 70 && marks >= 61)
    {
        result = 7 * credit;
    }
    else if (marks <= 60 && marks >= 51)
    {
        result = 6 * credit;
    }
    else if (marks <= 50 && marks >= 41)
    {
        result = 5 * credit;
    }
    else if (marks <= 40 && marks >= 31)
    {
        result = 4 * credit;
    }
    else if (marks <= 30 && marks >= 21)
    {
        result = 3 * credit;
    }
    else if (marks <= 20 && marks >= 11)
    {
        result = 2 * credit;
    }
    else if (marks <= 10 && marks >= 01)
    {
        result = 1 * credit;
    }
    return result;
}
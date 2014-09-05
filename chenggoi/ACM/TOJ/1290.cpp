#include <stdio.h>
#include <string.h>
#include<iostream>
using namespace std;
typedef struct tagCard
{
    char name;
    char value;
    char suit;
} Card;


typedef Card Item;


Card cBlack[5];
Card cWhite[5];

int oBlack[5];
int oWhite[5];

char line[32];



char CardValues[] = "23456789TJQKA";

int lessthan(Item t1, Item t2)
{
    return (t1.value < t2.value) ? 1 : 0;
}


int diffence(Item t1, Item t2)
{
    return (t1.value - t2.value);
}


void exchange(Item a[], int i, int j)
{
    char n1 = a[i].name;
    char v1 = a[i].value;
    char s1 = a[i].suit;

    a[i].name = a[j].name;
    a[i].value = a[j].value;
    a[i].suit = a[j].suit;

    a[j].name = n1;
    a[j].value = v1;
    a[j].suit = s1;
}


void SelectionSort(Item a[], int left, int right)
{
    int i, j, min;

    for(i = left; i < right; i++)
    {
        min = i;

        for(j = i + 1; j <= right; j++)
            if(lessthan(a[j], a[min])) { min = j; }

        exchange(a, i, min);
    }
}





void InitCards()
{
    int i;

    for(i = 0; i < 5; i++)
    {
        cBlack[i].name = line[3 * i];
        cBlack[i].suit = line[3 * i + 1];
        cBlack[i].value = strchr(CardValues, cBlack[i].name) - CardValues;

        cWhite[i].name = line[3 * i + 15];
        cWhite[i].suit = line[3 * i + 16];
        cWhite[i].value = strchr(CardValues, cWhite[i].name) - CardValues;
    }
}


void SortCards()
{
    SelectionSort(cBlack, 0, 4);
    SelectionSort(cWhite, 0, 4);
}


int IsBomb(Item a[], int i)
{
    if(a[i + 1].value == a[i].value
            && a[i + 2].value == a[i].value
            && a[i + 3].value == a[i].value)
    {
        return 1;
    }

    return 0;
}


int IsThree(Item a[], int i)
{
    if(a[i + 1].value == a[i].value
            && a[i + 2].value == a[i].value)
    {
        return 1;
    }

    return 0;
}


int IsPair(Item a[], int i)
{
    if(a[i + 1].value == a[i].value)
    {
        return 1;
    }

    return 0;
}


int IsStraight(Item a[])
{
    if((a[1].value - a[0].value) == 1
            && (a[2].value - a[1].value) == 1
            && (a[3].value - a[2].value) == 1
            && (a[4].value - a[3].value) == 1)
    {
        return 1;
    }

    return 0;
}


int IsFlush(Item a[])
{
    if(a[1].suit == a[0].suit
            && a[2].suit == a[0].suit
            && a[3].suit == a[0].suit
            && a[4].suit == a[0].suit)
    {
        return 1;
    }

    return 0;
}



int GetLevel(Item a[], int order[])
{
    int level, i, t1, t2, t3;
    order[0] = order[1] = order[2] = order[3] = order[4] = 0;


    level = 9;

    if(IsStraight(a) && IsFlush(a))
    {
        order[0] = a[4].value;
        return level;
    }


    level--;

    if(IsBomb(a, 0) || IsBomb(a, 1))
    {

        order[0] = a[1].value;
        return level;
    }


    level--;

    if((IsThree(a, 0) && IsPair(a, 3)) || (IsThree(a, 2) && IsPair(a, 0)))
    {

        order[0] = a[2].value;
        return level;
    }


    level--;

    if(IsFlush(a))
    {


        for(i = 0; i < 5; i++) { order[i] = a[4 - i].value; }

        return level;
    }


    level--;

    if(IsStraight(a))
    {
        order[0] = a[4].value;
        return level;
    }


    level--;

    if(IsThree(a, 0) || IsThree(a, 1) || IsThree(a, 2))
    {
        order[0] = a[2].value;
        return level;
    }


    level--;

    if((i = 0, IsPair(a, 1) && IsPair(a, 3))
            || (i = 2, IsPair(a, 0) && IsPair(a, 3))
            || (i = 4, IsPair(a, 0) && IsPair(a, 2)))
    {
        order[0] = a[3].value;
        order[1] = a[1].value;
        order[2] = a[i].value;
        return level;
    }



    level--;

    if((i = 0, t1 = 4, t2 = 3, t3 = 2, IsPair(a, 0))
            || (i = 1, t1 = 4, t2 = 3, t3 = 0, IsPair(a, 1))
            || (i = 2, t1 = 4, t2 = 1, t3 = 0, IsPair(a, 2))
            || (i = 3, t1 = 2, t2 = 1, t3 = 0, IsPair(a, 3)))
    {

        order[0] = a[i].value;
        order[1] = a[t1].value;
        order[2] = a[t2].value;
        order[3] = a[t3].value;
        return level;
    }


    level--;

    for(i = 0; i < 5; i++) { order[i] = a[4 - i].value; }

    return level;
}

int main()
{
    int lBlack, lWhite, i;

    while(gets(line) != NULL && strlen(line) > 2)
    {
        InitCards();
        SortCards();
        lBlack = GetLevel(cBlack, oBlack);
        lWhite = GetLevel(cWhite, oWhite);


        if(lBlack > lWhite)
        {
            cout << "Black wins." << endl;
        }
        else if(lBlack < lWhite)
        {
            cout << "White wins." << endl;
        }
        else
        {

            for(i = 0; i < 5; i++)
            {
                if(oBlack[i] > oWhite[i])
                {
                    cout << "Black wins." << endl;
                    break;
                }
                else if(oBlack[i] < oWhite[i])
                {
                    cout << "White wins." << endl;
                    break;
                }
            }

            if(i == 5) { cout << "Tie." << endl; }
        }
    }

    return 0;
}

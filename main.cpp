//
//  Lab VIII Part II
//
//  Created by Edgar Esparza on 7/1/15.
//

#include <iostream>
#include <cmath>
using namespace std;

void generateData(int [] , int count);

int countValue(const int [], int howMany, int value);

int main()
{
    int data[500];
    
    generateData(data, 500);
    
    for (int i = 1 ; i <= 6 ; i++)
    {
        cout << i << " " << countValue(data, 500, i) << endl;
    }
}

void generateData(int d[], int cnt)
{
    srand(12345);
    int dice;
    for(int i = 0; i < cnt ; i++)
    {
        dice = rand()%6+1;
        d[i] = dice;
    }
}

int countValue(const int d[], int howMany, int value)
{
    int total = 0;
    for( int i = 0; i < howMany ; i++)
    {
        if (d[i] == value)
            total++;
            }
    return total;
}

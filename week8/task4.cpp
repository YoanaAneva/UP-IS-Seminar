#include <iostream>
using namespace std;
const int MAX_SIZE = 40;
int countChars(char array[]);
int main()
{
    char array[MAX_SIZE];
    cin.getline(array, MAX_SIZE);
    int size = countChars(array);
    for (int i = 0; i < size; i++)
    {
        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] == array[j])
            {
                count++;
            }
        }
        if (i > 0)
        {
            for (int k = i - 1; k != 0; k--)
            {
                if (array[k] == array[i])
                {
                    continue;
                }
                else
                {
                    cout << array[i] << " is found " << count << " times" << endl;
                }
            }
        }
        else
        {
            cout << array[i] << " is found " << count << " times" << endl;
        }
    }
}
int countChars(char array[])
{
    int count = 0;
    for (int i = 0; array[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
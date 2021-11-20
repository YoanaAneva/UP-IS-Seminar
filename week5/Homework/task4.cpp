#include <iostream>
using namespace std;

bool check_if_number_is_degree_of_two(int number)
{
    for (int i = 0; i <= 25; i++)
    {
        int current_degree_of_two = 1;
        for (int j = 1; j <= i; j++)
        {
            current_degree_of_two *= 2;
            if (current_degree_of_two == number)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int number;
    cin >> number;
    cout << boolalpha << check_if_number_is_degree_of_two(number) << endl;

}
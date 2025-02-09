#include <bits/stdc++.h>
using namespace std;
bool check_permutation(char c1[], char c2[])
{
    if (strlen(c1) != strlen(c2))
    {
        return false;
    }
    char freq[256] = {0};
    for (int i = 0; i < strlen(c1); i++)
    {
        freq[c1[i]]++;
    }
    for (int i = 0; i < strlen(c2); i++)
    {
        freq[c2[i]]--;
    }
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char c1[50], c2[50];
    cout << "Enter any character size of array:";
    cin >> c1;
    cout << "Enter any permutation of array:";
    cin >> c2;
    cout << check_permutation(c1, c2) << endl;
    return 0;
}

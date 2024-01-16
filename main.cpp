// Note: We have made this only for 3-character word search

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << endl
         << "WARNING: Please Enter Correct Number Of Characters According to Lines and Columns, otherwise program will throw error!!!" << endl;
    cout << "THIS PROGRAM IS ONLY FOR 3-CHARACTER WORD SEARCH.IT WILL RETURN THE POSITIONS WHERE ENTERED WORD IS FOUND AND WILL RETURN NOTHING IF THE WORD IS NOT MATCHED\n";
    cout << endl
         << "Enter No of Characters in a Line: " << endl;
    cin >> a;

    cout << "Enter No of Lines: " << endl;
    cin >> b;

    char array[a][b];
    cout << "Enter Character Array: " << endl;

    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cin >> array[i][j];
        }
        cout << endl;
    }
    cout << endl
         << "Entered 2-D Array is: " << endl;
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;
    char wl[3];
    cout << "Enter 3-CHARACTER Word you want to search: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> wl[i];
    }

    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a - 2; j++)
        {
            if (wl[0] == array[i][j])
            {
                if (wl[1] == array[i][j + 1])
                {
                    if (wl[2] == array[i][j + 2])
                    {
                        cout << endl
                             << "Horizonatal Line:\t"
                             << wl[0] << wl[1] << wl[2] << "(" << j + 1 << "," << j + 3 << ")"
                             << "\tRow Line: " << i + 1;
                    }
                }
            }
        }
    }

    for (int i = 0; i < b - 2; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (wl[0] == array[i][j])
            {
                if (wl[1] == array[i + 1][j])
                {
                    if (wl[2] == array[i + 2][j])
                    {
                        cout << endl
                             << "Vertical Line:\t"
                             << wl[0] << wl[1] << wl[2] << "(" << i + 1 << "," << i + 3 << ")"
                             << "\tColumn Line: " << j + 1;
                    }
                }
            }
        }
    }

    for (int i = 2; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (wl[0] == array[i][j])
            {
                if (wl[1] == array[i - 1][j])
                {
                    if (wl[2] == array[i - 2][j])
                    {
                        cout << endl
                             << "Backward Vertical Line:\t"
                             << wl[0] << wl[1] << wl[2] << "(" << i + 1 << "," << i - 1 << ")"
                             << "\tColumn Line: " << j + 1;
                    }
                }
            }
        }
    }

    for (int i = 0; i < b; i++)
    {
        for (int j = 2; j < a; j++)
        {
            if (wl[0] == array[i][j])
            {
                if (wl[1] == array[i][j - 1])
                {
                    if (wl[2] == array[i][j - 2])
                    {
                        cout << endl
                             << "Backward Horizonatal Line:\t"
                             << wl[0] << wl[1] << wl[2] << "(" << j + 1 << "," << j - 1 << ")"
                             << "\tRow Line: " << i + 1;
                    }
                }
            }
        }
    }

    for (int i = 0; i < b - 2; i++)
    {
        for (int j = 0; j < a - 2; j++)
        {
            if (wl[0] == array[i][j])
            {
                if (wl[1] == array[i + 1][j + 1])
                {
                    if (wl[2] == array[i + 2][j + 2])
                    {
                        cout << endl
                             << "Primary Diagonal Line:\t"
                             << wl[0] << wl[1] << wl[2] << "(" << i + 1 << "," << j + 1 << ")--(" << i + 3 << "," << j + 3 << ")"
                             << "\tRow Line: " << i + 1 << "--" << i + 3 << "\tColumn Line: " << j + 1 << "--" << j + 3;
                    }
                }
            }
        }
    }

    for (int i = 2; i < b; i++)
    {
        for (int j = 2; j < a; j++)
        {
            if (wl[0] == array[i][j])
            {
                if (wl[1] == array[i - 1][j - 1])
                {
                    if (wl[2] == array[i - 2][j - 2])
                    {
                        cout << endl
                             << "Primary Diagonal Backward Line:\t"
                             << wl[0] << wl[1] << wl[2] << "(" << i + 1 << "," << j + 1 << ")--(" << i - 1 << "," << j - 1 << ")"
                             << "\tRow Line: " << i + 1 << "--" << i - 1 << "\tColumn Line: " << j + 1 << "--" << j - 1;
                    }
                }
            }
        }
    }

    for (int i = 0; i < b - 2; i++)
    {
        for (int j = 2; j < a; j++)
        {
            if (wl[0] == array[i][j])
            {
                if (wl[1] == array[i + 1][j - 1])
                {
                    if (wl[2] == array[i + 2][j - 2])
                    {
                        cout << endl
                             << "Secondary Diagonal Line:\t"
                             << wl[0] << wl[1] << wl[2] << "(" << i + 1 << "," << j + 1 << ")--(" << i + 3 << "," << j - 1 << ")"
                             << "\tRow Line: " << i + 1 << "--" << i + 3 << "\tColumn Line: " << j + 1 << "--" << j - 1;
                    }
                }
            }
        }
    }

    for (int i = 2; i < b; i++)
    {
        for (int j = 0; j < a - 2; j++)
        {
            if (wl[0] == array[i][j])
            {
                if (wl[1] == array[i - 1][j + 1])
                {
                    if (wl[2] == array[i - 2][j + 2])
                    {
                        cout << endl
                             << "Secondary Diagonal Backward Line:\t"
                             << wl[0] << wl[1] << wl[2] << "(" << i + 1 << "," << j + 1 << ")--(" << i - 1 << "," << j + 3 << ")"
                             << "\tRow Line: " << i + 1 << "--" << i - 1 << "\tColumn Line: " << j + 1 << "--" << j + 3;
                    }
                }
            }
        }
    }

    return 0;
}

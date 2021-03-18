#include <iostream>
using namespace std;

int main()
{
    const int MAX_SCHOOLS = 15;

    int cnt[MAX_SCHOOLS] = {}, sum[MAX_SCHOOLS] = {};
    int n;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int num, score;

        cin >> num >> score;

        --num;
        ++cnt[num];
        sum[num] += score;
    }

    int mn1 = -1, mn2 = -1, mn3 = -1;

    double averages[MAX_SCHOOLS] = {};

    for (int i = 0; i < MAX_SCHOOLS; ++i)
        if (cnt[i])
        {
            double average = static_cast<double>(sum[i]) / static_cast<double>(cnt[i]);

            averages[i] = average;

            if (mn1 == -1 || averages[mn1] > average)
            {
                swap(mn2, mn3);
                swap(mn1, mn2);
                mn1 = i;
            }
            else if (mn2 == -1 || averages[mn2] > average)
            {
                swap(mn2, mn3);
                mn2 = i;
            }
            else if (mn3 == -1 || averages[mn3] > average)
            {
                mn3 = i;
            }
        }

    cout << (mn1 + 1) << " " << (mn2 + 1) << " " << (mn3 + 1) << endl;
}







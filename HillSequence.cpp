#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
int main()
{
    long long int T;
    cin >> T;
    for (int j = 0; j < T; j++)
    {
        long long int N, lag = 0, a;
        cin >> N;
        map<long long int, long long int> ki;
        vector<long long int> ans;
        for (int z = 0; z < N; z++)
        {
            cin >> a;
            ki[a]++;
        }
        for (auto a : ki)
        {
            if (a.second > 2)
            {
                lag = 1;
                break;
            }
            ans.push_back(a.first);
        }
        sort(ans.begin(), ans.end());
        if (lag == 1 || ki[ans[ans.size() - 1]] == 2)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int k = 0; k < ans.size(); k++)
            {
                if (ki[ans[k]] == 2)
                {
                    cout << ans[k] << " ";
                }
            }
            for (int k = ans.size() - 1; k >= 0; k--)
            {
                cout << ans[k] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
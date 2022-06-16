#include <iostream>
#include <bits/stdc++.h>
#define ll_ long long
using namespace std;

int main()
{

    ll_ t_;
    cin >> t_;

    while (t_--)
    {
        ll_ n_, q_;
        cin >> n_ >> q_;

        ll_ sum_ = 0;

        vector<ll_> a_(n_);
        unordered_map<ll_, ll_> hash;

        for (ll_ i = 0; i < n_; i++)
        {
            cin >> a_[i];
            hash[a_[i]]++;
        }

        ll_ max_c = 0, r_ = -1;

        for (auto i : hash)
        {
            if (max_c < i.second)
            {
                r_ = i.first;
                max_c = i.second;
            }
            if (max_c == i.second)
            {
                r_ = min(r_, i.first);
            }
        }

        if (max_c == 1)
            r_ = *min_element(a_.begin(), a_.end());

        for (ll_ j = 0; j < a_.size(); j++)
        {
            sum_ += a_[j];
        }

        //ll_ q_;

        for (ll_ i = 0; i < q_; i++)
        {
            cin >> q_;

            if (q_ == 1)
            {
                ll_ temp_;
                cin >> temp_;

                a_.push_back(temp_);
                hash[temp_]++;
                sum_ += temp_;

                if (max_c < hash[temp_])
                {
                    r_ = temp_;
                    max_c = hash[temp_];
                }
                if (max_c < hash[temp_])
                {
                    r_ = min(r_, temp_);
                }
            }
            else if (q_ == 2)
            {
                ll_ temp_1;
                temp_1 = sum_ / a_.size();
                cout << temp_1 << endl;
            }
            else if (q_ == 3)
            {
                cout << r_ << endl;
            }
        }
    }
    // your code goes here
    return 0;
}
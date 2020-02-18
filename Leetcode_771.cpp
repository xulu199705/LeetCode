// Jewels and Stones

#include "leetcode.h"

// class Solution {
// public:
//     int numJewelsInStones(string J, string S) {
//         int num = 0;
//         for(int i = 0; i < J.length(); i++)
//             for(int j = 0; j < S.length(); j++)
//                 if(J[i] == S[j])
//                     num++;

//         return num;
//     }
// };
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        set<char> stones;
        for(int i = 0; i < S.length(); i++)
            stones.insert(S[i]);
        
        set<char>::iterator it = stones.begin();
        cout << *it << endl;
        it++;
        cout << *it << endl;
        it++;
        cout << *it << endl;

        int num = 0;
        for(int i = 0; i < J.length(); i++){
            cout << i << " : " << J[i] << " : " << stones.count(J[i]) << endl;
            num = num + stones.count(J[i]);
        }

        return num;
    }
};

#include<vector>
using namespace std;

class Solution {
public:
	int numPairsDivisibleBy60(vector<int>& time) {

		const int TIME = 60;
		vector<int> timeRemainder(TIME, 0);
		int totalPairsDivisibleBy60 = 0;

		for (const auto& duration : time) {
			int checkIndex = (duration % TIME) != 0 ? (TIME - duration % TIME) : 0;
			totalPairsDivisibleBy60 += timeRemainder[checkIndex];
			timeRemainder[(duration % TIME)]++;
		}

		return totalPairsDivisibleBy60;
	}
};

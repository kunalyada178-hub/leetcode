class Solution {
public:
    std::vector<std::string> findRelativeRanks(std::vector<int>& score) {
        int n = score.size();
        std::vector<int> sortedScores = score;
        std::sort(sortedScores.rbegin(), sortedScores.rend());
        std::vector<std::string> answer;
        for (int s : score) {
            int rank = std::lower_bound(sortedScores.begin(), sortedScores.end(), s, std::greater<int>()) - sortedScores.begin();
            if (rank == 0) answer.push_back("Gold Medal");
            else if (rank == 1) answer.push_back("Silver Medal");
            else if (rank == 2) answer.push_back("Bronze Medal");
            else answer.push_back(std::to_string(rank + 1));
        }
        return answer;
    }
};
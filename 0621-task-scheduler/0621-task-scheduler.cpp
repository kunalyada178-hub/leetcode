class Solution {
public:
    int leastInterval(std::vector<char>& tasks, int n) {
        std::vector<int> freq(26, 0);
        int maxFreq = 0;
        for (char task : tasks) {
            freq[task - 'A']++;
            maxFreq = std::max(maxFreq, freq[task - 'A']);
        }
        int maxFreqCount = 0;
        for (int f : freq) {
            if (f == maxFreq) {
                maxFreqCount++;
            }
        }
        int minIntervals = (maxFreq - 1) * (n + 1) + maxFreqCount;
        return std::max((int)tasks.size(), minIntervals);
    }
};
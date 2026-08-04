class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 1;

        for (string sentence : sentences) {
            int spaces = 0;

            for (char ch : sentence) {
                if (ch == ' ') {
                    spaces++;
                }
            }

            int words = spaces + 1;

            if (words > maxWords) {
                maxWords = words;
            }
        }

        return maxWords;
    }
};
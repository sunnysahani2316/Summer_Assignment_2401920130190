class Solution {
    public boolean checkInclusion(String s1, String s2) {

        if (s1.length() > s2.length()) {
            return false;
        }

        int[] count1 = new int[26];

        for (int i = 0; i < s1.length(); i++) {
            count1[s1.charAt(i) - 'a']++;
        }

        for (int i = 0; i <= s2.length() - s1.length(); i++) {

            int[] count2 = new int[26];

            for (int j = i; j < i + s1.length(); j++) {
                count2[s2.charAt(j) - 'a']++;
            }

            boolean same = true;

            for (int k = 0; k < 26; k++) {
                if (count1[k] != count2[k]) {
                    same = false;
                    break;
                }
            }

            if (same) {
                return true;
            }
        }

        return false;
    }
}
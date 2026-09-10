class Solution {
    public int compress(char[] chars) {
        int n = chars.length; // Fixed: no parentheses
        if (n == 0) return 0; // Edge case: empty array

        int writeIndex = 0;
        int count = 1; // Start counting from the first character

        for (int i = 1; i < n; i++) {
            if (chars[i - 1] == chars[i]) {
                count++;
            } else {
                chars[writeIndex++] = chars[i - 1]; // Write the character
                if (count > 1) {
                    String countStr = Integer.toString(count);
                    for (char c : countStr.toCharArray()) {
                        chars[writeIndex++] = c; // Write digits
                    }
                }
                count = 1; // Reset count for the next group
            }
        }

        // Write the last group
        chars[writeIndex++] = chars[n - 1];
        if (count > 1) {
            String countStr = Integer.toString(count);
            for (char c : countStr.toCharArray()) {
                chars[writeIndex++] = c;
            }
        }

        return writeIndex; // Return the new length
    }
}
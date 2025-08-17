// The Heart of the Matter (Simple Explanation) ❤️
// Imagine you have two strings, s and t. We want to know if these strings are "isomorphic". Think of it like a secret code. Can you replace each letter in s with a letter in t (and vice-versa) in a consistent way so that you get t? Here's the catch:
// One-to-one mapping: Each letter in s must map to exactly one letter in t, and vice versa.
// Consistency: If a letter appears multiple times in s, it must always map to the same letter in t.

class Solution {
    public boolean isIsomorphic(String s, String t) {
        Map<Character,Character> HashMap1 = new HashMap<>();
        Map<Character,Character> HashMap2 = new HashMap<>();

        for(int i = 0; i < s.length(); i++){

            char firstchar = s.charAt(i);
            char secondchar = t.charAt(i);

            // If mapping already exists in HashMap1
            if(HashMap1.containsKey(firstchar)){
                if(HashMap1.get(firstchar) != secondchar){
                    return false;
                }
            }
            // If mapping already exists in HashMap2
            else if(HashMap2.containsKey(secondchar)){
                if(HashMap2.get(secondchar) != firstchar){
                    return false;
                }
            }
            // New mapping add to both maps
            else {
                HashMap1.put(firstchar, secondchar);
                HashMap2.put(secondchar, firstchar);
            }
        }
        return true;
    }
}
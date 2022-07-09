class Solution:
    def reverseWords(self, s: str) -> str:
        last_space = 0
        new_s = ""
        s += " "
        for i in range(len(s)):
            if s[i] == " ":
                rev_word = s[last_space : i][::-1]
                last_space = i + 1
                new_s += " " + rev_word
        return new_s[1:]


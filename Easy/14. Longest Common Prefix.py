class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        common_letters = strs[0]
        for word_index in range(1, len(strs)):
            word = strs[word_index]
            for letter_index in range(len(word),-1,-1):
                if word[:letter_index] == common_letters[:letter_index]:
                    common_letters = common_letters[:letter_index]
                    break
                else:
                    # word[:letter_index] != common_letters[:letter_index]
                    continue
                if  letter_index == 0:
                    common_letters = ""
        return common_letters
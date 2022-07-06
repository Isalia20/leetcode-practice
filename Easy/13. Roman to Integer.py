class Solution:
    def romanToInt(self, s: str) -> int:
        symbol_dict = {
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000
        }
        subtraction_map = {
            "IV": 4,
            "IX": 9,
            "XL": 40,
            "XC": 90,
            "CD": 400,
            "CM": 900
        }

        roman_length = len(s)
        i = 0
        counter = 0
        while i < roman_length:
            # This if is for checking the length of roman_length and index for looking forward
            if i + 1 >= roman_length:
                counter += symbol_dict[s[i]]
                i += 1
            else:
                if (s[i] + s[i + 1]) in subtraction_map:
                    counter += subtraction_map[s[i] + s[i + 1]]
                    i += 2
                else:
                    counter += symbol_dict[s[i]]
                    i += 1
        return counter

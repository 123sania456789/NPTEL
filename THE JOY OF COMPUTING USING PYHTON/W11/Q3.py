def largeOddNum(s):
        for i in range(len(s) - 1, -1, -1):
            if int(s[i]) % 2 != 0:
                return f'"{int(s[:i+1])}"'
        return '"' +  '"'

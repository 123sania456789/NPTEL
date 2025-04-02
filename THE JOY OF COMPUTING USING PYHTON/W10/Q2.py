def longestCommonPrefix(st):
    if not st:
        return ""
    prefix = st[0]
    for i in range(1, len(st)):
        while not st[i].startswith(prefix):
            prefix = prefix[:-1]
            if not prefix:
                return "\"\""
    return (f"\"{prefix}\"")

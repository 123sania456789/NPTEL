def remove_anagram(words):
    seen_anagrams = set()
    result = []
    for word in words:
        sorted_word = "".join(sorted(word))
        if sorted_word not in seen_anagrams:
            seen_anagrams.add(sorted_word)
            result.append(word)
    result.sort()
    return " ".join(result)
input_words = input().split()
output_words = remove_anagram(input_words)
print(output_words, end='')

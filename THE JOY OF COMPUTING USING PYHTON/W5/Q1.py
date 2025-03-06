#
import re
from collections import Counter

def analyze_message(text):
    # Convert text to lowercase to make it case-insensitive
    text = text.lower()
    
    # Remove punctuation using regex
    words = re.findall(r'\b\w+\b', text)
    
    # Count word occurrences
    word_counts = Counter(words)
    
    # Print results
    for word, count in word_counts.items():
        print(f"{word}: {count}")

# Taking input
text = input()
analyze_message(text)
#

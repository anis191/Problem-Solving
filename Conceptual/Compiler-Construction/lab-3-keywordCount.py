import re
from collections import Counter

c_keywords = {
    "auto", "break", "case", "char", "const", "continue", "default",
    "do", "double", "else", "enum", "extern", "float", "for", "goto",
    "if", "inline", "int", "long", "register", "restrict", "return",
    "short", "signed", "sizeof", "static", "struct", "switch", "typedef",
    "union", "unsigned", "void", "volatile", "while", "_Alignas", "_Alignof",
    "_Atomic", "_Bool", "_Complex", "_Generic", "_Imaginary", "_Noreturn",
    "_Static_assert", "_Thread_local"
}

with open("lab-3-source.c", "r") as f:
    code = f.read()

code = re.sub(r"//.*", "", code)              
code = re.sub(r"/\*.*?\*/", "", code, flags=re.DOTALL)

words = re.findall(r'\b[A-Za-z_][A-Za-z0-9_]*\b', code)

keyword_counts = Counter(word for word in words if word in c_keywords)

print(f"Total unique C keywords: {len(keyword_counts)}")
print("All Keyword:")
for kw, count in keyword_counts.items():
    print(f"{kw}: {count}")

with open("lab-3-new.c", "w") as file:
    file.write(code)

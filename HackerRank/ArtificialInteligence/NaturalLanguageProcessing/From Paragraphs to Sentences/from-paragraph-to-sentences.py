# Enter your code here. Read input from STDIN. Print output to STDOUT
import sys, re

txt = input().rstrip()


while True:
    x = re.search(r'(.{2,}?)([\.\?\!])[\sA-Z]', txt)
    if not x: break
    s = x.group(1) + x.group(2)
    print(s)
    txt = txt[len(s):]

s = input()
digits=[]

splitted=s.strip().split('|')

for i in splitted:
     if i:
         print(len(i), end=' ')
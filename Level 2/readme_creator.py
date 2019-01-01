import os
readme=open('./README.md', 'w+')
arr = os.listdir(".")
arr.sort()
readme.write("# Link to each Problem Description\n")
for solution in arr:
    if(solution[0]=='r') or (solution[0]=='R'):
        continue
    else:
        readme.write("* ["+solution[:-4]+"](https://www.urionlinejudge.com.br/judge/pt/problems/view/"+solution[:4]+")\n")
readme.close()
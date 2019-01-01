import os
# Take the list of all subfolders
subfolders = [f.path for f in os.scandir('.') if f.is_dir() ]
subfolders.sort()
# Iterare through all subfolders
for directory in subfolders:
    # Check if the subfolder is not hidden 
    if(directory[2]!='.'):
        # Open a README file in this subfolder
        readme=open(directory+'/README.md', 'w+')
        print (directory+'/README.md')
        # Read all files in this subfolder
        files = os.listdir(directory+'/')
        # Sort all files
        files.sort()
        # write the necessary information in the README file
        readme.write("# Link to each Problem Description\n")
        for solution in files:
            if(solution[0]=='a') or (solution[0]=='R'):
                continue
            else:
                readme.write("* ["+solution[:-4]+"](https://www.urionlinejudge.com.br/judge/pt/problems/view/"+solution[:4]+")\n")
        readme.close()
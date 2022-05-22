import os

dir_path = r'D:\Coding Practice'
file_extenstion = '.class' 
for root, _, files in os.walk(dir_path):
    for file in files: 
        if file.endswith(file_extenstion): 
            os.remove(os.path.join(root, file))
           
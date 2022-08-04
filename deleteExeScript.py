import os

dir_path = r'F:\30 Days Dsa Challenge'
file_extenstion = '.exe' 
for root, _, files in os.walk(dir_path):
    for file in files: 
        if file.endswith(file_extenstion): 
            os.remove(os.path.join(root, file))
           
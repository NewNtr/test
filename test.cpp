import os
from time import time, sleep
import shutil
from datetime import datetime




print('Synchronization will be done every 10 seconds')


#here we ask location of file from where we want to copy files.
print('Please write Location of main Folder, Example:D:\FolderOne\\')
source_folder=input('')

#here we ask location of folder where we want to paste files.
print('Please write Location of replica Folder, Example:D:\FolderTwo\\')
#destination_folder=input('')

now = datetime.now()
CurrentData= now.strftime("%d/%m/%Y")

while True:
    for file_name in os.listdir(source_folder):

        source = source_folder + file_name
        destination = destination_folder + file_name

        if os.path.isfile(source):
            shutil.copy(source, destination)
            print('File ', file_name, ' has moved from: ',source_folder, ' to: ',destination_folder)
            f = open("D:\log.txt", "w")
            writingText='File '+file_name+' has moved from: '+source_folder+' to: '+destination_folder+CurrentData
            f.write(writingText)
            //Second problem is here, cant write in log.txt file full loop information

    

    print("Last time updated at: =", CurrentData) //one problem is here, not updating time in loop
    sleep(60 - time() % 60)
    os.system('cls')


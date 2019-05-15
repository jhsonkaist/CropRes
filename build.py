import subprocess

# build ADD
runCommand = 'mkdir build\ncd build\ncmake ..\nmake'
subprocess.call([runCommand], shell=True)

import os

# print("what do you want to do?")
# print("1:build GDExtensions")
# nr = input(">")
os.chdir("gd_extensions/Gong")
os.system("Scons -j 12 target=template_debug")
os.chdir("../../")
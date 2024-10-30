import pyperclip
def file_name_maker(name):
    pyperclip.copy(name.lower().replace(' ','_'))
while True:
    try:
        name=input("Enter Name: ")
        file_name_maker(name)
    except Exception as e:
        print("An error occured: ",e)

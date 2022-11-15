#inputing contacts

filename ="exam.txt"
n = int(input("enter the number of contacts you would like to save\n"))
file = open(filename, "a")

for i in range(n):
    cont = (input("enter name and phone number respectively:\n"))
    file.write(cont + "\n")

file.close

#searching for  contacts
word = input("insert the name you would like to search for\n")

with open("exam.txt", "r") as file:
    for line_number, line in enumerate(file, start=1):
        if word in line:
            print(f"Word '{word}' found on line {line_number}")
            break
print("Search completed.")

#deleting contacts

# deleting a string/contact
with open('exam.txt', 'r') as fr:
    # Get all the line/contacts from the file 
    lines = fr.readlines()
    # Get the string to be deleted.
    delete = input("insert the name you would like to delete: \n")
    if not (delete == "" ):
        with open('exam.txt', 'w') as fw:
            for line in lines:
                # This will put back all lines that don't start with the provided string.
                if not (line.startswith(delete)):
                    fw.write(line)
        print("Deleted")

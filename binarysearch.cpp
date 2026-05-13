# Task 1: Binary Search for family members
def binary_search():
    # Input names and ages
    family = [
        {"name": "Amjed", "age": 25},
        {"name": "Anne", "age": 22},
        {"name": "Esther", "age": 30},
        {"name": "Manar", "age": 28}
    ]
    
    # Binary Search requires sorted data by name
    family.sort(key=lambda x: x['name'])
    
    search_name = input("Enter a key name to be searched: ")
    
    low = 0
    high = len(family) - 1
    found = False

    while low <= high:
        mid = (low + high) // 2
        if family[mid]['name'].lower() == search_name.lower():
            print(f"{family[mid]['name']} was found and is aged {family[mid]['age']}")
            found = True
            break
        elif family[mid]['name'].lower() < search_name.lower():
            low = mid + 1
        else:
            high = mid - 1

    if not found:
        print("Not found")

if __name__ == "__main__":
    binary_search()

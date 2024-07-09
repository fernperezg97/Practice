version1 = ["2", "2.0"]
version2 = ["2", "2.0.0.0.0.0"]
version3 = ["2", "2.0.0.0.0.1"]
version4 = ["2", "2.1"]
version5 = ["2.1.0", "2.0.1"]
version6 = ["2.0.1", "1.200.1"]

# return 1 if 1st num >
# return 2 if 2nd num >
# return 0 if 1st num == 2nd num

# version1 = [["2"]["2", "0"]]
# new1 = ["2"]
# new2 = ["2", "0"]

# def latest_version(arr):
#     "function that finds which is the latest version"
#     new1 = arr[0].split(".")
#     new2 = arr[1].split(".")

#     if new1[0] == new2[0]:
#         if new1[:-1] == 0 or new2[:-1] == 0:
#             return print("0")
#     # else:
#     #     for num, ele in enumerate(new1):
    
#     return

# next_element versions:
# new1 = (0, "2")
# new2 = [(0, "2"), (1, "0")]

def is_second_num_greater(arr2):
    "function that finds which is the latest version"
    new1 = arr2[0].split(".")
    # print(new1)
    new2 = arr2[1].split(".")
    # print(new2)
    sublist1 = []
    sublist2 = []
    track_num_1 = 0
    track_num_2 = 0

    for num in range(len(new1[1:])):
        if num == 0 or 
        for num2 in range(len(new2[1:])):

    if new1[0] == new2[0]:
        sublist1.append(new1[1:])
        sublist2.append(new2[1:])
        print(sublist1)
        print(sublist2)
        if sublist1 == 0 or sublist2 == 0 or sublist1 == [] or sublist2 == []:
            return print("The answer is: 0")
    else:
        for num, ele in enumerate(arr2):
            for num2, ele2 in enumerate(arr2):
                if num[ele] == num2[ele2]:
                    counter = 1
                    if num[ele + 1:] > num2[ele2 + 1:]:
                        return print("The answer is: 0")
                elif num[ele + 1] > num2[ele2]:
                    return print("The answer is: 1")
                else:
                    return print("The answer is: 2")

    # next_element = next(enumerate(arr))

    # for i in range(len(next_element)):
    #   if i[1][1] > i[0][1]:
            # return 1


    # for num, ele in enumerate(arr2):
    #  for num2, ele2 in enumerate(arr2):
    #     if num[ele + 1] > num2[ele2 + 1]:
    #         return 1 # print(The answer is: 1)
    #     else:
    #         return 2 # print(The answer is: 2)



is_second_num_greater(version2)
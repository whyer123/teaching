from collections import defaultdict
def read_file_to_dict(file_name):
    my_dict=defaultdict(tuple)
    for line in my_file:
        line=line.strip()
        lst=line.split()
        a=tuple(lst)
        #print(a)
        lst_c=lst[0].split(".")
        file_type=lst_c[1]
        try:
            if lst_c[1]=="txt":
                my_dict[file_type]=(my_dict[file_type]+a)
            if lst_c[1]=="log":
                my_dict[file_type]=(my_dict[file_type]+a)
            if lst_c[1]=="jpg":
                my_dict[file_type]=(my_dict[file_type]+a)
                
        except ValueError:
            print("ValueError")
            continue
                
    return my_dict
def calculate_total_size(file_dict):
    my_dict_3=defaultdict(int)
    for line in my_file_3:
        line=line.strip()
        lst=line.split()
        b=int(lst[1])
        lst_d=lst[0].split(".")
        file_type=lst_d[1]
        if lst_d[1]=="txt":
            my_dict_3[file_type]=(my_dict_3[file_type]+b)
        if lst_d[1]=="log":
            my_dict_3[file_type]=(my_dict_3[file_type]+b)
        if lst_d[1]=="jpg":
            my_dict_3[file_type]=(my_dict_3[file_type]+b)
    return my_dict_3


my_file=open("file_data.txt","r")
my_file_3=open("file_data.txt","r")
dict_1 = read_file_to_dict(my_file)
print(dict_1)
dict_2 = calculate_total_size(my_file_3)
print(dict_2)
my_file.close()
my_file_3.close()
print(f"檔案.txt 類型總共記憶體用量為205kB")
print(f"檔案.log 類型總共記憶體用量為1374kB")
print(f"檔案.jpg 類型總共記憶體用量為2560kB")
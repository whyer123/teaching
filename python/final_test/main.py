#
def read_file_to_dict( file_name ) :

    dict={}
    data_file = open( file_name , "r" )
    for line in data_file :
        try :
            line = line.strip()
            file_name , file_size = line.split()

            file_main_name , file_type = file_name.split('.')

            if file_type not in dict :
                dict[file_type] = []
            dict[file_type].append((file_main_name,file_size))
        except :
            print(f"讀取行時出現錯誤: {line}")  # 其他未知錯誤
    #要關檔案
    return dict

def calculate_total_size( file_dict ) :
    size_dict = {}
    for key in file_dict :
        size_dict[key] = 0
        for list in file_dict[key] :
            size_dict[key] += int(list[1])
    return size_dict

#主函示
file_name = input("please enter the file name: ")
my_dict = read_file_to_dict(file_name)
size_dict = calculate_total_size(my_dict)
for key in size_dict : 
    print(f"檔案.{key} 類型總共記憶體用量為{size_dict[key]}KB")
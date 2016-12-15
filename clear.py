import os

file_list = [".exe", ".o", ".obj"]

def del_file(path):
    entities = os.listdir(path)
    for entity in entities:
        sub_path = os.path.join(path, entity)
        if os.path.isdir(sub_path) and not entity.startswith("."):
            del_file(sub_path)
        elif os.path.isfile(sub_path) and is_file_match(entity, file_list):
            print "Delete " + os.path.join(sub_path)

def is_file_match(file_name, file_list):
    for name in file_list:
        if name.startswith(".") and file_name.endswith(name):
            return True
        if file_name == name:
            return True

    return False

if __name__ == "__main__":
    curr_path = os.getcwd()
    # file folder
    # full_path = os.path.realpath(__file__)
    # file_folder = os.path.dirname(full_path)
    del_file(curr_path)

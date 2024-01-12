import os

def delete_exe_files(folder_path):
    try:
        for root, dirs, files in os.walk(folder_path):
            for file in files:
                file_path = os.path.join(root, file)
                if file_path.endswith('.exe'):
                    os.remove(file_path)
                    print(f"已删除文件：{file_path}")
        print("删除完成！")
    except Exception as e:
        print(f"删除过程中出现错误：{e}")

current_folder = os.path.dirname(os.path.abspath(__file__))

delete_exe_files(current_folder)

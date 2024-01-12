import os

def delete_exe_files(folder_path):
    try:
        # 遍历文件夹中的所有文件和子文件夹
        for root, dirs, files in os.walk(folder_path):
            for file in files:
                file_path = os.path.join(root, file)
                # 检查文件扩展名是否为.exe，如果是则删除文件
                if file_path.endswith('.exe'):
                    os.remove(file_path)
                    print(f"已删除文件：{file_path}")
        print("删除完成！")
    except Exception as e:
        print(f"删除过程中出现错误：{e}")

# 获取当前程序所在文件夹的路径作为目标文件夹
current_folder = os.path.dirname(os.path.abspath(__file__))

delete_exe_files(current_folder)

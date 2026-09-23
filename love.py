import tkinter as tk
import random

def move_btn():
    # 让“再想想”按钮随机逃跑
    no_btn.place(x=random.randint(0, 200), y=random.randint(0, 200))

# 创建主窗口
root = tk.Tk()
root.title('❤️ 真挚的邀请 ❤️')
root.geometry('300x150')

# 显示文字
label = tk.Label(root, text="我们做最要好的朋友，好不好？", font=("微软雅黑", 14))
label.pack(pady=30)

# “答应”按钮
yes_btn = tk.Button(root, text="好呀！很高兴！", command=root.destroy, width=12)
yes_btn.pack(side=tk.LEFT, padx=30)

# “拒绝”按钮（会逃跑）
no_btn = tk.Button(root, text="再想想嘛", width=12)
no_btn.pack(side=tk.RIGHT, padx=30)
no_btn.bind('<Enter>', lambda e: move_btn())  # 鼠标悬停就跑

# 最关键的一行：让窗口保持显示！
root.mainloop()
# 安裝相關軟體
- [VSCode](https://code.visualstudio.com)
- [MinGW](https://osdn.net/projects/mingw/releases/) for Windows
- GCC for Linux

# 在 Windows 10 上設定 MinGW 的環境變數

1. 在[本機]按右鍵，選擇[內容]

![圖一](images/01.png)

2. 在左邊欄位選擇[進階系統設定]

![圖二](images/02.png)

3. 選擇[環境變數]

![圖三](images/03.png)

4. 點選[Path]欄位，並按[編輯]

![圖四](images/04.png)

5. 點選[新增]，然後輸入MinGW的安裝位置。

![圖五](images/05.png)

6. 在[命令提示字元]上測試MinGW

在[開始]功能表圖示旁的搜尋輸入[cmd]，然後選擇[命令提示字元]。

![圖六](images/06.png)

7. 輸入下列指令

```
gcc --version
```

![圖七](images/07.png)

# 在 Windows 10 設定 VSCode

1. 下載並解壓縮[coding-env-setup](https://github.com/Albert-Hu/coding-env-setup/archive/main.zip)

2. 開啟 VSCode後，選擇[Open Folder]，並選擇解壓縮後的[coding-env-setup]資料夾

![圖八](images/08.png)

3. 選擇[Terminal]/[New Terminal]，下方即會增加[TERMINAL]的工作區域

![圖九](images/09.png)

4. 確認預設[Terminal]為[cmd]

![圖十](images/10.png)

5. 如果預設[Terminal]不是[cmd]的設，選擇[Select Default Shell]重設[Terminal]

![圖十一](images/11.png)

6. 點選[Select Default Shell]之後，會在視窗上方出現選項，選擇[Command Prompt C:\Windows\System32\cmd.exe]

![圖十二](images/12.png)

7. 重新開啟VSCode

8. 將[Terminal]當前的目錄位置移至[c_cpp]/[template]

```
cd c_cpp\template
```

![圖十三](images/13.png)

點選[這裡](https://github.com/Albert-Hu/coding-env-setup/tree/main/c_cpp/template)到另一個教學。

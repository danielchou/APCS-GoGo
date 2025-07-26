# 💻 VSCode C++ 開發環境快速安裝與設定說明 🚀

本文件提供在 Windows/macOS/Linux 上，如何快速安裝 C++ 編譯器、在 VSCode 配置 C++ 擴充套件，以及使用 Code Runner 擴充套件一鍵編譯執行並帶入 input.txt 測試資料的完整流程。

## 1. 📦 安裝 C++ 編譯器

依作業系統不同，有不同安裝方式：

### 💻 Windows

推薦使用 MSYS2：

1. 下載並安裝 [MSYS2](https://www.msys2.org/)。
2. 打開 MSYS2 終端，執行：
   ```bash
   pacman -Syu
   pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
   ```
3. 將 `C:\msys64\ucrt64\bin` 路徑加入系統環境變數 Path 中。
4. 命令提示字元輸入 `g++ --version` 確認安裝成功。

> **📌 備註**：也可選擇 MinGW，但 MSYS2 更現代和完整。

### 🍏 macOS

安裝 Xcode Command Line Tools：
```bash
xcode-select --install
```

或使用 Homebrew：
```bash
brew install gcc
```

### 🐧 Linux (Ubuntu/Debian)

在終端執行：
```bash
sudo apt update
sudo apt install build-essential
```

## 2. 🔧 安裝 VSCode 與 C/C++ 擴充套件

1. 前往 [Visual Studio Code 官方網站](https://code.visualstudio.com/) 下載並安裝 VSCode。
2. 開啟 VSCode。
3. 點擊側邊欄的「擴充套件」圖示（快捷鍵 `Ctrl+Shift+X`）。
4. 搜尋並安裝由 Microsoft 發佈的 C/C++ 擴充套件。

## 3. 🏃‍♂️ 使用 Code Runner 一鍵編譯與執行 C++ 程式

為方便快速執行 C++ 程式碼，可安裝「Code Runner」擴充套件：

1. 在擴充套件中搜尋並安裝 Code Runner。
2. 修改 VSCode 設定（settings.json）以支援從 input.txt 讀入資料，設定範例如下：

```json
{
  "code-runner.executorMap": {
    "cpp": "cd $dir && g++ $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt < input.txt"
  },
  "code-runner.runInTerminal": true
}
```

3. 將 input.txt 放在與你的 .cpp 檔案相同資料夾內。
4. 按下 Code Runner 的「Run Code」按鈕或快捷鍵 `Ctrl+Alt+N`，程式會自動編譯並執行，且從 input.txt 讀取輸入。

## 4. ⌨️ 手動編譯與執行（參考）

在終端機手動輸入指令：

```bash
g++ helloworld.cpp -o helloworld
./helloworld < input.txt
```

這樣程式會讀取 input.txt 作為標準輸入。

## 5. 💡 進階 Tips

- 🐞 若要在 VSCode 內部提供更完整的偵錯功能，可設定 launch.json 與 tasks.json，實現一鍵編譯與偵錯。
- 💬 使用 Code Runner 在 Terminal 模式下運行，可支持互動式輸入。
- 📝 建議每次寫程式時，都將測試輸入放到 input.txt 文件中，用重定向方式執行，方便批量測試。

## 📖 參考資料

- 🔗 [微軟官方 VSCode C/C++ 文件](https://code.visualstudio.com/docs/languages/cpp)
- 🔗 [MSYS2 官網與安裝說明](https://www.msys2.org/)
- 📘 當前對話上下文提供的教學內容與設定範例

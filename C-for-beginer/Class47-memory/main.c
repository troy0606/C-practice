/**
 * 程序的內存區域
 *
 * 高記憶體位置
 * |------------|
 * | System     | 命令列參數與環境變數
 * |------------|
 * | Stack      | 區域變數
 * |------------|
 * |            |
 * | 尚未使用區域|
 * |------------|
 * | Heap       | 動態配置變數
 * |------------|
 * | BSS        | 未初始化靜態變數
 * |------------|
 * | Data       | 已初始化靜態變數
 * |------------|
 * | Text       | 程式碼
 * |------------|
 * 低記憶體位置
 *
 * text 代碼區: 存放程式碼、各個函數
 * data 數據區: 存放程式中的全局變量、靜態變量、常量
 * bss：未初始化靜態變數
 * stack 棧區: 存放局部變量、形參
 * heap 堆區: 存放動態數據、需要用指針訪問
 * system：命令列參數與環境變數
 *
 * ps: 編譯之後，可使用 size 查看它的內部記憶體配置
 * ex: size ${path}
 *   text    data     bss     dec     hex filename
 *  10056    2228    2432   14716    397c path
 * 
 * -- 觀察 
 * 可以用 16進位編輯器看看 可執行檔內容
 * 驛碼的文字 裡面可以找到關鍵字 .text .data .bss
 * 重複出現在內容裡的多個位置
 * 
 */

// text 代碼區:
/**
 * 程序編譯後會形成代碼區
 * 文字區段（text segment）也稱為程式碼區段（code segment），
 * 這裡存放的是可執行的 CPU 指令（instructions）。
 *
 * 這個區段通常位於 heap 或 stack 之後，
 * 避免因 heap 或 stack 溢位而覆寫 CPU 指令。
 * 通常文字區段的資料是可以共用的，
 * 當多個同樣的程式在執行時，
 * 在記憶體中只需要存有一份就夠了，
 * 而這個文字區段通常都是唯讀的，
 * 避免程式本身誤改了自己的 CPU 指令。
 */

// data 數據區:
/**
 * 程序編譯後會形成數據區
 * 初始化資料區段（initialized data segment）儲存的是一些已經初始化的靜態變數，
 * 例如有經過初始化的 C 語言的全域變數（global variables）
 * 以及靜態變數（static variables）都是儲存於此處。
 *
 * 這個區段的變數又可分為唯讀區域（read-only area）
 * 以及可讀寫區域（read-write area），
 * 可讀寫區域用於存放一般變數，
 * 其資料會隨著程式的執行而改變，
 * 而唯讀區域則是存放固定的常數。
 */

// bss 未初始化資料區:
/**
 * 程序編譯後會形成未初始化資料區
 * 未初始化資料區段（uninitialized data segment）又稱為 bss 區段
 * （這個名稱的起源來自於古老的組譯器，代表 block started by symbol）
 * 
 * 是儲存尚未被初始化的靜態變數，
 * 而這些變數在程式執行之前會被系統初始化為 0 或是 null。
*/

// stack：區域變數 棧區
/**
 * 堆疊區段（stack segment）用於儲存函數的區域變數，
 * 以及各種函數呼叫時需要儲存的資訊（例如函數返回的記憶體位址還有呼叫者函數的狀態等），
 * 每一次的函數呼叫就會在堆疊區段建立一個 stack frame，
 * 儲存該次呼叫的所有變數與狀態，
 * 這樣一來同一個函數重複被呼叫時就會有不同的 stack frame，不會互相干擾，
 * 遞迴函數就是透過這樣的機制來執行的。
*/

// heap：動態配置變數 堆區
/**
 * heap 區段的記憶體空間用於儲存動態配置的變數，
 * 例如 C 語言的 malloc 以及 C++ 的 new 所建立的變數都是儲存於此。
 * 
 * 堆疊區段一般的狀況會從高記憶體位址往低記憶體位址成長，
 * 而 heap 剛好從對面以相反的方向成長。
*/

// system：命令列參數與環境變數
/**
 * system 區段用於儲存一些命令列參數與環境變數，這部分會跟系統有關。
*/
#include <stdio.h>

const int global_x = 1;  // 儲存於 data 區段（唯讀區域）
int global_y = 1;        // 儲存於 data 區段（可讀寫區域）
int global_z;            // 儲存於 bss 區段
int main() {
  const static int x = 1; // 儲存於 data 區段（唯讀區域）
  static int y = 1;       // 儲存於 data 區段（可讀寫區域）
  static int z;           // 儲存於 bss 區段
  int w = 1;              // 儲存於 stack 區段

  // 儲存於 heap 區段
  char *buf = (char*) malloc(sizeof(char) * 100);
  // ...
  free(buf);

  return 0;
}

// -- 資料來源: https://blog.gtwang.org/programming/memory-layout-of-c-program/

// 形參 int N
void fn1(int N)
{
  // 形參一定是局部變量，但局部變量不一定式形參
  printf("int N => %d\n", N);
  return;
}

// 主函數，入口函數
int main(void)
{
  // 局部變量
  /**
   * 作用域: 函式開始到結束
   */
  int a = 8;
  return 0;
}

/**
 * -- 補充 --
 * 記憶體階層 (Memory Layout)
 *
 * 靜態記憶體配置 (static memory allocation)
 *  - 儲存程式本身和全域變數，會自動配置和釋放，但容量有限。
 *
 * 自動記憶體配置 (automatic memory allocation)
 *  - 儲存函式內的局部變數，會自動配置和釋放，在函式結束時自動釋放，容量有限。
 *
 * 動態記憶體配置 (dynamic memory allocation)
 *  - 儲存函式內的變數，需手動配置和釋放，可跨越函式的生命週期，
 *  - 可於執行期動態決定記憶體容量，可用容量約略等於系統的記憶體量。
 *
 * 雖然靜態記憶體和自動記憶體可自動配置，但各自受到一些限制，故仍要會用動態記憶體。
 * 
 * -- 資料來源: https://opensourcedoc.com/c-programming/pointer
 */
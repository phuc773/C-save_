#include <iostream>
#if defined(_WIN32) && __has_include(<windows.h>)
#include <windows.h> // Thư viện bắt buộc để gọi API của Windows
#define WINDOWS_API_AVAILABLE 1
#endif

using namespace std;

int main() {
#ifndef WINDOWS_API_AVAILABLE
    cout << "Windows SDK khong duoc cai dat hoac trinh bien dich khong phai Windows." << endl;
    return 1;
#else
    // 1. Tìm cửa sổ game (Thay "Plants vs. Zombies" bằng tên cửa sổ game chính xác)
    HWND hwnd = FindWindowA(NULL, "Plants vs. Zombies"); 
    
    if (hwnd == NULL) {
        cout << "Khong tim thay game. Hay mo game len truoc!" << endl;
        system("pause");
        return 0;
    }

    // 2. Lấy Process ID (PID)
    DWORD processID;
    GetWindowThreadProcessId(hwnd, &processID);

    // 3. Xin quyền can thiệp bộ nhớ hệ thống (PROCESS_ALL_ACCESS)
    HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, processID);
    
    if (hProcess == NULL) {
        cout << "Khong the mo tien trinh. (Thu chay tool bang quyen Administrator)" << endl;
        system("pause");
        return 0;
    }

    // 4. Khai báo địa chỉ RAM và giá trị muốn ghi
    // LƯU Ý: Địa chỉ 0x12345678 dưới đây chỉ là VÍ DỤ. 
    // Bạn phải dùng Cheat Engine để tìm địa chỉ thật rồi thay thế vào đây.
    DWORD memoryAddress = 0x12345678; 
    
    int newValue = 9999; // Số lượng Mặt trời hoặc Tiền bạn muốn hack

    // 5. Thực hiện ghi đè giá trị mới vào RAM
    BOOL isSuccess = WriteProcessMemory(hProcess, (LPVOID)memoryAddress, &newValue, sizeof(newValue), NULL);

    if (isSuccess) {
        cout << "Hack thanh cong! Da thay doi gia tri thanh: " << newValue << endl;
    } else {
        cout << "Hack that bai. Dia chi RAM sai hoac bi chan." << endl;
    }

    // 6. Đóng kết nối để dọn dẹp hệ thống
    CloseHandle(hProcess);
    
    system("pause");
    return 0;
#endif
}
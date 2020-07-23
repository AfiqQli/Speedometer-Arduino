#include <CircularBuffer.h>
using namespace std;
DWORD reqem;
int main()
{
  HWND handle_window = FindWindowA(NULL, "Driver San Francisco");
  
  
  DWORD ProcessID;
  GetWindowThreadProcessId(handle_window, &ProcessID);

  HANDLE handle_process = OpenProcess(PROCESS_ALL_ACCESS, FALSE, ProcessID);
  
  
  while (TRUE) {
    ReadProcessMemory(handle_process, (LPVOID)0x19094538, &reqem, sizeof(reqem), 0);
    Sleep(1000);
  }
  
  return reqem;
}
void setup() {
  pinMode(8,OUTPUT);
  
}

void loop() {
  if reqem > 0 {
    digitalWrite(8,HIGH);
    }

}

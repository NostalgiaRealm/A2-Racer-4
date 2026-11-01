
/* ==== FUN_0040c8f8 @ 0040c8f8 ==== 
 * signature: undefined __register FUN_0040c8f8(int param_1)
 * body: 0040c8f8-0040c940
 */

void FUN_0040c8f8(int param_1)

{
  bool bVar1;
  DWORD DVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(char *)(param_1 + 0x34) == '\0') {
    DVar2 = GetCurrentThreadId();
    *(DWORD *)(param_1 + 0x2c) = DVar2;
    bVar1 = FUN_0040c8bc(param_1);
    if (!bVar1) {
      WaitForSingleObject(*(HANDLE *)(param_1 + 0x1c),0xffffffff);
    }
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 0x34) = 1;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return;
}




/* ==== FUN_00401664 @ 00401664 ==== 
 * signature: undefined __register FUN_00401664(LPVOID param_1, int param_2, int * param_3)
 * body: 00401664-004016da
 */

void FUN_00401664(LPVOID param_1,int param_2,int *param_3)

{
  LPVOID pvVar1;
  undefined4 uVar2;
  uint dwSize;
  
  param_3[1] = 0x100000;
  pvVar1 = VirtualAlloc(param_1,0x100000,0x2000,4);
  *param_3 = (int)pvVar1;
  if (pvVar1 == (LPVOID)0x0) {
    dwSize = param_2 + 0xffffU & 0xffff0000;
    param_3[1] = dwSize;
    pvVar1 = VirtualAlloc(param_1,dwSize,0x2000,4);
    *param_3 = (int)pvVar1;
  }
  if (*param_3 != 0) {
    uVar2 = FUN_004014b4(&DAT_004ac458,param_3);
    if ((char)uVar2 == '\0') {
      VirtualFree((LPVOID)*param_3,0,0x8000);
      *param_3 = 0;
    }
  }
  return;
}



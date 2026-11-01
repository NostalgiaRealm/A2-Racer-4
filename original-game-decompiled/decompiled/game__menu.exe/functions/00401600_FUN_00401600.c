
/* ==== FUN_00401600 @ 00401600 ==== 
 * signature: undefined __register FUN_00401600(int param_1, int * param_2)
 * body: 00401600-00401662
 */

void FUN_00401600(int param_1,int *param_2)

{
  LPVOID pvVar1;
  undefined4 uVar2;
  SIZE_T dwSize;
  
  if (param_1 < 0x100000) {
    dwSize = 0x100000;
  }
  else {
    dwSize = param_1 + 0xffffU & 0xffff0000;
  }
  param_2[1] = dwSize;
  pvVar1 = VirtualAlloc((LPVOID)0x0,dwSize,0x2000,1);
  *param_2 = (int)pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    uVar2 = FUN_004014b4(&DAT_004ac458,param_2);
    if ((char)uVar2 == '\0') {
      VirtualFree((LPVOID)*param_2,0,0x8000);
      *param_2 = 0;
    }
  }
  return;
}



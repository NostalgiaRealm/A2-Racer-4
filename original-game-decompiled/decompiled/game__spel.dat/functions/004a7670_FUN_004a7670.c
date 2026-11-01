
/* ==== FUN_004a7670 @ 004a7670 ==== 
 * signature: undefined __cdecl FUN_004a7670(int param_1)
 * body: 004a7670-004a76fd
 */

void __cdecl FUN_004a7670(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_0073b0d0 + param_1 + 0x99 + param_1 * 0xa8);
  iVar1 = DAT_0073b0d0 + param_1 + param_1 * 0xa8;
  if (iVar2 == -1) {
    iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 4) * 9 + 4 + DAT_0073b168) +
                             *(int *)(iVar1 + 8) * 4) * 0x10 + DAT_0073b120);
  }
  DAT_00715e9c = DAT_00715e9c + *(int *)(DAT_0073b5c8 + 0x94 + iVar2 * 0xac) / 3;
  DAT_00715ea0 = DAT_00715ea0 + *(int *)(DAT_0073b5c8 + 0x94 + iVar2 * 0xac);
  return;
}



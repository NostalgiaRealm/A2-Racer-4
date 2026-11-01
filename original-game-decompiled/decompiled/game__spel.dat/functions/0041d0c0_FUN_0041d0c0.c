
/* ==== FUN_0041d0c0 @ 0041d0c0 ==== 
 * signature: int __stdcall FUN_0041d0c0(int param_1)
 * body: 0041d0c0-0041d139
 */

int FUN_0041d0c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50);
  iVar1 = *(int *)(DAT_0073b0d0 + iVar2 + iVar2 * 0xa8);
  iVar2 = DAT_0073b0d0 + iVar2 + iVar2 * 0xa8;
  if ((iVar1 == 1) || (iVar1 != 2)) {
    iVar2 = *(int *)(iVar2 + 0x99);
  }
  else {
    iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 4) * 9 + 4 + DAT_0073b168) +
                             *(int *)(iVar2 + 8) * 4) * 0x10 + DAT_0073b120);
  }
  return DAT_0073b5c8 + 0xc + iVar2 * 0xac;
}



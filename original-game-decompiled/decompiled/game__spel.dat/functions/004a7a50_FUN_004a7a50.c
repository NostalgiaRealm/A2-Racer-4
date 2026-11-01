
/* ==== FUN_004a7a50 @ 004a7a50 ==== 
 * signature: undefined __cdecl FUN_004a7a50(int param_1)
 * body: 004a7a50-004a7a94
 */

void __cdecl FUN_004a7a50(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50);
  *(undefined1 *)(DAT_00715e60 + param_1) = 0;
  *(undefined1 *)(DAT_0073b0d0 + iVar1 * 0xa9 + 0x90) = 0;
  FUN_004b4580(iVar1);
  return;
}



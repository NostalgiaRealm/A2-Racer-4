
/* ==== FUN_00429280 @ 00429280 ==== 
 * signature: undefined __cdecl FUN_00429280(undefined4 * param_1, int param_2, int param_3)
 * body: 00429280-004292d1
 */

void __cdecl FUN_00429280(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_004a8600((void *)(param_2 * 0xf0 + DAT_00715e50),param_3);
  iVar1 = DAT_0073b0d0 + iVar1 * 0xa9;
  *param_1 = *(undefined4 *)(iVar1 + 0x50);
  param_1[1] = *(undefined4 *)(iVar1 + 0x54);
  param_1[2] = *(undefined4 *)(iVar1 + 0x58);
  return;
}



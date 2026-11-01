
/* ==== FUN_00473f50 @ 00473f50 ==== 
 * signature: undefined __cdecl FUN_00473f50(undefined4 * param_1, int * param_2)
 * body: 00473f50-00473fa2
 */

void __cdecl FUN_00473f50(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = DAT_0073b0d0 + *(int *)(*param_2 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 4;
  param_1[4] = iVar1 + 0x80;
  return;
}



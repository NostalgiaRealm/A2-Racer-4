
/* ==== FUN_00473d70 @ 00473d70 ==== 
 * signature: undefined __cdecl FUN_00473d70(undefined4 * param_1, int * param_2)
 * body: 00473d70-00473da7
 */

void __cdecl FUN_00473d70(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00715e50;
  iVar1 = *param_2;
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 4;
  param_1[4] = iVar1 * 0xf0 + 0x4c + iVar2;
  return;
}




/* ==== FUN_00473ea0 @ 00473ea0 ==== 
 * signature: undefined __cdecl FUN_00473ea0(undefined4 * param_1, int * param_2)
 * body: 00473ea0-00473ef2
 */

void __cdecl FUN_00473ea0(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)
           (DAT_0073b0d0 + *(int *)(*param_2 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0xa5);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 2;
  param_1[4] = uVar1;
  return;
}



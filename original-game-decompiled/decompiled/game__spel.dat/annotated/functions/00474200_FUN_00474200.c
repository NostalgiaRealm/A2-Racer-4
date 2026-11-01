
/* ==== FUN_00474200 @ 00474200 ==== 
 * signature: undefined __cdecl FUN_00474200(undefined4 * param_1, int * param_2)
 * body: 00474200-00474237
 */

void __cdecl FUN_00474200(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*param_2 * 0xf0 + 0x54 + DAT_00715e50);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 2;
  param_1[4] = uVar1;
  return;
}



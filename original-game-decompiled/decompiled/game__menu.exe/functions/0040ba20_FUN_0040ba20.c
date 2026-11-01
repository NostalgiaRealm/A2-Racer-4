
/* ==== FUN_0040ba20 @ 0040ba20 ==== 
 * signature: undefined FUN_0040ba20(void)
 * body: 0040ba20-0040ba31
 */

undefined4 FUN_0040ba20(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0040b9a0(param_1);
  return *(undefined4 *)(&DAT_004aa230 + (uVar1 & 0xff) * 8);
}




/* ==== FUN_004086d4 @ 004086d4 ==== 
 * signature: byte * __register FUN_004086d4(byte * param_1, byte * param_2, undefined4 param_3, undefined4 param_4)
 * body: 004086d4-00408707
 */

byte * FUN_004086d4(byte *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00408020((char *)param_2);
  iVar1 = FUN_004082dc(param_1,(byte *)0x7fffffff,param_2,param_4,param_3,iVar1);
  param_1[iVar1] = 0;
  return param_1;
}



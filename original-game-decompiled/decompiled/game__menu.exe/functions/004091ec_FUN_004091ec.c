
/* ==== FUN_004091ec @ 004091ec ==== 
 * signature: byte * __register FUN_004091ec(byte * param_1, byte * param_2, undefined4 param_3, undefined4 param_4)
 * body: 004091ec-0040921f
 */

byte * FUN_004091ec(byte *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00408b24((char *)param_2);
  iVar1 = FUN_00408df4(param_1,(byte *)0x7fffffff,param_2,param_4,param_3,iVar1);
  param_1[iVar1] = 0;
  return param_1;
}




/* ==== FUN_00409220 @ 00409220 ==== 
 * signature: byte * __register FUN_00409220(byte * param_1, byte * param_2, byte * param_3, undefined4 param_4, undefined4 param_5)
 * body: 00409220-00409253
 */

byte * FUN_00409220(byte *param_1,byte *param_2,byte *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_00408b24((char *)param_3);
  iVar1 = FUN_00408df4(param_1,param_2,param_3,param_4,param_5,iVar1);
  param_1[iVar1] = 0;
  return param_1;
}



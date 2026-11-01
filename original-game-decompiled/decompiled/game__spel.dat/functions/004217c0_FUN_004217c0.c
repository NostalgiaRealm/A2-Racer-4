
/* ==== FUN_004217c0 @ 004217c0 ==== 
 * signature: undefined4 __cdecl FUN_004217c0(int param_1)
 * body: 004217c0-0042182b
 */

undefined4 __cdecl FUN_004217c0(int param_1)

{
  byte bVar1;
  undefined3 extraout_var;
  uint uVar2;
  
  uVar2 = (int)*(uint *)(&DAT_005cec0c + param_1 * 0x294) >> 0x1f;
  if ((((*(uint *)(&DAT_005cec0c + param_1 * 0x294) ^ uVar2) == uVar2) &&
      (bVar1 = FUN_004235f0(param_1), CONCAT31(extraout_var,bVar1) != 0)) &&
     (16.0 <= *(float *)(*(int *)(&DAT_005cea34 + param_1 * 0x294) * 0xf0 + 0xc4 + DAT_00715e50))) {
    return 1;
  }
  return 0;
}



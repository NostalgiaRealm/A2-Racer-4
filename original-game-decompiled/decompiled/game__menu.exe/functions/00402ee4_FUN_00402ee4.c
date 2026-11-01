
/* ==== FUN_00402ee4 @ 00402ee4 ==== 
 * signature: undefined __register FUN_00402ee4(int param_1, byte * param_2)
 * body: 00402ee4-00402ef4
 */

void FUN_00402ee4(int param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_1 + -0x2c);
  for (iVar1 = **(byte **)(param_1 + -0x2c) + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    param_2 = param_2 + 1;
  }
  return;
}



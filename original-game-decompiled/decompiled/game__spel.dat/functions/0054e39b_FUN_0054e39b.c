
/* ==== FUN_0054e39b @ 0054e39b ==== 
 * signature: uint __fastcall FUN_0054e39b(int * param_1)
 * body: 0054e39b-0054e3bd
 */

uint __fastcall FUN_0054e39b(int *param_1)

{
  byte *pbVar1;
  uint uVar2;
  
  uVar2 = *(uint *)param_1[7];
  if ((uVar2 != 0) && (uVar2 < *(int *)param_1[0xb] + uVar2)) {
    pbVar1 = (byte *)FUN_0054b769((int)param_1);
    return (uint)*pbVar1;
  }
  uVar2 = (**(code **)(*param_1 + 0x14))();
  return uVar2;
}



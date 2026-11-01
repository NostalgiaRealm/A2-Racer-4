
/* ==== FUN_0040bffe @ 0040bffe ==== 
 * signature: int __register FUN_0040bffe(undefined1 * param_1, undefined4 param_2, char param_3, undefined4 param_4, int param_5, byte param_6)
 * body: 0040bffe-0040c09e
 */

int FUN_0040bffe(undefined1 *param_1,undefined4 param_2,char param_3,undefined4 param_4,int param_5,
                byte param_6)

{
  int iVar1;
  int extraout_ECX;
  uint uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  byte bVar5;
  ushort local_20 [12];
  undefined1 *local_8;
  
  bVar5 = 0;
  iVar1 = 0x13;
  if (param_3 == '\0') {
    iVar1 = param_5;
    if (param_5 < 2) {
      iVar1 = 2;
    }
    if (0x12 < iVar1) {
      iVar1 = 0x12;
    }
  }
  local_8 = param_1;
  FUN_0040c5a1(local_20,param_2,param_3);
  puVar4 = local_8;
  if (local_20[0] - 0x7fff < 2) {
    FUN_0040c0bc();
    puVar3 = &DAT_0040bff8 + extraout_ECX * 3;
    for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
  }
  else {
    uVar2 = (uint)param_6;
    if ((param_6 != 1) && ((4 < param_6 || (iVar1 < (short)local_20[0])))) {
      uVar2 = 0;
    }
    (**(code **)(&DAT_0040c09f + uVar2 * 4))();
  }
  return (int)puVar4 - (int)local_8;
}



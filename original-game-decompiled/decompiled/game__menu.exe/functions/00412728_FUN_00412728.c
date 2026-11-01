
/* ==== FUN_00412728 @ 00412728 ==== 
 * signature: undefined __register FUN_00412728(int * param_1, int * param_2, int param_3)
 * body: 00412728-004127ca
 */

void FUN_00412728(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  code *pcStack_2c;
  code *pcStack_28;
  int local_14;
  
  if (param_3 == 0) {
    pcStack_28 = (code *)0x412747;
    FUN_00412674(param_2,0);
    pcStack_28 = (code *)0x41274f;
    param_3 = FUN_00412680(param_2);
  }
  local_14 = param_3;
  if (0xf000 < param_3) {
    local_14 = 0xf000;
  }
  pcStack_28 = (code *)0x412770;
  iVar1 = FUN_0040277c(local_14);
  pcStack_2c = thunk_FUN_004036bc;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  pcStack_28 = (code *)&stack0xfffffffc;
  for (; param_3 != 0; param_3 = param_3 - iVar2) {
    iVar2 = param_3;
    if (local_14 < param_3) {
      iVar2 = local_14;
    }
    FUN_004126b8(param_2,iVar1,iVar2);
    FUN_004126f0(param_1,iVar1,iVar2);
  }
  *in_FS_OFFSET = uStack_30;
  pcStack_28 = FUN_004127d2;
  pcStack_2c = (code *)0x4127ca;
  FUN_00402794(iVar1);
  return;
}



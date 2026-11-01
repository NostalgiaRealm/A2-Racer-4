
/* ==== TBitmap.vmt_034 @ 0041ec88 ==== 
 * signature: undefined __register TBitmap.vmt_034(int * param_1, int param_2)
 * body: 0041ec88-0041ecd8
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TBitmap_vmt_034(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined4 local_60 [2];
  int local_58;
  int local_40;
  
  bVar5 = 0;
  iVar1 = param_1[8];
  if (param_2 != *(int *)(iVar1 + 0x20)) {
    FUN_0041e0d4((int)param_1);
    puVar3 = (undefined4 *)(iVar1 + 0x18);
    puVar4 = local_60;
    for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    local_58 = param_2;
    local_40 = param_2;
    FUN_0041db44((int)param_1,*(HBITMAP *)(iVar1 + 8),*(HPALETTE *)(iVar1 + 0x10),local_60);
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}



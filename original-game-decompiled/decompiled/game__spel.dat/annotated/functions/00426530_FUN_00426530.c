
/* ==== FUN_00426530 @ 00426530 ==== 
 * signature: undefined __thiscall FUN_00426530(void * this, int param_1)
 * body: 00426530-004266e7
 */

void __thiscall FUN_00426530(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float local_30 [3];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c [3];
  
  DVar4 = GetTickCount();
  if (200 < (int)(DVar4 - *(int *)(param_1 * 0x10 + 0xde6a8 + (int)this))) {
    iVar5 = FUN_00425230((undefined4 *)((int)this + param_1 * 0x14 + 0x10));
    iVar5 = iVar5 * 0xf0;
    iVar6 = FUN_004a8c50(iVar5 + DAT_00715e50);
    uVar7 = FUN_00558625();
    local_30[0] = (float)((int)uVar7 % 10 + -5);
    local_30[1] = 5.0;
    local_30[2] = ABS((*(float *)(DAT_0073b5c8 + 0x60 + iVar6 * 0xac) -
                      *(float *)(DAT_0073b5c8 + 0x18 + iVar6 * 0xac)) * 0.5);
    if (*(int *)((param_1 + 0xde6b) * 0x10 + (int)this) == 0) {
      local_30[2] = local_30[2] * -1.0;
    }
    iVar6 = iVar5 + 0xbc + DAT_00715e50;
    local_18 = *(float *)(iVar5 + 0xbc + DAT_00715e50);
    local_14 = *(undefined4 *)(iVar6 + 4);
    local_10 = *(undefined4 *)(iVar6 + 8);
    puVar8 = (undefined4 *)
             FUN_004b42a0(&local_24,&local_18,
                          DAT_0073b0d0 + *(int *)(iVar5 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
    uVar1 = *puVar8;
    uVar2 = puVar8[1];
    uVar3 = puVar8[2];
    iVar5 = DAT_0073b0d0 + *(int *)(iVar5 + 0x24 + DAT_00715e50) * 0xa9;
    pfVar9 = (float *)FUN_004b42a0(local_c,local_30,iVar5 + 0x10);
    local_24 = *(float *)(iVar5 + 0x50) + *pfVar9;
    local_20 = *(float *)(iVar5 + 0x54) + pfVar9[1];
    local_1c = *(float *)(iVar5 + 0x58) + pfVar9[2];
    FUN_0043dd90(local_24,local_20,local_1c,uVar1,uVar2,uVar3);
    *(DWORD *)(param_1 * 0x10 + 0xde6a8 + (int)this) = DVar4;
  }
  return;
}




/* ==== FUN_0046b674 @ 0046b674 ==== 
 * signature: undefined __register FUN_0046b674(int * param_1, uint param_2, undefined4 param_3)
 * body: 0046b674-0046b7d0
 */

void FUN_0046b674(int *param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 extraout_ECX;
  int iVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  bool bVar9;
  undefined1 *puVar10;
  undefined4 uStack_2c;
  code *pcStack_28;
  code *pcStack_24;
  int local_14;
  
  if (param_1 == (int *)0x0) {
    pcStack_24 = (code *)0x46b699;
    FUN_00403c40("Assertion failure");
    param_3 = extraout_ECX;
  }
  pcStack_24 = (code *)0x46b6aa;
  piVar1 = TBitmap_vmt_00c((int *)FUN_004173a4,'\x01',param_3);
  pcStack_28 = thunk_FUN_004036bc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  pcStack_24 = (code *)&stack0xfffffffc;
  uVar2 = (**(code **)(*param_1 + 0x2c))();
  (**(code **)(*piVar1 + 0x40))(piVar1,uVar2);
  uVar2 = (**(code **)(*param_1 + 0x20))();
  (**(code **)(*piVar1 + 0x34))(piVar1,uVar2);
  piVar3 = (int *)FUN_0041df1c(piVar1);
  FUN_00418f9c(piVar3,0,0,param_1);
  iVar4 = (**(code **)(*piVar1 + 0x20))();
  uVar5 = iVar4 - 1;
  if (SBORROW4(iVar4,1)) {
    uVar5 = thunk_FUN_00402808(uVar5);
  }
  if (-1 < (int)uVar5) {
    local_14 = uVar5 + 1;
    iVar4 = 0;
    do {
      iVar8 = 0;
LAB_0046b7a1:
      iVar6 = (**(code **)(*piVar1 + 0x2c))();
      if (iVar8 < iVar6) {
        piVar3 = (int *)FUN_0041df1c(piVar1);
        uVar5 = FUN_00419464(piVar3,iVar8,iVar4);
        iVar6 = iVar8;
        if (param_2 == uVar5) {
          do {
            bVar9 = SCARRY4(iVar8,1);
            iVar8 = iVar8 + 1;
            if (bVar9) {
              thunk_FUN_00402808(uVar5);
            }
            iVar6 = (**(code **)(*piVar1 + 0x2c))();
            if (iVar6 <= iVar8) break;
            piVar3 = (int *)FUN_0041df1c(piVar1);
            uVar5 = FUN_00419464(piVar3,iVar8,iVar4);
          } while (param_2 == uVar5);
        }
        else {
          do {
            iVar7 = iVar6 + 1;
            if (SCARRY4(iVar6,1)) {
              thunk_FUN_00402808(uVar5);
            }
            iVar6 = (**(code **)(*piVar1 + 0x2c))();
            if (iVar6 <= iVar7) break;
            piVar3 = (int *)FUN_0041df1c(piVar1);
            uVar5 = FUN_00419464(piVar3,iVar7,iVar4);
            iVar6 = iVar7;
          } while (param_2 != uVar5);
          uVar5 = iVar4 + 1;
          puVar10 = &stack0xfffffffc;
          if (SCARRY4(iVar4,1)) {
            puVar10 = &stack0xfffffffc;
            uVar5 = thunk_FUN_00402808(uVar5);
          }
          FUN_0046b630(iVar8,iVar4,iVar7,uVar5,(int)puVar10);
          iVar8 = iVar7;
        }
        goto LAB_0046b7a1;
      }
      iVar4 = iVar4 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  *in_FS_OFFSET = uStack_2c;
  pcStack_24 = FUN_0046b7d8;
  pcStack_28 = (code *)0x46b7d0;
  FUN_00402f9c(piVar1);
  return;
}




/* ==== FUN_0045d910 @ 0045d910 ==== 
 * signature: undefined4 __register FUN_0045d910(int * param_1, uint param_2, undefined4 param_3)
 * body: 0045d910-0045da7c;0045da84-0045da8d
 */

/* WARNING: Removing unreachable block (ram,0x0045d987) */

undefined4 FUN_0045d910(int *param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *in_FS_OFFSET;
  bool bVar10;
  undefined1 *puVar11;
  undefined4 uStack_2c;
  code *pcStack_28;
  undefined1 *puStack_24;
  int local_14;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puStack_24 = (undefined1 *)0x45d936;
  piVar1 = TBitmap_vmt_00c((int *)FUN_004173a4,'\x01',param_3);
  pcStack_28 = thunk_FUN_004036bc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  uVar2 = (**(code **)(*param_1 + 0x2c))();
  (**(code **)(*piVar1 + 0x40))(piVar1,uVar2);
  uVar2 = (**(code **)(*param_1 + 0x20))();
  (**(code **)(*piVar1 + 0x34))(piVar1,uVar2);
  piVar3 = (int *)FUN_0041df1c(piVar1);
  FUN_00418f9c(piVar3,0,0,param_1);
  uVar9 = param_2 & 0xffffff;
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
LAB_0045da4d:
      iVar6 = (**(code **)(*piVar1 + 0x2c))();
      if (iVar8 < iVar6) {
        piVar3 = (int *)FUN_0041df1c(piVar1);
        uVar5 = FUN_00419464(piVar3,iVar8,iVar4);
        uVar5 = uVar5 & 0xffffff;
        iVar6 = iVar8;
        if (uVar9 == uVar5) {
          do {
            bVar10 = SCARRY4(iVar8,1);
            iVar8 = iVar8 + 1;
            if (bVar10) {
              thunk_FUN_00402808(uVar5);
            }
            iVar6 = (**(code **)(*piVar1 + 0x2c))();
            if (iVar6 <= iVar8) break;
            piVar3 = (int *)FUN_0041df1c(piVar1);
            uVar5 = FUN_00419464(piVar3,iVar8,iVar4);
            uVar5 = uVar5 & 0xffffff;
          } while (uVar9 == uVar5);
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
            uVar5 = uVar5 & 0xffffff;
            iVar6 = iVar7;
          } while (uVar9 != uVar5);
          uVar5 = iVar4 + 1;
          puVar11 = &stack0xfffffffc;
          if (SCARRY4(iVar4,1)) {
            puVar11 = &stack0xfffffffc;
            uVar5 = thunk_FUN_00402808(uVar5);
          }
          FUN_0045d8cc(iVar8,iVar4,iVar7,uVar5,(int)puVar11);
          iVar8 = iVar7;
        }
        goto LAB_0045da4d;
      }
      iVar4 = iVar4 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = (undefined1 *)0x45da84;
  pcStack_28 = (code *)0x45da7c;
  uVar2 = FUN_00402f9c(piVar1);
  return uVar2;
}



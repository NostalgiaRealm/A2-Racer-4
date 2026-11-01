
/* ==== FUN_00490e1c @ 00490e1c ==== 
 * signature: undefined __register FUN_00490e1c(int * param_1)
 * body: 00490e1c-00490fe4
 */

void FUN_00490e1c(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  uint *extraout_EDX_01;
  int extraout_EDX_02;
  byte *extraout_EDX_03;
  byte *pbVar6;
  short sVar7;
  uint uVar8;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar9;
  int *piVar10;
  undefined4 uStack_2c;
  code *pcStack_28;
  code *pcStack_24;
  int local_14;
  undefined4 *local_10;
  int local_c;
  byte *local_8;
  
  pcStack_24 = (code *)&stack0xfffffffc;
  local_8 = (byte *)0x0;
  local_c = 0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  pcStack_28 = thunk_FUN_004036bc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_00490b4c((int *)&local_8);
  if (local_8 != (byte *)0x0) {
    FUN_004081f0(local_8,&local_c);
    FUN_00403cf4((int *)&local_8,local_c);
    puVar1 = (uint *)FUN_00403edc((int)local_8);
    uVar8 = (int)puVar1 + 1;
    if (SCARRY4((int)puVar1,1)) {
      puVar1 = (uint *)thunk_FUN_00402808((uint)puVar1);
    }
    if (0xffff < uVar8) {
      puVar1 = (uint *)thunk_FUN_00402808((uint)puVar1);
    }
    do {
      sVar7 = (short)uVar8;
      uVar8 = (uint)(ushort)(sVar7 - 1);
      if (sVar7 == 0) {
        puVar1 = (uint *)thunk_FUN_00402808((uint)puVar1);
      }
      piVar10 = (int *)&DAT_004ad4ac;
      iVar5 = uVar8 - 3;
      uVar9 = iVar5 == 0;
      if (SBORROW4(uVar8,3)) {
        thunk_FUN_00402808((uint)puVar1);
        iVar5 = extraout_EDX;
      }
      FUN_004040e4((int)local_8,iVar5,4,piVar10);
      FUN_00403fec(DAT_004ad4ac,(uint *)&DAT_00490ffc);
      if ((bool)uVar9) break;
      FUN_00403fec(DAT_004ad4ac,(uint *)&DAT_0049100c);
      if ((bool)uVar9) break;
      puVar1 = FUN_00403fec(DAT_004ad4ac,(uint *)FUN_0049101c);
    } while (!(bool)uVar9);
    iVar5 = FUN_00403edc((int)local_8);
    if ((int)uVar8 < iVar5) {
      piVar10 = &local_14;
      iVar5 = FUN_00403edc((int)local_8);
      uVar4 = iVar5 - uVar8;
      uVar2 = uVar8;
      if (SBORROW4(iVar5,uVar8)) {
        uVar2 = thunk_FUN_00402808(uVar8);
        uVar4 = extraout_ECX;
      }
      iVar5 = uVar8 + 1;
      if (SCARRY4(uVar8,1)) {
        thunk_FUN_00402808(uVar2);
        uVar4 = extraout_ECX_00;
        iVar5 = extraout_EDX_00;
      }
      FUN_004040e4((int)local_8,iVar5,uVar4,piVar10);
      FUN_004083f8(local_14,(int *)&local_10);
      FUN_00403cb0((int *)&DAT_004ad4ac,local_10);
      while (DAT_004ad4ac != (uint *)0x0) {
        iVar5 = 0;
        puVar1 = DAT_004ad4ac;
        if (DAT_004ad4ac[-1] == 0) {
          iVar5 = thunk_FUN_00402808(0);
          puVar1 = extraout_EDX_01;
        }
        if (*(char *)((int)puVar1 + iVar5) != '\"') break;
        FUN_00404124((int *)&DAT_004ad4ac,1,1);
      }
      iVar3 = FUN_00403edc((int)local_8);
      iVar5 = iVar3 - uVar8;
      uVar2 = uVar8;
      if (SBORROW4(iVar3,uVar8)) {
        uVar2 = thunk_FUN_00402808(uVar8);
        iVar5 = extraout_ECX_01;
      }
      iVar3 = uVar8 + 1;
      if (SCARRY4(uVar8,1)) {
        thunk_FUN_00402808(uVar2);
        iVar5 = extraout_ECX_02;
        iVar3 = extraout_EDX_02;
      }
      FUN_00404124((int *)&local_8,iVar3,iVar5);
    }
    else {
      FUN_00403c5c((int *)&DAT_004ad4ac);
    }
    iVar5 = 0;
    pbVar6 = local_8;
    if (*(int *)(local_8 + -4) == 0) {
      iVar5 = thunk_FUN_00402808(0);
      pbVar6 = extraout_EDX_03;
    }
    if (pbVar6[iVar5] == 0x22) {
      FUN_00404124((int *)&local_8,1,1);
    }
  }
  FUN_00403cb0(param_1,(undefined4 *)local_8);
  *in_FS_OFFSET = uStack_2c;
  pcStack_24 = FUN_00490fec;
  pcStack_28 = (code *)0x490fe4;
  FUN_00403c80(&local_14,4);
  return;
}




/* ==== TStreamAdapter.vmt_010 @ 004161e4 ==== 
 * signature: undefined TStreamAdapter.vmt_010(void)
 * body: 004161e4-0041637f;004163a2-004163b7
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStreamAdapter_vmt_010(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  int in_stack_00000004;
  int *in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_00000010;
  uint *in_stack_00000014;
  undefined4 *in_stack_00000018;
  undefined4 uStack_5c;
  code *pcStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  code *pcStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  code *pcStack_40;
  code *pcStack_3c;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_10;
  int iStack_8;
  
  pcStack_3c = (code *)0x4161f5;
  FUN_004058c0(in_stack_00000008);
  pcStack_40 = thunk_FUN_004036bc;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  uStack_1c = 0;
  uStack_18 = 0;
  pcStack_4c = thunk_FUN_00403408;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  if (in_stack_00000010 == 0) {
    if (in_stack_0000000c < 0x100001) {
LAB_0041624e:
      uStack_10 = in_stack_0000000c;
      goto LAB_00416254;
    }
  }
  else if (in_stack_00000010 < 1) goto LAB_0041624e;
  uStack_10 = 0x100000;
LAB_00416254:
  puStack_54 = (undefined1 *)0x41625c;
  puStack_48 = &stack0xfffffffc;
  pcStack_3c = (code *)&stack0xfffffffc;
  iVar2 = FUN_0040277c(uStack_10);
  pcStack_58 = thunk_FUN_004036bc;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  puStack_54 = &stack0xfffffffc;
  do {
    if (in_stack_00000010 == 0) {
      if (in_stack_0000000c == 0) {
LAB_00416340:
        *in_FS_OFFSET = uStack_5c;
        puStack_54 = &DAT_00416387;
        pcStack_58 = (code *)0x416355;
        FUN_00402794(iVar2);
        if (in_stack_00000018 != (undefined4 *)0x0) {
          *in_stack_00000018 = 0;
          in_stack_00000018[1] = 0;
        }
        if (in_stack_00000014 != (uint *)0x0) {
          *in_stack_00000014 = uStack_1c;
          in_stack_00000014[1] = uStack_18;
        }
        return;
      }
    }
    else if (in_stack_00000010 < 1) goto LAB_00416340;
    uVar1 = in_stack_0000000c;
    if (in_stack_00000010 == 0) {
      if (0x7fffffff < in_stack_0000000c) {
LAB_00416285:
        uVar1 = 0x7fffffff;
      }
    }
    else if (0 < in_stack_00000010) goto LAB_00416285;
    for (; 0 < (int)uVar1; uVar1 = uVar1 - uVar4) {
      uVar4 = uVar1;
      if ((int)uStack_10 < (int)uVar1) {
        uVar4 = uStack_10;
      }
      uVar3 = (**(code **)(**(int **)(in_stack_00000004 + 0xc) + 4))
                        (*(int **)(in_stack_00000004 + 0xc),iVar2,uVar4);
      bVar5 = CARRY4(uStack_1c,uVar3);
      uStack_1c = uStack_1c + uVar3;
      uStack_18 = uStack_18 + ((int)uVar3 >> 0x1f) + (uint)bVar5;
      iStack_8 = (**(code **)(*in_stack_00000008 + 0x10))();
      if ((iStack_8 == 0) && (uVar4 != 0)) {
        iStack_8 = -0x7fffbffb;
      }
      if (iStack_8 != 0) {
        FUN_00403794();
        *in_FS_OFFSET = uStack_50;
        *in_FS_OFFSET = uStack_44;
        pcStack_3c = FUN_004163bf;
        pcStack_40 = (code *)0x4163b7;
        FUN_00405860((int *)&stack0x00000008);
        return;
      }
    }
    bVar5 = in_stack_0000000c < uVar1;
    in_stack_0000000c = in_stack_0000000c - uVar1;
    in_stack_00000010 = (in_stack_00000010 - ((int)uVar1 >> 0x1f)) - (uint)bVar5;
  } while( true );
}



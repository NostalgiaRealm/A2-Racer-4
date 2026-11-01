
/* ==== TStreamAdapter.vmt_010 @ 00414630 ==== 
 * signature: undefined TStreamAdapter.vmt_010(void)
 * body: 00414630-004147cb;004147ee-00414803
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
  
  pcStack_3c = (code *)0x414641;
  FUN_00405324(in_stack_00000008);
  pcStack_40 = thunk_FUN_00403434;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  uStack_1c = 0;
  uStack_18 = 0;
  pcStack_4c = thunk_FUN_00403180;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  if (in_stack_00000010 == 0) {
    if (in_stack_0000000c < 0x100001) {
LAB_0041469a:
      uStack_10 = in_stack_0000000c;
      goto LAB_004146a0;
    }
  }
  else if (in_stack_00000010 < 1) goto LAB_0041469a;
  uStack_10 = 0x100000;
LAB_004146a0:
  puStack_54 = (undefined1 *)0x4146a8;
  puStack_48 = &stack0xfffffffc;
  pcStack_3c = (code *)&stack0xfffffffc;
  iVar2 = FUN_004026b8(uStack_10);
  pcStack_58 = thunk_FUN_00403434;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  puStack_54 = &stack0xfffffffc;
  do {
    if (in_stack_00000010 == 0) {
      if (in_stack_0000000c == 0) {
LAB_0041478c:
        *in_FS_OFFSET = uStack_5c;
        puStack_54 = &DAT_004147d3;
        pcStack_58 = (code *)0x4147a1;
        FUN_004026d0(iVar2);
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
    else if (in_stack_00000010 < 1) goto LAB_0041478c;
    uVar1 = in_stack_0000000c;
    if (in_stack_00000010 == 0) {
      if (0x7fffffff < in_stack_0000000c) {
LAB_004146d1:
        uVar1 = 0x7fffffff;
      }
    }
    else if (0 < in_stack_00000010) goto LAB_004146d1;
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
        FUN_0040350c();
        *in_FS_OFFSET = uStack_50;
        *in_FS_OFFSET = uStack_44;
        pcStack_3c = FUN_0041480b;
        pcStack_40 = (code *)0x414803;
        FUN_004052f0((int *)&stack0x00000008);
        return;
      }
    }
    bVar5 = in_stack_0000000c < uVar1;
    in_stack_0000000c = in_stack_0000000c - uVar1;
    in_stack_00000010 = (in_stack_00000010 - ((int)uVar1 >> 0x1f)) - (uint)bVar5;
  } while( true );
}



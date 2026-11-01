
/* ==== FUN_004489a0 @ 004489a0 ==== 
 * signature: undefined4 __thiscall FUN_004489a0(void * this, byte * param_1, byte * param_2)
 * body: 004489a0-00448a56;00448a5f-00448a81;00448a85-00448bf9
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00448a57-00448a5e 00448a82-00448a84
 */

undefined4 __thiscall FUN_004489a0(void *this,byte *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  undefined1 *puVar8;
  bool bVar9;
  byte *pbStack_2c;
  byte *pbStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  void *local_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056a4aa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_00448c00(this,param_2);
  pbVar5 = param_1;
  if (iVar3 == -1) {
    iVar3 = FUN_0055926e((LPCSTR)param_1,0);
    if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s_The_config_file__s_belonging_to_t_0059ee34);
    }
    pbStack_2c = operator_new(0x10);
    uStack_4 = 0;
    param_1 = pbStack_2c;
    if (pbStack_2c == (byte *)0x0) {
      pbStack_2c = (byte *)0x0;
    }
    else {
      *pbStack_2c = (byte)param_2;
      FUN_004028f0(pbStack_2c,'\0');
    }
    uStack_4 = 0xffffffff;
    pbStack_28 = operator_new(0x10);
    uStack_4 = 1;
    param_1 = pbStack_28;
    if (pbStack_28 == (byte *)0x0) {
      pbStack_28 = (byte *)0x0;
    }
    else {
      *pbStack_28 = (byte)param_2;
      FUN_004028f0(pbStack_28,'\0');
    }
    uStack_4 = 0xffffffff;
    puVar8 = FUN_0049df90(auStack_1c,pbVar5);
    uStack_4 = 2;
    FUN_004093c0(pbStack_2c,puVar8,0,0xffffffff);
    uStack_4 = 0xffffffff;
    if (iStack_18 != 0) {
      cVar2 = *(char *)(iStack_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_0054b339((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar2 + -1;
      }
    }
    puVar8 = FUN_0049df90(auStack_1c,param_2);
    uStack_4 = 3;
    FUN_004093c0(pbStack_28,puVar8,0,0xffffffff);
    uStack_4 = 0xffffffff;
    if (iStack_18 != 0) {
      cVar2 = *(char *)(iStack_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_0054b339((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar2 + -1;
      }
    }
    FUN_00448ff0((void *)((int)this + 4),&param_1,*(void **)((int)this + 8),&pbStack_2c);
    puVar4 = *(undefined4 **)((int)this + 0x18);
    iVar3 = FUN_00449050(puVar4,puVar4[1]);
    puVar4[1] = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    FUN_004d2770((undefined4 *)(iVar3 + 8),&pbStack_28);
    iVar3 = *(int *)((int)this + 0x1c) + 1;
    *(int *)((int)this + 0x1c) = iVar3;
  }
  else {
    puVar4 = (undefined4 *)FUN_00468530((void *)((int)this + 4),&local_24);
    param_2 = (byte *)*puVar4;
    if (0 < iVar3) {
      do {
        FUN_00448fd0(&param_2,&local_20);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    pbVar5 = *(byte **)(*(int *)(param_2 + 8) + 4);
    pbVar6 = param_1;
    if (pbVar5 == (byte *)0x0) {
      pbVar5 = &DAT_0057629c;
    }
    do {
      bVar1 = *pbVar6;
      bVar9 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00448a40:
        iVar7 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_00448a44;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar9 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00448a40;
      pbVar5 = pbVar5 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar7 = 0;
LAB_00448a44:
    iVar3 = 0;
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s_There_is_already_another_config_f_0059ede8);
    }
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}



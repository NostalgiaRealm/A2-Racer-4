
/* ==== FUN_0048ebe0 @ 0048ebe0 ==== 
 * signature: undefined __thiscall FUN_0048ebe0(void * this, undefined4 param_1, byte * param_2, uint param_3, undefined4 param_4, undefined4 param_5)
 * body: 0048ebe0-0048ed42;0048ed46-0048edf7;0048edfb-0048ee44
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0048ed43-0048ed45 0048edf8-0048edfa
 */

void __thiscall
FUN_0048ebe0(void *this,undefined4 param_1,byte *param_2,uint param_3,undefined4 param_4,
            undefined4 param_5)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iStack_34;
  int local_30;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  code *pcStack_8;
  int local_4;
  
  uVar7 = param_3;
  pcStack_8 = FUN_0056dee4;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (1 < (int)param_3) {
    if (param_2 == (byte *)0x0) {
      pbVar5 = &DAT_0057629c;
      ExceptionList = &pvStack_c;
    }
    else {
      ExceptionList = &pvStack_c;
      FUN_00471de0(&param_1);
      pbVar5 = param_2;
    }
    if (*pbVar5 == 0x5b) {
      if ((param_3 < uVar7 - 1) || (param_2 == (byte *)0x0)) {
        pbVar5 = &DAT_0057629c;
      }
      else {
        FUN_00471de0(&param_1);
        pbVar5 = param_2 + (uVar7 - 1);
      }
      if (*pbVar5 == 0x5d) {
        local_30 = 0;
        iVar6 = (*(code *)**(undefined4 **)((int)this + 0x2b8))();
        if (0 < iVar6) {
          iVar6 = 0;
          iStack_34 = 0;
          do {
            FUN_0049df90(auStack_1c,&DAT_005ac7f8);
            local_4._0_1_ = 1;
            pbVar5 = param_2;
            if (param_2 == (byte *)0x0) {
              pbVar5 = &DAT_0057629c;
            }
            uVar7 = FUN_0040fc80(auStack_1c,0,uStack_14,pbVar5,param_3);
            if (uVar7 == 0) {
              iVar8 = *(int *)(*(int *)((int)this + 700) + 4);
              auStack_2c[0] = *(undefined1 *)(iVar6 + iVar8);
              FUN_004028f0(auStack_2c,'\0');
              FUN_004093c0(auStack_2c,(void *)(iVar6 + iVar8),0,0xffffffff);
              local_4._0_1_ = 2;
              iVar8 = *(int *)(*(int *)((int)this + 700) + 4);
              iVar4 = *(int *)(iVar6 + 0x10 + iVar8);
              if (0x3f < iVar4) {
                    /* WARNING: Subroutine does not return */
                FUN_004c4150((byte *)s_ERROR___category_can_not_hold_mo_005ac82c);
              }
              *(undefined4 *)(iVar8 + 0x14 + (iVar4 + iStack_34) * 4) = param_5;
              piVar1 = (int *)(iVar6 + 0x10 + *(int *)(*(int *)((int)this + 700) + 4));
              *piVar1 = *piVar1 + 1;
              if (iStack_28 != 0) {
                cVar2 = *(char *)(iStack_28 + -1);
                if ((cVar2 == '\0') || (cVar2 == -1)) {
                  FUN_0054b339((char *)(iStack_28 + -1));
                }
                else {
                  *(char *)(iStack_28 + -1) = cVar2 + -1;
                }
              }
              iStack_28 = 0;
              uStack_24 = 0;
              uStack_20 = 0;
            }
            local_4 = (uint)local_4._1_3_ << 8;
            if (iStack_18 != 0) {
              cVar2 = *(char *)(iStack_18 + -1);
              if ((cVar2 == '\0') || (cVar2 == -1)) {
                FUN_0054b339((LPVOID)(iStack_18 + -1));
              }
              else {
                *(char *)(iStack_18 + -1) = cVar2 + -1;
              }
            }
            local_30 = local_30 + 1;
            iStack_34 = iStack_34 + 0x45;
            iStack_18 = 0;
            uStack_14 = 0;
            uStack_10 = 0;
            iVar6 = iVar6 + 0x114;
            iVar8 = (*(code *)**(undefined4 **)((int)this + 0x2b8))();
          } while (local_30 < iVar8);
        }
        if (param_2 != (byte *)0x0) {
          bVar3 = param_2[-1];
          if ((bVar3 != 0) && (bVar3 != 0xff)) {
            param_2[-1] = bVar3 - 1;
            ExceptionList = pvStack_c;
            return;
          }
          FUN_0054b339(param_2 + -1);
        }
        ExceptionList = pvStack_c;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s_ERROR___put_correct_category_val_005ac898);
}



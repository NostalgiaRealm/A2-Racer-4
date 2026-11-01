
/* ==== FUN_00425ac0 @ 00425ac0 ==== 
 * signature: undefined __thiscall FUN_00425ac0(void * this, int param_1)
 * body: 00425ac0-00425bac
 */

void __thiscall FUN_00425ac0(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_c;
  int local_4;
  
  local_c = 1;
  do {
    iVar7 = 0;
    iVar8 = 0x44c;
    iVar2 = 0;
    if (0 < *(int *)((int)this + 4)) {
      piVar6 = (int *)((int)this + 0x38);
      do {
        if ((piVar6[-0xb] == *(int *)this) && (piVar6[2] == local_c)) {
          if (*piVar6 < iVar8) {
            iVar8 = *piVar6;
            local_4 = iVar2;
          }
          iVar7 = iVar7 + 1;
        }
        iVar2 = iVar2 + 1;
        piVar6 = piVar6 + 0x12;
      } while (iVar2 < *(int *)((int)this + 4));
      if ((0 < iVar7) && (iVar8 < param_1)) {
        iVar9 = 0;
        uVar3 = FUN_00558625();
        iVar7 = (int)uVar3 % iVar7;
        iVar2 = *(int *)((int)this + 4);
        iVar4 = 0;
        if (0 < iVar2) {
          do {
            iVar5 = iVar4;
            if ((*(int *)((int)this + iVar4 * 0x48 + 0xc) == *(int *)this) &&
               (*(int *)((int)this + iVar4 * 0x48 + 0x40) == local_c)) {
              if (iVar7 == 0) {
                iVar5 = iVar2;
                iVar9 = iVar4;
              }
              iVar7 = iVar7 + -1;
            }
            iVar4 = iVar5 + 1;
          } while (iVar4 < iVar2);
        }
        uVar1 = *(undefined4 *)((int)this + local_4 * 0x48 + 0x3c);
        *(undefined4 *)((int)this + local_4 * 0x48 + 0x38) =
             *(undefined4 *)((int)this + iVar9 * 0x48 + 0x38);
        *(undefined4 *)((int)this + local_4 * 0x48 + 0x3c) =
             *(undefined4 *)((int)this + iVar9 * 0x48 + 0x3c);
        *(undefined4 *)((int)this + iVar9 * 0x48 + 0x3c) = uVar1;
        *(int *)((int)this + iVar9 * 0x48 + 0x38) = iVar8;
        *(undefined4 *)((int)this + iVar9 * 0x48 + 0x40) = 0;
        FUN_00425730(this,iVar9);
      }
    }
    local_c = local_c + 1;
  } while (local_c < 0xb);
  return;
}



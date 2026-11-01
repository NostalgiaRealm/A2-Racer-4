
/* ==== FUN_004a8100 @ 004a8100 ==== 
 * signature: undefined __thiscall FUN_004a8100(void * this, int param_1)
 * body: 004a8100-004a81f3
 */

void __thiscall FUN_004a8100(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)((int)this + 0xac)) {
    piVar2 = (int *)((int)this + 0x7c);
    iVar4 = param_1;
    iVar7 = DAT_0073b5c8;
    do {
      piVar5 = (int *)(DAT_0073b0d0 + *piVar2 * 0xa9);
      if (*(int *)((int)piVar5 + 0xa5) != 2) {
        if (*piVar5 == 1) {
          iVar4 = *(int *)((int)piVar5 + 0x99);
        }
        else if (*piVar5 == 2) {
          iVar4 = *(int *)(*(int *)(*(int *)(piVar5[1] * 9 + 4 + DAT_0073b168) + piVar5[2] * 4) *
                           0x10 + DAT_0073b120);
        }
        if (*(int *)((int)piVar5 + 0xa5) != 1) {
          iVar3 = 0;
          iVar1 = iVar4 * 0xac;
          if (0 < *(int *)(iVar1 + 0x84 + iVar7)) {
            iVar6 = 0;
            do {
              iVar3 = iVar3 + 1;
              *(int *)(*(int *)(iVar1 + 0x80 + iVar7) + 0x10 + iVar6) = param_1;
              iVar6 = iVar6 + 0x20;
              iVar7 = DAT_0073b5c8;
            } while (iVar3 < *(int *)(iVar1 + 0x84 + DAT_0073b5c8));
          }
        }
      }
      local_8 = local_8 + 1;
      piVar2 = piVar2 + 1;
    } while (local_8 < *(int *)((int)this + 0xac));
  }
  return;
}



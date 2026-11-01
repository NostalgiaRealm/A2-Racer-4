
/* ==== FUN_004a8200 @ 004a8200 ==== 
 * signature: undefined __fastcall FUN_004a8200(void * param_1)
 * body: 004a8200-004a8480;004a8488-004a856a;004a8572-004a85f7
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a8481-004a8487 004a856b-004a8571
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004a8200(void *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int local_1c;
  int local_18;
  float local_14;
  undefined4 uStack_10;
  float local_c;
  undefined4 uStack_8;
  int local_4;
  
  if (*(int *)((int)param_1 + 0x48) == -1) {
    iVar3 = DAT_0073b0d0 + *(int *)((int)param_1 + 0x24) * 0xa9;
    FUN_004ad3d0((void *)(DAT_00715f00 + *(int *)((int)param_1 + 0x34) * 0x994),
                 *(float **)(iVar3 + 0x50),*(undefined4 *)(iVar3 + 0x54),
                 *(undefined4 *)(iVar3 + 0x58),&local_1c,&local_18,&local_4);
    uVar1 = FUN_004ad710(local_18,local_1c);
    uStack_8 = 0;
    local_c = (float)(*(uint *)((int)param_1 + 0x4c) >> 0x18);
    local_14 = ABS(*(float *)((int)param_1 + 0xc4)) * 0.1 + 1.0;
    FUN_004a6800(0x7128b0);
    local_14 = (float)(uVar1 & 0xff);
    uStack_10 = 0;
    lVar7 = __ftol();
    uVar1 = (int)lVar7 << 8;
    lVar7 = __ftol();
    lVar8 = __ftol();
    lVar9 = __ftol();
    *(uint *)((int)param_1 + 0x4c) = (((uint)lVar7 | uVar1) << 8 | (uint)lVar8) << 8 | (uint)lVar9;
    lVar7 = __ftol();
    lVar8 = __ftol();
    lVar9 = __ftol();
    iVar3 = *(int *)((int)param_1 + 0x24);
    uVar1 = (((uint)lVar7 | uVar1) << 8 | (uint)lVar8) << 8 | (uint)lVar9;
    iVar2 = *(int *)(DAT_0073b0d0 + iVar3 + iVar3 * 0xa8);
    iVar3 = DAT_0073b0d0 + iVar3 + iVar3 * 0xa8;
    if (iVar2 == 1) {
      iVar3 = *(int *)(iVar3 + 0x99);
    }
    else {
      if (iVar2 != 2) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s___s___d_Invalid_object_type__005afc8c);
      }
      iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 4) * 9 + 4 + DAT_0073b168) +
                               *(int *)(iVar3 + 8) * 4) * 0x10 + DAT_0073b120);
    }
    iVar2 = 0;
    iVar3 = iVar3 * 0xac;
    if (0 < *(int *)(iVar3 + 0x84 + DAT_0073b5c8)) {
      iVar5 = 0;
      do {
        iVar2 = iVar2 + 1;
        *(uint *)(*(int *)(iVar3 + 0x80 + DAT_0073b5c8) + 0x10 + iVar5) = uVar1;
        iVar5 = iVar5 + 0x20;
      } while (iVar2 < *(int *)(iVar3 + 0x84 + DAT_0073b5c8));
    }
    FUN_004a8100(param_1,uVar1);
    for (iVar3 = *(int *)((int)param_1 + 0x44); iVar3 != -1;
        iVar3 = *(int *)(iVar3 + 0x44 + DAT_00715e50)) {
      iVar3 = iVar3 * 0xf0;
      uVar4 = *(uint *)(iVar3 + 0x1c + DAT_00715e50) & 2;
      *(uint *)(iVar3 + 0x1c + DAT_00715e50) = uVar4;
      if (uVar4 != 0) {
        *(uint *)(iVar3 + 0x4c + DAT_00715e50) = uVar1;
        iVar2 = *(int *)(iVar3 + 0x24 + DAT_00715e50);
        iVar5 = *(int *)(DAT_0073b0d0 + iVar2 + iVar2 * 0xa8);
        iVar2 = DAT_0073b0d0 + iVar2 + iVar2 * 0xa8;
        if (iVar5 == 1) {
          iVar2 = *(int *)(iVar2 + 0x99);
        }
        else {
          if (iVar5 != 2) {
                    /* WARNING: Subroutine does not return */
            FUN_004c4150((byte *)s___s___d_Invalid_object_type__005afc8c);
          }
          iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 4) * 9 + 4 + DAT_0073b168) +
                                   *(int *)(iVar2 + 8) * 4) * 0x10 + DAT_0073b120);
        }
        iVar5 = 0;
        iVar2 = iVar2 * 0xac;
        if (0 < *(int *)(iVar2 + 0x84 + DAT_0073b5c8)) {
          iVar6 = 0;
          do {
            iVar5 = iVar5 + 1;
            *(uint *)(*(int *)(iVar2 + 0x80 + DAT_0073b5c8) + 0x10 + iVar6) = uVar1;
            iVar6 = iVar6 + 0x20;
          } while (iVar5 < *(int *)(iVar2 + 0x84 + DAT_0073b5c8));
        }
      }
    }
  }
  return;
}



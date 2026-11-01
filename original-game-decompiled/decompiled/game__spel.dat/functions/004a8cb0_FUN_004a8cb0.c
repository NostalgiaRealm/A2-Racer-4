
/* ==== FUN_004a8cb0 @ 004a8cb0 ==== 
 * signature: undefined __fastcall FUN_004a8cb0(void * param_1)
 * body: 004a8cb0-004a8f3b;004a8f43-004a9126
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a8f3c-004a8f42
 */

void __fastcall FUN_004a8cb0(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  int *local_4c;
  int local_48;
  float local_40 [16];
  
  iVar3 = *(int *)((int)param_1 + 0xec);
  if ((iVar3 == -1) || (*(int *)((int)param_1 + 0xe8) == -1)) {
    iVar3 = *(int *)((int)param_1 + 0x24);
    iVar5 = *(int *)(DAT_0073b0d0 + iVar3 + iVar3 * 0xa8);
    iVar3 = DAT_0073b0d0 + iVar3 + iVar3 * 0xa8;
    if (iVar5 == 1) {
      iVar3 = *(int *)(iVar3 + 0x95);
    }
    else {
      if (iVar5 != 2) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s___s___d_Invalid_object_type__005afc8c);
      }
      iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 4) * 9 + 4 + DAT_0073b168) +
                               *(int *)(iVar3 + 8) * 4) * 0x10 + 4 + DAT_0073b120);
    }
    FUN_004b2e40(&DAT_0073b020,iVar3);
    if ((*(byte *)((int)param_1 + 0x1c) & 2) != 0) {
      FUN_004a8200(param_1);
    }
    iVar3 = DAT_0073b0d0 + *(int *)((int)param_1 + 0x24) * 0xa9;
    if (*(int *)(iVar3 + 0xa5) == 0) {
      if (*(char *)(iVar3 + 0x90) != '\0') {
        FUN_004b5b10(iVar3);
      }
    }
    else {
      FUN_004a74a0(&DAT_00715b28,*(int *)((int)param_1 + 0x24));
    }
    iVar3 = *(int *)((int)param_1 + 0x24);
    iVar5 = *(int *)(DAT_0073b0d0 + iVar3 + 0x99 + iVar3 * 0xa8);
    iVar3 = DAT_0073b0d0 + iVar3 + iVar3 * 0xa8;
    if (iVar5 == -1) {
      iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 4) * 9 + 4 + DAT_0073b168) +
                               *(int *)(iVar3 + 8) * 4) * 0x10 + DAT_0073b120);
    }
    DAT_00715e9c = DAT_00715e9c + *(int *)(DAT_0073b5c8 + 0x94 + iVar5 * 0xac) / 3;
    DAT_00715ea0 = DAT_00715ea0 + *(int *)(DAT_0073b5c8 + 0x94 + iVar5 * 0xac);
  }
  else {
    iVar5 = *(int *)((int)param_1 + 0x24);
    iVar1 = *(int *)(DAT_0073b0d0 + iVar5 + iVar5 * 0xa8);
    iVar5 = DAT_0073b0d0 + iVar5 + iVar5 * 0xa8;
    if (iVar1 == 1) {
      uVar2 = *(undefined4 *)(iVar5 + 0x99);
      *(int *)(iVar5 + 0x99) = iVar3;
      if ((*(byte *)((int)param_1 + 0x1c) & 2) != 0) {
        FUN_004a8200(param_1);
      }
      iVar3 = DAT_0073b0d0 + *(int *)((int)param_1 + 0x24) * 0xa9;
      if (*(int *)(iVar3 + 0xa5) == 0) {
        if (*(char *)(iVar3 + 0x90) != '\0') {
          FUN_004b5b10(iVar3);
        }
      }
      else {
        FUN_004a74a0(&DAT_00715b28,*(int *)((int)param_1 + 0x24));
      }
      iVar3 = *(int *)((int)param_1 + 0x24);
      iVar5 = *(int *)(DAT_0073b0d0 + iVar3 + 0x99 + iVar3 * 0xa8);
      iVar3 = DAT_0073b0d0 + iVar3 + iVar3 * 0xa8;
      if (iVar5 == -1) {
        iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 4) * 9 + 4 + DAT_0073b168) +
                                 *(int *)(iVar3 + 8) * 4) * 0x10 + DAT_0073b120);
      }
      DAT_00715e9c = DAT_00715e9c + *(int *)(DAT_0073b5c8 + 0x94 + iVar5 * 0xac) / 3;
      DAT_00715ea0 = DAT_00715ea0 + *(int *)(DAT_0073b5c8 + 0x94 + iVar5 * 0xac);
      *(undefined4 *)(DAT_0073b0d0 + *(int *)((int)param_1 + 0x24) * 0xa9 + 0x99) = uVar2;
    }
    else if (iVar1 == 2) {
      *(int *)(iVar5 + 0x99) = iVar3;
      if ((*(byte *)((int)param_1 + 0x1c) & 2) != 0) {
        FUN_004a8200(param_1);
      }
      iVar3 = DAT_0073b0d0 + *(int *)((int)param_1 + 0x24) * 0xa9;
      if (*(int *)(iVar3 + 0xa5) == 0) {
        if (*(char *)(iVar3 + 0x90) != '\0') {
          FUN_004b5b10(iVar3);
        }
      }
      else {
        FUN_004a74a0(&DAT_00715b28,*(int *)((int)param_1 + 0x24));
      }
      iVar3 = *(int *)((int)param_1 + 0x24);
      iVar5 = *(int *)(DAT_0073b0d0 + iVar3 + 0x99 + iVar3 * 0xa8);
      iVar3 = DAT_0073b0d0 + iVar3 + iVar3 * 0xa8;
      if (iVar5 == -1) {
        iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 4) * 9 + 4 + DAT_0073b168) +
                                 *(int *)(iVar3 + 8) * 4) * 0x10 + DAT_0073b120);
      }
      DAT_00715e9c = DAT_00715e9c + *(int *)(DAT_0073b5c8 + 0x94 + iVar5 * 0xac) / 3;
      DAT_00715ea0 = DAT_00715ea0 + *(int *)(DAT_0073b5c8 + 0x94 + iVar5 * 0xac);
      *(undefined4 *)(DAT_0073b0d0 + *(int *)((int)param_1 + 0x24) * 0xa9 + 0x99) = 0xffffffff;
    }
  }
  local_48 = 0;
  if (0 < *(int *)((int)param_1 + 0xac)) {
    local_4c = (int *)((int)param_1 + 0x7c);
    do {
      iVar3 = *local_4c;
      pfVar6 = (float *)(iVar3 * 0xa9 + 0x10 + DAT_0073b0d0);
      pfVar4 = (float *)FUN_004b4110(local_40,(float *)(DAT_0073b0d0 +
                                                        *(int *)((int)param_1 + 0x24) * 0xa9 + 0x10)
                                     ,pfVar6);
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar6 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar6 = pfVar6 + 1;
      }
      iVar5 = iVar3 * 0xa9 + DAT_0073b0d0;
      if (*(int *)(iVar5 + 0xa5) == 0) {
        if (*(char *)(iVar5 + 0x90) != '\0') {
          FUN_004b5b10(iVar5);
        }
      }
      else {
        FUN_004a74a0(&DAT_00715b28,iVar3);
      }
      FUN_004a7670(iVar3);
      local_48 = local_48 + 1;
      local_4c = local_4c + 1;
    } while (local_48 < *(int *)((int)param_1 + 0xac));
  }
  return;
}



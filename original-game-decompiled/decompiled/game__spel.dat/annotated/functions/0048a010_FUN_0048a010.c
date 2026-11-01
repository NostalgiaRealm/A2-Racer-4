
/* ==== FUN_0048a010 @ 0048a010 ==== 
 * signature: undefined4 __fastcall FUN_0048a010(int param_1)
 * body: 0048a010-0048a183
 */

undefined4 __fastcall FUN_0048a010(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  float local_1c;
  float local_18 [3];
  float local_c [3];
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x360) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    if ((*(char *)(param_1 + 0x1a) != '\0') && (*(int *)(param_1 + 0x34) == 3)) {
      FUN_0048f0d0(local_c,local_18);
      local_1c = 1.2;
      FUN_0049cb60((void *)(param_1 + 0x38),local_c,local_18,&local_1c);
      *(undefined4 *)(param_1 + 0x34) = 0x1000003;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x2d0);
    *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(param_1 + 0x2d8);
    puVar3 = (undefined4 *)(param_1 + 0x2d0);
    iVar2 = 1;
    if (1 < *(int *)(param_1 + 0x360)) {
      do {
        iVar2 = iVar2 + 1;
        *puVar3 = puVar3[3];
        puVar3[1] = puVar3[4];
        puVar3[2] = puVar3[5];
        puVar3 = puVar3 + 3;
      } while (iVar2 < *(int *)(param_1 + 0x360));
    }
    *(int *)(param_1 + 0x360) = *(int *)(param_1 + 0x360) + -1;
    return uVar4;
  }
  if (*(char *)(param_1 + 0x1a) == '\0') {
    iVar2 = (*(code *)**(undefined4 **)(param_1 + 0x2a0))();
    if (0 < iVar2) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x2a4) + 4);
      iVar2 = FUN_00489e50(iVar2);
      uVar4 = *(undefined4 *)(iVar1 + iVar2 * 4);
    }
    *(undefined4 *)(param_1 + 0x21c) = 0xffffffff;
    return uVar4;
  }
  if (*(int *)(param_1 + 0x34) == 2) {
    if (*(int *)(param_1 + 0x20) == -1) {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x260) + *(int *)(param_1 + 0x1c);
      return 0;
    }
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x260)) {
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
      FUN_0048f0d0(local_18,local_c);
      local_1c = 3.0;
      FUN_0049cb60((void *)(param_1 + 0x38),local_c,local_18,&local_1c);
      *(undefined4 *)(param_1 + 0x34) = 0x1000002;
    }
  }
  return 0;
}



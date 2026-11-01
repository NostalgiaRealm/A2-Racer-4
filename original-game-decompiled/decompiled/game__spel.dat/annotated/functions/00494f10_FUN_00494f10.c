
/* ==== FUN_00494f10 @ 00494f10 ==== 
 * signature: undefined __fastcall FUN_00494f10(int param_1)
 * body: 00494f10-004950ba
 */

void __fastcall FUN_00494f10(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  void *pvVar6;
  char *pcVar7;
  char *pcVar8;
  float10 fVar9;
  longlong lVar10;
  float fStack_20;
  undefined1 local_1c [4];
  char *local_18;
  void *local_14;
  void *local_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e1e4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_0059becc != -1) {
    ExceptionList = &pvStack_c;
    fVar9 = FUN_004a67f0(0x7128b0);
    *(float *)(param_1 + 0x58) = (float)fVar9;
    *(int *)(param_1 + 0x5c) = DAT_0059becc;
    DAT_0059becc = -1;
    iVar2 = FUN_00458b90(*(int *)(param_1 + 0x5c));
    uVar5 = 0xffffffff;
    local_18 = (char *)0x0;
    local_14 = (void *)0x0;
    local_10 = (void *)0x0;
    pcVar7 = &DAT_006fd14c + iVar2 * 0x100;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    pvVar6 = (void *)(~uVar5 - 1);
    uVar3 = FUN_00402a00(local_1c,(uint)pvVar6,'\x01');
    if ((char)uVar3 != '\0') {
      pcVar7 = &DAT_006fd14c + iVar2 * 0x100;
      pcVar8 = local_18;
      for (uVar5 = (uint)pvVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = (uint)pvVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      local_18[(int)pvVar6] = '\0';
      local_14 = pvVar6;
    }
    local_4 = 0;
    (**(code **)(**(int **)(param_1 + 0x34) + 0x48))(local_1c);
    local_4 = 0xffffffff;
    if (local_18 != (char *)0x0) {
      cVar1 = local_18[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(local_18 + -1);
      }
      else {
        local_18[-1] = cVar1 + -1;
      }
    }
  }
  fVar9 = FUN_004a67f0(0x7128b0);
  fVar9 = fVar9 - (float10)*(float *)(param_1 + 0x58);
  fStack_20 = (float)fVar9;
  if ((fVar9 < (float10)2.75) && (*(int *)(param_1 + 0x5c) != -1)) {
    puVar4 = (uint *)FUN_0047bde0(*(int *)(param_1 + 0x34));
    uVar5 = *puVar4;
    lVar10 = __ftol();
    iVar2 = 0xff - (int)lVar10;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0xff < iVar2) {
      iVar2 = 0xff;
    }
    fStack_20 = (float)(uVar5 & 0xffffff | iVar2 << 0x18);
    (**(code **)(**(int **)(param_1 + 0x34) + 0x28))(&fStack_20);
    (**(code **)(**(int **)(param_1 + 0x34) + 0x20))(1);
    ExceptionList = local_14;
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x34) + 0x20))(0);
  ExceptionList = local_10;
  return;
}



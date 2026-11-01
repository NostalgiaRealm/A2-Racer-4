
/* ==== FUN_004d7bb0 @ 004d7bb0 ==== 
 * signature: undefined4 * __cdecl FUN_004d7bb0(undefined4 * param_1, char * param_2)
 * body: 004d7bb0-004d7d11
 */

undefined4 * __cdecl FUN_004d7bb0(undefined4 *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *_Buf;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  char *_MaxCount;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005702b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = FUN_00479930((void *)(*(int *)(param_2 + 4) + 0x18),local_1c);
  local_4 = 0;
  puVar4 = FUN_00479930(*(void **)(param_2 + 4),local_2c);
  uVar2 = *(uint *)(puVar3 + 8);
  param_2 = "";
  if (*(char **)(puVar3 + 4) != (char *)0x0) {
    param_2 = *(char **)(puVar3 + 4);
  }
  if (uVar2 == 0) {
    iVar5 = 0;
  }
  else {
    uVar7 = *(uint *)(puVar4 + 8);
    if ((uVar7 != 0) && (uVar2 <= uVar7)) {
      _Buf = *(char **)(puVar4 + 4);
      _MaxCount = (char *)(uVar7 + (1 - uVar2));
      pcVar6 = _memchr(_Buf,(int)*param_2,(size_t)_MaxCount);
      while (pcVar6 != (char *)0x0) {
        bVar10 = true;
        uVar7 = uVar2;
        pcVar8 = pcVar6;
        pcVar9 = param_2;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar10 = *pcVar8 == *pcVar9;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        } while (bVar10);
        if (bVar10) {
          iVar5 = (int)pcVar6 - *(int *)(puVar4 + 4);
          goto LAB_004d7c86;
        }
        _MaxCount = _Buf + (int)(_MaxCount + (-1 - (int)pcVar6));
        _Buf = pcVar6 + 1;
        pcVar6 = _memchr(_Buf,(int)*param_2,(size_t)_MaxCount);
      }
    }
    iVar5 = -1;
  }
LAB_004d7c86:
  param_1[4] = iVar5;
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 2;
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}




/* ==== FUN_004e60a0 @ 004e60a0 ==== 
 * signature: undefined __fastcall FUN_004e60a0(int param_1)
 * body: 004e60a0-004e61fa
 */

void __fastcall FUN_004e60a0(int param_1)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  void **ppvVar4;
  void *this;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00571bff;
  pvVar2 = *(void **)(param_1 + 0x6c);
  this = *(void **)(param_1 + 0x68);
  local_4 = 5;
  ppvVar4 = &local_c;
  local_c = ExceptionList;
  for (; ExceptionList = ppvVar4, this != pvVar2; this = (void *)((int)this + 0x78)) {
    FUN_004e7600(this,0);
    ppvVar4 = ExceptionList;
  }
  FUN_0054b339(*(LPVOID *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004028f0((void *)(param_1 + 0x54),'\x01');
  iVar3 = *(int *)(param_1 + 0x48);
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar3 + -1));
    }
    else {
      *(char *)(iVar3 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar3 + -1));
    }
    else {
      *(char *)(iVar3 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar3 + -1));
    }
    else {
      *(char *)(iVar3 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar3 + -1));
    }
    else {
      *(char *)(iVar3 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar3 + -1));
    }
    else {
      *(char *)(iVar3 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = local_c;
  return;
}



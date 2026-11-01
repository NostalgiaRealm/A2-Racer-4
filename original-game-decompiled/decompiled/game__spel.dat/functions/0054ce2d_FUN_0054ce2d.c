
/* ==== FUN_0054ce2d @ 0054ce2d ==== 
 * signature: int * __stdcall FUN_0054ce2d(void)
 * body: 0054ce2d-0054ceba
 */

int * FUN_0054ce2d(void)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  size_t sVar5;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  iVar1 = *extraout_ECX;
  if (1 < *(uint *)(iVar1 + 4)) {
    iVar2 = *(int *)(iVar1 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(iVar1 + 4) = iVar2 + -1;
    }
    pvVar3 = operator_new(0x28);
    *(void **)(unaff_EBP + -0x10) = pvVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (pvVar3 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_0054d225();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *extraout_ECX = (int)puVar4;
  }
  FUN_0054d31e();
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    iVar1 = *extraout_ECX;
    sVar5 = _strlen(&DAT_005b7560);
    FUN_00402940((void *)(iVar1 + 0x18),(undefined4 *)&DAT_005b7560,sVar5);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



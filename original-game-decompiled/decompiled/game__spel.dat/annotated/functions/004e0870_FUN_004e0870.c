
/* ==== FUN_004e0870 @ 004e0870 ==== 
 * signature: undefined __thiscall FUN_004e0870(void * this, undefined4 param_1, int param_2)
 * body: 004e0870-004e08ff
 */

void __thiscall FUN_004e0870(void *this,undefined4 param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_1c [16];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005712ff;
  pvStack_c = ExceptionList;
  uVar2 = 0;
  if (*(int *)((int)this + 0x3c) != 0) {
    uVar2 = *(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c) >> 4;
  }
  ExceptionList = &pvStack_c;
  FUN_004d9aa0(*(void **)(param_2 + 8),local_1c,uVar2);
  local_4 = 1;
  FUN_004e5a30((void *)((int)this + 0x34),(int)local_1c);
  cVar1 = (**(code **)(*(int *)this + 0x44))();
  iVar3 = *(int *)((int)this + 0x2c);
  if (cVar1 != '\0') {
    iVar3 = iVar3 + *(int *)(param_2 + 0xc);
  }
  FUN_004d9290(*(void **)(param_2 + 8),iVar3);
  FUN_004e5ab0((void *)((int)this + 0x34),(int)local_1c);
                    /* WARNING: Could not recover jumptable at 0x004e08f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_004e09ec)[*(int *)((int)this + 0x20) + -1])();
  return;
}




/* ==== FUN_004e0720 @ 004e0720 ==== 
 * signature: undefined __thiscall FUN_004e0720(void * this, int param_1)
 * body: 004e0720-004e07b4
 */

void __thiscall FUN_004e0720(void *this,int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_2c [32];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005712c8;
  pvStack_c = ExceptionList;
  if (*(int *)((int)this + 0x3c) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c) >> 4;
  }
  ExceptionList = &pvStack_c;
  FUN_004d9aa0(*(void **)(param_1 + 8),local_2c,uVar2);
  local_4 = 0;
  FUN_004e5a30((void *)((int)this + 0x34),(int)local_2c);
  cVar1 = (**(code **)(*(int *)this + 0x44))();
  if (cVar1 == '\0') {
    iVar3 = *(int *)((int)this + 0x2c);
  }
  else {
    iVar3 = *(int *)(param_1 + 0xc) + *(int *)((int)this + 0x2c);
  }
  FUN_004d9290(*(void **)(param_1 + 8),iVar3);
  FUN_004e5ab0((void *)((int)this + 0x34),(int)local_2c);
                    /* WARNING: Could not recover jumptable at 0x004e07ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_004e0854)[*(int *)((int)this + 0x20) + -1])();
  return;
}



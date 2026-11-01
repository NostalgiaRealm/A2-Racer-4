
/* ==== FUN_004e0a00 @ 004e0a00 ==== 
 * signature: undefined __thiscall FUN_004e0a00(void * this, int param_1)
 * body: 004e0a00-004e0aae
 */

void __thiscall FUN_004e0a00(void *this,int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_104 [80];
  undefined **local_b4;
  undefined4 local_ac;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0057135a;
  pvStack_c = ExceptionList;
  uVar2 = 0;
  local_ac = 0;
  local_b4 = &PTR_FUN_005778c0;
  local_4 = 0;
  if (*(int *)((int)this + 0x3c) != 0) {
    uVar2 = *(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c) >> 4;
  }
  ExceptionList = &pvStack_c;
  FUN_004d9aa0(*(void **)(param_1 + 8),local_104,uVar2);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004e5a30((void *)((int)this + 0x34),(int)local_104);
  cVar1 = (**(code **)(*(int *)this + 0x44))();
  if (cVar1 == '\0') {
    iVar3 = *(int *)((int)this + 0x2c);
  }
  else {
    iVar3 = *(int *)(param_1 + 0xc) + *(int *)((int)this + 0x2c);
  }
  FUN_004d9290(*(void **)(param_1 + 8),iVar3);
  FUN_004e5ab0((void *)((int)this + 0x34),(int)local_104);
                    /* WARNING: Could not recover jumptable at 0x004e0aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_004e0d48)[*(int *)((int)this + 0x20) + -1])();
  return;
}



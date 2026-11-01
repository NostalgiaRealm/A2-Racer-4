
/* ==== FUN_004e09e9 @ 004e09e9 ==== 
 * signature: undefined __thiscall FUN_004e09e9(void * this, undefined4 param_1, int param_2)
 * body: 004e09e9-004e09eb
 */

void __thiscall FUN_004e09e9(void *this,undefined4 param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBX;
  uint *unaff_ESI;
  undefined1 auStack_100 [80];
  undefined **ppuStack_b0;
  undefined4 uStack_a8;
  void *pvStack_8;
  code *pcStack_4;
  
  *unaff_ESI = *unaff_ESI | (uint)this;
  *(char *)this = *(char *)this + (char)this;
  *(char *)(unaff_EBX + 0x40004e09) = *(char *)(unaff_EBX + 0x40004e09) + (char)unaff_EBX;
  *(uint *)((int)unaff_ESI + -1) = *(uint *)((int)unaff_ESI + -1) | (uint)this;
  pcStack_4 = FUN_0057135a;
  pvStack_8 = ExceptionList;
  uVar2 = 0;
  uStack_a8 = 0;
  ppuStack_b0 = &PTR_FUN_005778c0;
  if (*(int *)((int)this + 0x3c) != 0) {
    uVar2 = *(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c) >> 4;
  }
  ExceptionList = &pvStack_8;
  FUN_004d9aa0(*(void **)(param_2 + 8),auStack_100,uVar2);
  FUN_004e5a30((void *)((int)this + 0x34),(int)auStack_100);
  cVar1 = (**(code **)(*(int *)this + 0x44))();
  if (cVar1 == '\0') {
    iVar3 = *(int *)((int)this + 0x2c);
  }
  else {
    iVar3 = *(int *)(param_2 + 0xc) + *(int *)((int)this + 0x2c);
  }
  FUN_004d9290(*(void **)(param_2 + 8),iVar3);
  FUN_004e5ab0((void *)((int)this + 0x34),(int)auStack_100);
                    /* WARNING: Could not recover jumptable at 0x004e0aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_004e0d48)[*(int *)((int)this + 0x20) + -1])();
  return;
}



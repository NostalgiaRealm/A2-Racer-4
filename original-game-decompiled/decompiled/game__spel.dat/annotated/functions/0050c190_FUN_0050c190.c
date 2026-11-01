
/* ==== FUN_0050c190 @ 0050c190 ==== 
 * signature: undefined4 * __thiscall FUN_0050c190(void * this, int param_1, int param_2)
 * body: 0050c190-0050c2cc
 */

undefined4 * __thiscall FUN_0050c190(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *this_00;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_005739c1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)**(undefined4 **)(param_1 + 0x8c))();
  iVar3 = (**(code **)**(undefined4 **)(param_2 + 0x8c))();
  if ((iVar2 == 0) || (iVar3 == 0)) {
    pvVar4 = operator_new(0x40);
    uStack_4 = 2;
    if (pvVar4 == (void *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      this_00 = FUN_005100d0(pvVar4,this,param_1,param_2);
    }
    uStack_4 = 0xffffffff;
    goto LAB_0050c29c;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((*(byte *)(iVar2 + 8) & 3) == 0) && ((*(byte *)(iVar3 + 8) & 3) == 0)) {
    pvVar4 = operator_new(0x88);
    uStack_4 = 1;
    if (pvVar4 == (void *)0x0) {
LAB_0050c23f:
      this_00 = (undefined4 *)0x0;
    }
    else {
      this_00 = FUN_005397a0(pvVar4,iVar1,this);
    }
  }
  else {
    pvVar4 = operator_new(0x98);
    uStack_4 = 0;
    if (pvVar4 == (void *)0x0) goto LAB_0050c23f;
    this_00 = FUN_00510700(pvVar4,iVar1,this);
  }
  uStack_4 = 0xffffffff;
  FUN_005399a0(this_00,param_1,param_2,iVar2 + 0x14,iVar3 + 0x14);
LAB_0050c29c:
  pvVar4 = *(void **)(param_2 + 0x9c);
  FUN_0050aba0(*(void **)(param_1 + 0x9c),(int)this_00);
  FUN_0050aba0(pvVar4,(int)this_00);
  ExceptionList = pvStack_c;
  return this_00;
}



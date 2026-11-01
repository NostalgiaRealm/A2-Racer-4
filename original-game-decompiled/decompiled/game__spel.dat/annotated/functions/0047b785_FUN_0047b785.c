
/* ==== FUN_0047b785 @ 0047b785 ==== 
 * signature: int __thiscall FUN_0047b785(void * this, void * param_1, undefined4 * param_2)
 * body: 0047b785-0047b78f
 */

int __thiscall FUN_0047b785(void *this,void *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_20 [5];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056ba7d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_0047b100((int)param_1);
  if (iVar2 < 3) {
    iVar2 = -3;
  }
  else {
    FUN_0047ad30(auStack_20,param_1);
    iVar2 = 0;
    puVar5 = auStack_20;
    uStack_4 = 0;
    if (0 < *(int *)((int)this + 8)) {
      param_1 = (void *)0x0;
      puVar1 = param_2;
      puVar4 = puVar5;
      do {
        puVar5 = puVar1;
        iVar3 = FUN_0047a310((void *)(*(int *)((int)this + 4) + (int)param_1),puVar4,puVar5,iVar2);
        if (iVar3 < 0) {
          uStack_4 = 0xffffffff;
          FUN_0047ac70(auStack_20);
          ExceptionList = pvStack_c;
          return iVar3;
        }
        FUN_0047b050((int)puVar4);
        iVar3 = FUN_0047b100((int)puVar5);
        if (iVar3 < 3) goto LAB_0047b846;
        iVar2 = iVar2 + 1;
        param_1 = (void *)((int)param_1 + 0x18);
        puVar1 = puVar4;
        puVar4 = puVar5;
      } while (iVar2 < *(int *)((int)this + 8));
    }
    FUN_0047aeb0(param_2,puVar5);
LAB_0047b846:
    uStack_4 = 0xffffffff;
    FUN_0047ac70(auStack_20);
    iVar2 = 0;
  }
  ExceptionList = pvStack_c;
  return iVar2;
}



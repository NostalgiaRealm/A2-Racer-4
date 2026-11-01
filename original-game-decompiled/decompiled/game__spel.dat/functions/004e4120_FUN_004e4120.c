
/* ==== FUN_004e4120 @ 004e4120 ==== 
 * signature: undefined __thiscall FUN_004e4120(void * this, int param_1)
 * body: 004e4120-004e4203
 */

void __thiscall FUN_004e4120(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iStack_64;
  undefined **appuStack_54 [2];
  undefined1 auStack_4c [16];
  undefined **local_3c [2];
  undefined1 auStack_34 [16];
  undefined **appuStack_24 [4];
  undefined1 uStack_14;
  void *pvStack_c;
  code *pcStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_005719a0;
  pvStack_c = ExceptionList;
  iStack_64 = param_1;
  ExceptionList = &pvStack_c;
  (**(code **)(**(int **)((int)this + 0x10) + 8))(local_3c);
  pvStack_c = (void *)0x0;
  piVar1 = (int *)(**(code **)(*(int *)this + 0x18))();
  (**(code **)(*piVar1 + 8))(&stack0xffffffa4,param_1);
  uStack_14 = 1;
  iVar2 = FUN_004e50e0(auStack_34,*(int *)((int)this + 0x14),&iStack_64,auStack_4c);
  bVar3 = *(int *)(iVar2 + 0x10) == 0;
  appuStack_24[0] = &PTR_FUN_005778c0;
  iStack_64 = 0x4e41a4;
  FUN_004cf650(appuStack_24);
  if (*(int *)((int)this + 0xc) == 0) {
    if (bVar3) {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 8);
    }
  }
  else if (!bVar3) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 8);
  }
  uStack_4 = uStack_4 & 0xffffff00;
  appuStack_54[0] = &PTR_FUN_005778c0;
  iStack_64 = 0x4e41d7;
  FUN_004cf650(appuStack_54);
  uStack_4 = 0xffffffff;
  local_3c[0] = &PTR_FUN_005778c0;
  iStack_64 = 0x4e41f0;
  FUN_004cf650(local_3c);
  ExceptionList = pvStack_c;
  return;
}



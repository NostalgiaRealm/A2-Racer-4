
/* ==== FUN_004e5020 @ 004e5020 ==== 
 * signature: undefined __thiscall FUN_004e5020(void * this, undefined1 * param_1)
 * body: 004e5020-004e50df
 */

void __thiscall FUN_004e5020(void *this,undefined1 *param_1)

{
  void *pvVar1;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  undefined1 local_54 [8];
  undefined1 auStack_4c [8];
  undefined **appuStack_44 [6];
  undefined **appuStack_2c [6];
  void *pvStack_14;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00571ae8;
  pvStack_c = ExceptionList;
  puStack_64 = local_54;
  puStack_60 = param_1;
  ExceptionList = &pvStack_c;
  (**(code **)(**(int **)((int)this + 8) + 8))();
  pvStack_c = (void *)0x0;
  pvVar1 = (void *)(**(code **)(**(int **)((int)this + 0x14) + 8))(appuStack_2c,param_1);
  pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,1);
  puStack_60 = (undefined1 *)FUN_004e50e0(auStack_4c,*(int *)((int)this + 0x10),pvVar1,&puStack_64);
  puStack_64 = param_1;
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  (**(code **)(**(int **)((int)this + 0xc) + 0xc))();
  pvStack_c._0_1_ = 1;
  appuStack_44[0] = &PTR_FUN_005778c0;
  FUN_004cf650(appuStack_44);
  pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
  appuStack_2c[0] = &PTR_FUN_005778c0;
  FUN_004cf650(appuStack_2c);
  pvStack_c = (void *)0xffffffff;
  FUN_004cf650((undefined4 *)&stack0xffffffa4);
  ExceptionList = pvStack_14;
  return;
}



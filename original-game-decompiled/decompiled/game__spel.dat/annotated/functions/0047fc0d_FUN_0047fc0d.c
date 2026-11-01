
/* ==== FUN_0047fc0d @ 0047fc0d ==== 
 * signature: int * __thiscall FUN_0047fc0d(void * this, undefined4 * param_1, void * param_2)
 * body: 0047fc0d-0047fc0f
 */

int * __thiscall FUN_0047fc0d(void *this,undefined4 *param_1,void *param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  int iStack_14;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056c213;
  pvStack_c = ExceptionList;
  auStack_2c[0] = param_2._0_1_;
  uVar3 = 0xffffffff;
  iStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  pcVar4 = &DAT_005aa03c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &pvStack_c;
  FUN_00402940(auStack_2c,(undefined4 *)&DAT_005aa03c,~uVar3 - 1);
  uStack_4 = 0;
  FUN_004877e0(auStack_1c,(int)param_1,(int)auStack_2c);
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  if (iStack_28 != 0) {
    cVar1 = *(char *)(iStack_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_28 + -1));
    }
    else {
      *(char *)(iStack_28 + -1) = cVar1 + -1;
    }
  }
  iStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  if (iStack_14 == 0) {
    piVar2 = FUN_00484390(*(void **)((int)this + 4),param_2,param_1);
  }
  else {
    piVar2 = FUN_00484360(*(void **)((int)this + 4),param_2,(int)auStack_1c,param_1);
  }
  if (iStack_18 != 0) {
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((LPVOID)(iStack_18 + -1));
    }
    else {
      *(char *)(iStack_18 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return piVar2;
}



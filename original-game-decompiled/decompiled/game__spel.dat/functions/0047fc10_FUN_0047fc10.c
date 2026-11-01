
/* ==== FUN_0047fc10 @ 0047fc10 ==== 
 * signature: int * __thiscall FUN_0047fc10(void * this, undefined4 * param_1, void * param_2)
 * body: 0047fc10-0047fd16
 */

int * __thiscall FUN_0047fc10(void *this,undefined4 *param_1,void *param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056c213;
  local_c = ExceptionList;
  local_2c[0] = param_2._0_1_;
  uVar3 = 0xffffffff;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  pcVar4 = &DAT_005aa03c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_00402940(local_2c,(undefined4 *)&DAT_005aa03c,~uVar3 - 1);
  local_4 = 0;
  FUN_004877e0(local_1c,(int)param_1,(int)local_2c);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (local_14 == 0) {
    piVar2 = FUN_00484390(*(void **)((int)this + 4),param_2,param_1);
  }
  else {
    piVar2 = FUN_00484360(*(void **)((int)this + 4),param_2,(int)local_1c,param_1);
  }
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((LPVOID)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return piVar2;
}




/* ==== FUN_004e3ed0 @ 004e3ed0 ==== 
 * signature: int * __thiscall FUN_004e3ed0(void * this, undefined1 param_1)
 * body: 004e3ed0-004e4013
 */

int * __thiscall FUN_004e3ed0(void *this,undefined1 param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 auStack_3c [4];
  undefined1 local_2c [4];
  char *pcStack_28;
  char *pcStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  int iStack_10;
  void *pvStack_c;
  code *pcStack_8;
  int *local_4;
  
  local_4 = (int *)0xffffffff;
  pcStack_8 = FUN_00571980;
  pvStack_c = ExceptionList;
  local_1c = CONCAT31(local_1c._1_3_,param_1);
  ExceptionList = &pvStack_c;
  FUN_004028f0(&local_1c,'\0');
  local_2c[0] = param_1;
  local_4 = (int *)0x0;
  FUN_004028f0(local_2c,'\0');
  local_4 = (int *)CONCAT31(local_4._1_3_,1);
  (**(code **)(*(int *)this + 0x30))(&local_1c,local_2c);
  puVar3 = (undefined4 *)FUN_0054eddc((undefined4 *)&stack0xffffffbc,0x40);
  piVar2 = local_4;
  if (local_4 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*local_4 + 4) + (int)local_4;
  }
  (*(code *)*puVar3)(iVar5,puVar3[1]);
  puVar3 = (undefined4 *)FUN_0054ee09(auStack_3c,0x14);
  if (piVar2 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*piVar2 + 4) + (int)piVar2;
  }
  (*(code *)*puVar3)(iVar5,puVar3[1]);
  pcVar4 = pcStack_20;
  if (pcStack_20 == (char *)0x0) {
    pcVar4 = "";
  }
  FUN_004d4cd0(piVar2,pcVar4);
  if (pcStack_28 == (char *)0x0) {
    pcStack_28 = "";
  }
  FUN_004d4cd0(piVar2,pcStack_28);
  if (pcStack_20 != (char *)0x0) {
    cVar1 = pcStack_20[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(pcStack_20 + -1);
    }
    else {
      pcStack_20[-1] = cVar1 + -1;
    }
  }
  pcStack_20 = (char *)0x0;
  local_1c = 0;
  uStack_18 = 0;
  if (iStack_10 != 0) {
    cVar1 = *(char *)(iStack_10 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((LPVOID)(iStack_10 + -1));
    }
    else {
      *(char *)(iStack_10 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_4;
  return piVar2;
}




/* ==== FUN_004e5650 @ 004e5650 ==== 
 * signature: undefined __thiscall FUN_004e5650(void * this, void * param_1)
 * body: 004e5650-004e57dc
 */

void __thiscall FUN_004e5650(void *this,void *param_1)

{
  char cVar1;
  code cVar2;
  undefined1 *puVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int iStack_18;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00571b68;
  local_c = ExceptionList;
  if ((*(char *)((int)this + 0xc) == '\0') &&
     (((int)param_1 < *(int *)((int)this + 4) || (*(int *)((int)this + 8) < (int)param_1)))) {
    local_2c[0] = param_1._0_1_;
    uVar4 = 0xffffffff;
    pcVar5 = &DAT_00712694;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    ExceptionList = &local_c;
    FUN_00402940(local_2c,(undefined4 *)&DAT_00712694,~uVar4 - 1);
    uVar4 = 0xffffffff;
    local_4 = 0;
    pcVar5 = &DAT_00712694;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(&stack0xffffffc4,(undefined4 *)&DAT_00712694,~uVar4 - 1);
    local_4._0_1_ = 1;
    puVar3 = FUN_004d7610(local_1c);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004d6900(0xbbf,puVar3,&stack0xffffffc4,local_2c);
    if (pcStack_8 != (code *)0x0) {
      cVar2 = pcStack_8[-1];
      if ((cVar2 == (code)0x0) || (cVar2 == (code)0xff)) {
        FUN_0054b339(pcStack_8 + -1);
      }
      else {
        pcStack_8[-1] = (code)((char)cVar2 + -1);
      }
    }
    pcStack_8 = (code *)0x0;
    local_4 = 0;
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
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
        ExceptionList = param_1;
        return;
      }
      FUN_0054b339((char *)(iStack_18 + -1));
    }
  }
  ExceptionList = param_1;
  return;
}



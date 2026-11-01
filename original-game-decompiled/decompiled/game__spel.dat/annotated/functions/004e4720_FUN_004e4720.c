
/* ==== FUN_004e4720 @ 004e4720 ==== 
 * signature: undefined __thiscall FUN_004e4720(void * this, void * param_1)
 * body: 004e4720-004e48c9
 */

void __thiscall FUN_004e4720(void *this,void *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  void *pvVar3;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  int local_1c [3];
  void *pvStack_10;
  void *pvStack_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00571a48;
  pvStack_c = ExceptionList;
  if (*(int *)((int)this + 8) == -2) {
    ExceptionList = &pvStack_c;
    puVar2 = FUN_004e4580(local_2c,*(int *)((int)this + 0xc));
    local_4 = 0;
    puVar2 = FUN_004797e0(local_3c,&DAT_005b7514,(int)puVar2);
    local_4._0_1_ = 1;
    FUN_004093c0(param_1,puVar2,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004028f0(local_3c,'\x01');
    local_4 = 0xffffffff;
    FUN_004028f0(local_2c,'\x01');
  }
  else {
    ExceptionList = &pvStack_c;
    FUN_004e4580(local_2c,*(int *)((int)this + 0xc));
    local_4 = 2;
    puVar2 = FUN_004d7610(local_3c);
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_004093c0(param_1,puVar2,0,0xffffffff);
    if (local_38 != 0) {
      cVar1 = *(char *)(local_38 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(local_38 + -1));
      }
      else {
        *(char *)(local_38 + -1) = cVar1 + -1;
      }
    }
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_4 = 0xffffffff;
    if (local_28 != 0) {
      cVar1 = *(char *)(local_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(local_28 + -1));
      }
      else {
        *(char *)(local_28 + -1) = cVar1 + -1;
      }
    }
  }
  pvVar3 = (void *)(**(code **)(**(int **)((int)this + 0x10) + 4))(local_1c);
  pcStack_8 = (code *)0x4;
  FUN_004093c0(param_1,pvVar3,0,0xffffffff);
  if (local_1c[0] != 0) {
    cVar1 = *(char *)(local_1c[0] + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_1c[0] + -1) = cVar1 + -1;
      ExceptionList = pvStack_10;
      return;
    }
    FUN_0054b339((char *)(local_1c[0] + -1));
  }
  ExceptionList = pvStack_10;
  return;
}



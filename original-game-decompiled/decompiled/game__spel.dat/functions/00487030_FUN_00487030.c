
/* ==== FUN_00487030 @ 00487030 ==== 
 * signature: undefined __thiscall FUN_00487030(void * this, void * param_1)
 * body: 00487030-00487144
 */

void __thiscall FUN_00487030(void *this,void *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  int *piStack_30;
  undefined4 local_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056d32f;
  local_c = ExceptionList;
  iVar4 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)((int)this + 0x98)) {
    do {
      puVar2 = FUN_004873b0(local_1c);
      local_4 = 0;
      FUN_0047c9a0((undefined1 *)&local_2c,(undefined1 *)((int)this + 0x34),(int)puVar2);
      local_4 = CONCAT31(local_4._1_3_,2);
      if (local_18 != 0) {
        cVar1 = *(char *)(local_18 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)(local_18 + -1));
        }
        else {
          *(char *)(local_18 + -1) = cVar1 + -1;
        }
      }
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      piVar3 = FUN_00484390(param_1,this,&local_2c);
      (**(code **)(*piVar3 + 0x20))(1);
      piStack_30 = piVar3;
      FUN_004a5620(*(void **)((int)this + 0x88),
                   *(undefined4 **)((int)*(void **)((int)this + 0x88) + 8),1,&piStack_30);
      local_4 = 0xffffffff;
      if (iStack_28 != 0) {
        cVar1 = *(char *)(iStack_28 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((LPVOID)(iStack_28 + -1));
        }
        else {
          *(char *)(iStack_28 + -1) = cVar1 + -1;
        }
      }
      iVar4 = iVar4 + 1;
      iStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
    } while (iVar4 < *(int *)((int)this + 0x98));
  }
  ExceptionList = local_c;
  return;
}




/* ==== FUN_0048abe0 @ 0048abe0 ==== 
 * signature: undefined __thiscall FUN_0048abe0(void * this, int param_1)
 * body: 0048abe0-0048ae6c
 */

void __thiscall FUN_0048abe0(void *this,int param_1)

{
  char cVar1;
  DWORD DVar2;
  undefined1 *puVar3;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_14;
  undefined4 uStack_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056d7ed;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DVar2 = GetTickCount();
  *(DWORD *)((int)this + 0x260) = DVar2;
  FUN_00489e80((int)this + 0x38,(uint *)((int)this + 0x34));
  FUN_00489e80((int)this + 0xb0,(uint *)((int)this + 0x30));
  if (param_1 != 5) {
    FUN_0048ef20((int)this);
    if (*(char *)((int)this + 0x3c0) == '\0') {
      puVar3 = FUN_0049df90(local_1c,&DAT_005abb58);
      local_4 = 0;
      (**(code **)(**(int **)((int)this + 0x230) + 0x48))(puVar3);
      local_4 = 0xffffffff;
      if (iStack_18 != 0) {
        cVar1 = *(char *)(iStack_18 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)(iStack_18 + -1));
        }
        else {
          *(char *)(iStack_18 + -1) = cVar1 + -1;
        }
      }
      iStack_18 = 0;
      pvStack_14 = (void *)0x0;
      uStack_10 = 0;
      if (*(char *)((int)this + 0x18) != '\0') {
        if (*(char *)((int)this + 0x19) == '\0') {
          FUN_0048f720((int)this);
        }
        else {
          FUN_0048f250(this);
        }
      }
      FUN_0048a190((int)this);
      FUN_0048a230(this);
      FUN_00489c10(this);
    }
    else {
      FUN_0048fc90((int)this);
    }
    if ((DAT_00712784 == 1) && ((DAT_005ab3c0 & 0x100) == 0)) {
      (**(code **)(**(int **)((int)this + 0x2c) + 0x20))(0);
      if (*(int **)((int)this + 0x250) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0x250) + 0x20))(0);
      }
    }
    else {
      (**(code **)(**(int **)((int)this + 0x2c) + 0x20))(1);
      if (*(char *)((int)this + 0x238) == '\0') {
        (**(code **)(**(int **)((int)this + 0x23c) + 0x20))(0);
        (**(code **)(**(int **)((int)this + 0x240) + 0x20))(0);
      }
      if (*(char *)((int)this + 0x370) == '\0') {
        *(undefined1 *)((int)this + 0x370) = 1;
        FUN_00489df0((undefined4 *)((int)this + 0x364),'\0');
      }
    }
    if ((DAT_00712784 == 1) && ((DAT_005ab3c0 & 0x40) == 0)) {
      (**(code **)(**(int **)((int)this + 0x28) + 0x20))(0);
    }
    else {
      (**(code **)(**(int **)((int)this + 0x28) + 0x20))(1);
      if (*(char *)((int)this + 0x38c) == '\0') {
        *(undefined1 *)((int)this + 0x38c) = 1;
        FUN_00489df0((undefined4 *)((int)this + 0x380),'\0');
      }
      if (*(char *)((int)this + 0x3a8) == '\0') {
        *(undefined1 *)((int)this + 0x3a8) = 1;
        FUN_00489df0((undefined4 *)((int)this + 0x39c),'\0');
      }
    }
    if ((DAT_00712784 == 1) && ((DAT_005ab3c0 & 4) == 0)) {
      (**(code **)(**(int **)((int)this + 0x264) + 0x20))(0);
      (**(code **)(**(int **)((int)this + 0x268) + 0x20))(0);
      (**(code **)(**(int **)((int)this + 0x26c) + 0x20))(0);
      (**(code **)(**(int **)((int)this + 0x270) + 0x20))(0);
    }
    ExceptionList = pvStack_14;
    return;
  }
  FUN_0048ef80(this,0);
  FUN_0048f040(this,0);
  ExceptionList = local_c;
  return;
}



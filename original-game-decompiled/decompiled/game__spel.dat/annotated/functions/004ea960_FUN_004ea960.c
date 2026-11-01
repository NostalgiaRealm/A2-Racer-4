
/* ==== FUN_004ea960 @ 004ea960 ==== 
 * signature: int __thiscall FUN_004ea960(void * this, undefined1 * param_1)
 * body: 004ea960-004eaa47
 */

int __thiscall FUN_004ea960(void *this,undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 local_48 [44];
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00572228;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_004ea810(this,(int)param_1);
  if (iVar2 == -1) {
    FUN_004edea0(local_48,param_1);
    local_4 = 0;
    FUN_004ec7e0(*(void **)((int)this + 0x54),
                 *(undefined4 **)((int)*(void **)((int)this + 0x54) + 8),1,(int)local_48);
    local_4 = 0xffffffff;
    if (local_1c != 0) {
      cVar1 = *(char *)(local_1c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(local_1c + -1));
      }
      else {
        *(char *)(local_1c + -1) = cVar1 + -1;
      }
    }
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    FUN_005586c5(local_48,8,5,FUN_004ec6e0);
    ExceptionList = local_c;
    return 0;
  }
  iVar2 = FUN_004ee040(*(int *)(*(int *)((int)this + 0x54) + 4) + iVar2 * 0x3c);
  ExceptionList = local_c;
  return iVar2;
}



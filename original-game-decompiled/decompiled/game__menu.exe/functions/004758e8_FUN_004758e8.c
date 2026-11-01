
/* ==== FUN_004758e8 @ 004758e8 ==== 
 * signature: undefined __register FUN_004758e8(int * param_1)
 * body: 004758e8-0047594a
 */

void FUN_004758e8(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 extraout_EDX;
  tagPOINT tStack_10;
  
  if (*(char *)((int)param_1 + 0x133) != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x4c))();
    if (cVar1 != '\0') {
      GetCursorPos(&tStack_10);
      piVar2 = FUN_0042d198(&tStack_10,CONCAT31((int3)((uint)extraout_EDX >> 8),1));
      *(bool *)((int)param_1 + 0x145) = param_1 != piVar2;
      if (param_1 != piVar2) {
        FUN_0042f720((int)param_1,0xb014,0,0);
      }
      else {
        FUN_0042f720((int)param_1,0xb013,0,0);
      }
    }
  }
  return;
}



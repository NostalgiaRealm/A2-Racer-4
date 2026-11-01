
/* ==== FUN_00468284 @ 00468284 ==== 
 * signature: undefined FUN_00468284(void)
 * body: 00468284-0046830f
 */

void FUN_00468284(int *param_1)

{
  POINT pt;
  BOOL BVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_EDX;
  LONG LVar4;
  LONG LVar5;
  RECT RStack_24;
  LONG LStack_14;
  LONG LStack_10;
  tagPOINT tStack_c;
  
  GetCursorPos(&tStack_c);
  FUN_0042e2d8(param_1,&tStack_c.x,&LStack_14);
  LVar4 = LStack_14;
  LVar5 = LStack_10;
  (**(code **)(*param_1 + 0x40))(param_1,&RStack_24);
  pt.y = LVar5;
  pt.x = LVar4;
  BVar1 = PtInRect(&RStack_24,pt);
  if (((BVar1 != 0) &&
      (piVar2 = FUN_0042d198(&tStack_c,CONCAT31((int3)((uint)extraout_EDX >> 8),1)),
      param_1 == piVar2)) &&
     (iVar3 = (**(code **)(*param_1 + 0x94))(param_1,LStack_14,LStack_10), iVar3 == 1)) {
    if (*(char *)((int)param_1 + 0x181) != '\0') {
      return;
    }
    (**(code **)(*param_1 + 0xa4))();
    return;
  }
  if (*(char *)((int)param_1 + 0x181) != '\0') {
    (**(code **)(*param_1 + 0xa8))();
  }
  return;
}



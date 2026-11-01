
/* ==== TOleControl.dyn_b005 @ 00470f98 ==== 
 * signature: undefined TOleControl.dyn_b005(void)
 * body: 00470f98-0047104e
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TOleControl_dyn_b005(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  BOOL BVar3;
  WORD aWStack_3c [2];
  undefined4 uStack_38;
  HACCEL pHStack_34;
  ushort uStack_30;
  tagMSG tStack_28;
  
  cVar1 = FUN_00403178(param_1,param_2,param_3);
  if (cVar1 != '\0') {
    uStack_38 = 0x10;
    iVar2 = (**(code **)(*(int *)param_1[0x82] + 0xc))();
    if ((iVar2 == 0) && (uStack_30 != 0)) {
      FUN_00402c30(&tStack_28.hwnd,0x1c,0);
      tStack_28.hwnd = (HWND)FUN_004349e0(param_1);
      tStack_28.message = 0x100;
      tStack_28.wParam = *(WPARAM *)(param_2 + 4);
      tStack_28.lParam = *(LPARAM *)(param_2 + 8);
      BVar3 = IsAccelerator(pHStack_34,(uint)uStack_30,&tStack_28,aWStack_3c);
      if (BVar3 != 0) {
        (**(code **)(*(int *)param_1[0x82] + 0x10))();
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
    }
  }
  TWinControl_dyn_b005((int)param_1,param_2);
  return;
}



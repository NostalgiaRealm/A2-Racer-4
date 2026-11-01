
/* ==== TGDIHintWindow.vmt_0c4 @ 00466244 ==== 
 * signature: undefined TGDIHintWindow.vmt_0c4(void)
 * body: 00466244-00466280
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TGDIHintWindow_vmt_0c4(int *param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  HWND hWnd;
  BOOL BVar3;
  
  uVar2 = THintWindow_vmt_0c4(param_1,param_2);
  bVar1 = FUN_00434cdc((int)param_1);
  if (bVar1) {
    hWnd = (HWND)FUN_004349e0(param_1);
    BVar3 = IsWindowVisible(hWnd);
    if (BVar3 == 0) {
      FUN_0040c968(param_1 + 0x80);
    }
  }
  return uVar2;
}



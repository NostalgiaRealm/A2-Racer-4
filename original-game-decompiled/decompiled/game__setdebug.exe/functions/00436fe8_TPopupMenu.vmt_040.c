
/* ==== TPopupMenu.vmt_040 @ 00436fe8 ==== 
 * signature: undefined TPopupMenu.vmt_040(void)
 * body: 00436fe8-0043709b
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TPopupMenu_vmt_040(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  HMENU hMenu;
  int nReserved;
  HWND hWnd;
  RECT *prcRect;
  int iStack_18;
  int iStack_14;
  
  FUN_0040e594(param_2,param_3,&iStack_18);
  param_1[0x12] = iStack_18;
  param_1[0x13] = iStack_14;
  FUN_00436f54(param_1);
  (**(code **)(*param_1 + 0x3c))(param_1,param_1);
  FUN_00435454(param_1[10],'\0');
  FUN_00435924(param_1[10],'\0');
  FUN_00432f04((int *)param_1[10]);
  FUN_00436208(param_1);
  uVar1 = FUN_00436f9c((int)param_1);
  uVar1 = (uint)(*(ushort *)
                  (&DAT_0044684c + (uint)*(byte *)(param_1 + 0x14) * 2 + (uVar1 & 0x7f) * 6) |
                *(ushort *)(&DAT_00446858 + (uint)*(byte *)(param_1 + 0x16) * 2)) |
          (uint)*(byte *)((int)param_1 + 0x59) << 10;
  prcRect = (RECT *)0x0;
  hWnd = *(HWND *)(DAT_004477b4 + 0x10);
  nReserved = 0;
  hMenu = (HMENU)FUN_00432fe8(param_1[10]);
  TrackPopupMenu(hMenu,uVar1,param_2,param_3,nReserved,hWnd,prcRect);
  return;
}



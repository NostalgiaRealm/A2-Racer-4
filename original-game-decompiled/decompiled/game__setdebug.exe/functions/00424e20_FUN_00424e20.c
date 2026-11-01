
/* ==== FUN_00424e20 @ 00424e20 ==== 
 * signature: undefined __register FUN_00424e20(int * param_1, char param_2, int param_3)
 * body: 00424e20-00424ee1
 */

void FUN_00424e20(int *param_1,char param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  tagPOINT tStack_1c;
  LONG LStack_14;
  LONG LStack_10;
  
  uVar1 = FUN_00402e8c(param_1,(int)&PTR_TWinControl_vmt_000_00438554);
  if (((char)uVar1 != '\0') && (*(char *)((int)param_1 + 0x8b) != '\x01')) {
    piVar2 = FUN_0040a9f4((int *)&DAT_0040d94c,'\x01',(undefined4 *)PTR_PTR_00446ca0);
    FUN_0040346c(piVar2);
  }
  FUN_004257b4(param_1);
  if ((DAT_0044774c == 0) || (DAT_0044774c == -1)) {
    DAT_0044774c = 0;
    if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
      GetCursorPos(&tStack_1c);
      FUN_00424398(param_1,&tStack_1c.x,&LStack_14);
      tStack_1c.x = LStack_14;
      tStack_1c.y = LStack_10;
      uVar1 = FUN_004069e8((undefined2 *)&tStack_1c);
      FUN_00425780((int)param_1,0x202,0,uVar1);
    }
    if (param_3 < 0) {
      param_3 = *(int *)(DAT_0044773c + 8);
    }
    if (DAT_0044774c != -1) {
      FUN_00422d74(param_1,param_2,param_3);
    }
  }
  return;
}




/* ==== FUN_0042edc0 @ 0042edc0 ==== 
 * signature: undefined __register FUN_0042edc0(int * param_1, char param_2, int param_3)
 * body: 0042edc0-0042ee81
 */

void FUN_0042edc0(int *param_1,char param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  tagPOINT tStack_1c;
  LONG LStack_14;
  LONG LStack_10;
  
  uVar1 = FUN_00403114(param_1,(int)&PTR_TWinControl_vmt_000_00442cf0);
  if (((char)uVar1 != '\0') && (*(char *)((int)param_1 + 0x8b) != '\x01')) {
    piVar2 = FUN_0040b694((int *)&DAT_0040ea0c,'\x01',(undefined4 *)PTR_PTR_004ab8e8);
    FUN_004036f4(piVar2);
  }
  FUN_0042f754(param_1);
  if ((DAT_004ac75c == 0) || (DAT_004ac75c == -1)) {
    DAT_004ac75c = 0;
    if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
      GetCursorPos(&tStack_1c);
      FUN_0042e2d8(param_1,&tStack_1c.x,&LStack_14);
      tStack_1c.x = LStack_14;
      tStack_1c.y = LStack_10;
      uVar1 = FUN_004070fc((undefined2 *)&tStack_1c);
      FUN_0042f720((int)param_1,0x202,0,uVar1);
    }
    if (param_3 < 0) {
      param_3 = *(int *)(DAT_004ac74c + 8);
    }
    if (DAT_004ac75c != -1) {
      FUN_0042ccb4(param_1,param_2,param_3);
    }
  }
  return;
}



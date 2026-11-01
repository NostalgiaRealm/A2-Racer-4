
/* ==== FUN_00427d50 @ 00427d50 ==== 
 * signature: undefined FUN_00427d50(void)
 * body: 00427d50-00427e45
 */

void FUN_00427d50(int *param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  LPARAM lParam;
  tagPOINT tStack_20;
  LONG LStack_18;
  LONG LStack_14;
  
  if (*param_2 == 0x112) {
    tStack_20.x = 0x427d6b;
    (**(code **)(*param_1 + 0x6c))(param_1,param_2);
  }
  else {
    if ((0xff < *param_2) && (*param_2 < 0x109)) {
      tStack_20.x = 0x427d87;
      piVar3 = FUN_00444864(param_1);
      if (piVar3 != (int *)0x0) {
        tStack_20.x = 0x427d9b;
        cVar2 = (**(code **)(*piVar3 + 0xdc))(piVar3,param_1,param_2);
        if (cVar2 != '\0') {
          return;
        }
      }
    }
    tStack_20.x = param_1[0x86];
    (**(code **)(*param_1 + 0xb4))(param_1,param_2,param_1[0x82]);
    uVar1 = *param_2;
    if (uVar1 == 0x30) {
      if (*PTR_DAT_004ab7d4 != '\0') {
        SendMessageA((HWND)param_1[0x82],0xd3,3,0);
      }
    }
    else if (((uVar1 == 0x201) || (uVar1 == 0x203)) && (*(char *)((int)param_1 + 0x4d) == '\x01')) {
      GetCursorPos(&tStack_20);
      FUN_0042e2d8(param_1,&tStack_20.x,&LStack_18);
      tStack_20.x = LStack_18;
      tStack_20.y = LStack_14;
      lParam = FUN_004070fc((undefined2 *)&tStack_20);
      SendMessageA((HWND)param_1[0x82],0x202,0,lParam);
      FUN_0042edc0(param_1,'\0',-1);
    }
  }
  return;
}



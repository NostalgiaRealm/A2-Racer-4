
/* ==== FUN_0044d0f8 @ 0044d0f8 ==== 
 * signature: undefined4 __register FUN_0044d0f8(int param_1, LPMSG param_2, uint param_3)
 * body: 0044d0f8-0044d18f
 */

undefined4 FUN_0044d0f8(int param_1,LPMSG param_2,uint param_3)

{
  bool bVar1;
  BOOL BVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint local_10;
  
  uVar4 = 0;
  local_10 = param_3;
  BVar2 = PeekMessageA(param_2,(HWND)0x0,0,0,1);
  if (BVar2 != 0) {
    uVar4 = 1;
    if (param_2->message == 0x12) {
      *(undefined1 *)(param_1 + 0x8c) = 1;
    }
    else {
      local_10 = local_10 & 0xffffff00;
      if (*(short *)(param_1 + 0xc2) != 0) {
        (**(code **)(param_1 + 0xc0))(*(undefined4 *)(param_1 + 0xc4),param_2,&local_10);
      }
      uVar3 = FUN_0044d05c(param_1,param_2);
      if (((char)uVar3 == '\0') && ((char)local_10 == '\0')) {
        bVar1 = FUN_0044cf54(param_1,param_2);
        if (!bVar1) {
          uVar3 = FUN_0044cfa4(param_1,(int *)param_2);
          if ((char)uVar3 == '\0') {
            bVar1 = FUN_0044cf30(param_1,param_2);
            if (!bVar1) {
              TranslateMessage(param_2);
              DispatchMessageA(param_2);
            }
          }
        }
      }
    }
  }
  return uVar4;
}



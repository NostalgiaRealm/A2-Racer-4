
/* ==== FUN_004420d0 @ 004420d0 ==== 
 * signature: undefined4 __register FUN_004420d0(int param_1, LPMSG param_2, uint param_3)
 * body: 004420d0-00442167
 */

undefined4 FUN_004420d0(int param_1,LPMSG param_2,uint param_3)

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
      uVar3 = FUN_00442034(param_1,param_2);
      if (((char)uVar3 == '\0') && ((char)local_10 == '\0')) {
        bVar1 = FUN_00441f2c(param_1,param_2);
        if (!bVar1) {
          uVar3 = FUN_00441f7c(param_1,(int *)param_2);
          if ((char)uVar3 == '\0') {
            bVar1 = FUN_00441f08(param_1,param_2);
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



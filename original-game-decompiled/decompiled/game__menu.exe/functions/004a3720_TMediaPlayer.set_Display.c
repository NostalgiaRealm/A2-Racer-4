
/* ==== TMediaPlayer.set_Display @ 004a3720 ==== 
 * signature: undefined __register TMediaPlayer.set_Display(int param_1, int * param_2)
 * body: 004a3720-004a37a4
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMediaPlayer_set_Display(int param_1,int *param_2)

{
  MCIERROR MVar1;
  undefined4 extraout_ECX;
  undefined1 auStack_1c [4];
  int local_18;
  
  if (((param_2 == (int *)0x0) || (*(char *)(param_1 + 0x2c9) == '\0')) ||
     (*(char *)(param_1 + 0x2cf) == '\0')) {
    *(int **)(param_1 + 0x2f4) = param_2;
  }
  else {
    *(undefined4 *)(param_1 + 0x2d0) = 0x10002;
    local_18 = FUN_004349e0(param_2);
    MVar1 = mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x841,*(DWORD_PTR *)(param_1 + 0x2d0)
                            ,(DWORD_PTR)auStack_1c);
    *(MCIERROR *)(param_1 + 0x2ec) = MVar1;
    if (MVar1 == 0) {
      *(int **)(param_1 + 0x2f4) = param_2;
      FUN_0041564c((int)param_2,param_1,extraout_ECX);
    }
    else {
      *(undefined4 *)(param_1 + 0x2f4) = 0;
    }
  }
  return;
}



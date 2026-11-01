
/* ==== FUN_004a2bd0 @ 004a2bd0 ==== 
 * signature: undefined __register FUN_004a2bd0(int * param_1, undefined4 param_2, int param_3)
 * body: 004a2bd0-004a2c93
 */

void FUN_004a2bd0(int *param_1,undefined4 param_2,int param_3)

{
  MCIERROR MVar1;
  int local_c;
  
  if (*(short *)((int)param_1 + 0x2da) != 0) {
    param_1[0xb4] = 0;
    if (*(char *)((int)param_1 + 0x2d6) == '\0') {
      param_1[0xb4] = 2;
    }
    else {
      if ((char)param_1[0xb5] != '\0') {
        param_1[0xb4] = 2;
      }
      *(undefined1 *)((int)param_1 + 0x2d6) = 0;
    }
    if (*(char *)((int)param_1 + 0x2d7) != '\0') {
      if (*(char *)((int)param_1 + 0x2d5) != '\0') {
        param_1[0xb4] = param_1[0xb4] | 1;
      }
      *(undefined1 *)((int)param_1 + 0x2d7) = 0;
    }
    local_c = param_3;
    local_c = FUN_004349e0(param_1);
    MVar1 = mciSendCommandA((uint)*(ushort *)((int)param_1 + 0x2da),0x804,param_1[0xb4],
                            (DWORD_PTR)&local_c);
    param_1[0xbb] = MVar1;
    if (MVar1 == 0) {
      *(undefined1 *)((int)param_1 + 0x2c9) = 0;
      *(undefined2 *)((int)param_1 + 0x2da) = 0;
      *(undefined2 *)((int)param_1 + 0x28e) = 0;
      FUN_004a1ca0(param_1);
    }
  }
  return;
}



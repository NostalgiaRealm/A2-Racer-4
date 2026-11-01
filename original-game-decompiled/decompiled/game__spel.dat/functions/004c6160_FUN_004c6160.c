
/* ==== FUN_004c6160 @ 004c6160 ==== 
 * signature: int __cdecl FUN_004c6160(int * param_1, int param_2, DWORD param_3)
 * body: 004c6160-004c617c;004c6180-004c61f2;004c61fd-004c6229;004c6234-004c62a7
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c617d-004c617f 004c61f3-004c61fc 004c622a-004c6233 004c62a8-004c62b1
 */

int __cdecl FUN_004c6160(int *param_1,int param_2,DWORD param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____null_ptr_assignment___005b4a4c);
  }
  if (DAT_00740914 == 0) {
    iVar1 = FUN_0055a06b(param_1,param_2,param_3);
    return iVar1;
  }
  iVar1 = FUN_005692e1((int)DAT_00740904);
  iVar2 = FUN_005692e1((int)param_1);
  if (iVar2 != iVar1) {
    iVar1 = FUN_0055a06b(param_1,param_2,param_3);
    return iVar1;
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      iVar1 = FUN_0055a06b(DAT_00740904,DAT_00740910 + param_2,0);
      return iVar1;
    }
    if (param_3 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____illegal_fseek_cmd__005b4a2c);
    }
    if (DAT_007408fc < DAT_007408fc + param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____fseeking_past_end_file__005b4a00);
    }
    iVar1 = FUN_0055a06b(DAT_00740904,DAT_007408fc + param_2,0);
    return iVar1;
  }
  iVar1 = DAT_00740910 + param_2;
  if ((iVar1 <= DAT_007408fc) && (DAT_00740910 <= iVar1)) {
    iVar1 = FUN_0055a06b(DAT_00740904,iVar1,0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____fseeking_past_end_or_be_005b49d0);
}




/* ==== FUN_004c7880 @ 004c7880 ==== 
 * signature: undefined4 __cdecl FUN_004c7880(LPCSTR param_1, int param_2)
 * body: 004c7880-004c7a04
 */

undefined4 __cdecl FUN_004c7880(LPCSTR param_1,int param_2)

{
  FILE *pFVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char local_2c [22];
  short local_16;
  int local_14;
  short local_c;
  undefined2 local_a;
  undefined4 local_4;
  
  if (DAT_00740950 != 0) {
    pFVar1 = (FILE *)FUN_004c62c0(param_1);
    if (pFVar1 == (FILE *)0x0) {
      FUN_004c3fa0((byte *)s___s__005b5540);
      return 1000;
    }
    uVar2 = FUN_00558b35(local_2c,0x2c,1,(int *)pFVar1);
    if (uVar2 != 1) {
      FUN_004c6430(pFVar1);
      return 0x3e9;
    }
    FUN_004c3fa0((byte *)s_file____s_005b552c);
    FUN_004c3fa0((byte *)s_bufferlength__d_005b5518);
    FUN_004c3fa0((byte *)s_samplerate___d_005b5504);
    FUN_004c3fa0((byte *)s_bpps___d_005b54f0);
    FUN_004c3fa0((byte *)s_align___d_stereo__d_005b54d4);
    iVar4 = param_2 * 0x44;
    *(undefined4 *)(iVar4 + 0x3c + DAT_00740934) = local_4;
    if (*(int *)(iVar4 + 0x34 + DAT_00740934) == 0) {
      uVar3 = FUN_004c69c0(local_4,local_14,local_a,(int)local_c,(uint)(1 < local_16));
      *(undefined4 *)(iVar4 + 0x28 + DAT_00740934) = uVar3;
      if (*(int *)(iVar4 + 0x28 + DAT_00740934) == 0) {
        return 2000;
      }
    }
    else {
      iVar4 = FUN_004c6a90((undefined4 *)(iVar4 + 0x28 + DAT_00740934),iVar4 + 0x2c + DAT_00740934,
                           local_4,local_14,local_a,(int)local_c,(uint)(1 < local_16));
      if (iVar4 != 0) {
        return 2000;
      }
    }
    FUN_004c7750(param_2,(int *)pFVar1,local_4,0x2c);
    FUN_004c6430(pFVar1);
  }
  return 0;
}



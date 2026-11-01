
/* ==== FUN_0040492a @ 0040492a ==== 
 * signature: undefined4 __cdecl FUN_0040492a(float param_1)
 * body: 0040492a-00404953;00404957-00404a2a
 */

undefined4 __cdecl FUN_0040492a(float param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  fVar2 = param_1;
  if (((int)param_1 < 6) || (0x12 < (int)param_1)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____FSM_object_index___d__d_0058f384);
  }
  if (DAT_006fb8d4 == 0) {
    param_1 = DAT_005d1b24;
  }
  else {
    param_1 = DAT_005d1b28;
  }
  iVar4 = (int)fVar2 * 0x294;
  fVar5 = FUN_004a6800(0x7128b0);
  fVar1 = *(float *)(&DAT_005cea50 + iVar4);
  *(float *)(&DAT_005cea50 + iVar4) = (float)(fVar5 + (float10)fVar1);
  if ((float10)param_1 < fVar5 + (float10)fVar1) {
    *(undefined4 *)(&DAT_005cea50 + iVar4) = 0;
    FUN_00423990((&DAT_005ce9e8)[(int)fVar2 * 0xa5],0);
    FUN_0043a590(*(int *)(&DAT_005cea34 + iVar4));
    return 1;
  }
  iVar3 = FUN_004a7200(*(int *)((&DAT_005ce9e8)[(int)fVar2 * 0xa5] * 0xf0 + 0x34 + DAT_00715e50),
                       *(int *)(*(int *)(&DAT_005cea34 + iVar4) * 0xf0 + 0x34 + DAT_00715e50));
  if (DAT_005d1b2c < iVar3) {
    FUN_0043a590(*(int *)(&DAT_005cea34 + iVar4));
    return 1;
  }
  return 0;
}


